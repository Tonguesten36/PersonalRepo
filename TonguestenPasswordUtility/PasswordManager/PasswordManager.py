import sqlite3
from time import sleep
from pip._vendor.distlib.compat import raw_input


# For creating a new database
def create_new_database(database):
    # You can add your own database file if you want, as long as you replace the placeholder file "PasswordDatabase.db"
    connection = sqlite3.connect(database)
    cursor = connection.cursor()

    sql_create_table = """CREATE TABLE Password (
    website NVARCHAR(50) NOT NULL,
    accountName NVARCHAR(50) NOT NULL,
    password NVARCHAR(50) NOT NULL);
    """

    try:
        cursor.execute(sql_create_table)
    except sqlite3.DatabaseError:
        print("Table already exists, sorry about that!")

    connection.commit()
    connection.close()


# Operation 1: List all passwords available
def list_all_password_available(database):
    connection = sqlite3.connect(database)
    cursor = connection.cursor()
    
    display_password_all = "SELECT * FROM Password"
    cursor.execute(display_password_all)
    ans = cursor.fetchall()

    print("################## Here are the available passwords: #########################")
    for i in ans:
        print(f"{i}")
    connection.close()


# Operation 2: Find a password from a specific website
def find_password_from_database(database):
    connection = sqlite3.connect(database)
    cursor = connection.cursor()

    print("################ FIND A PASSWORD FROM A SPECIFIC WEBSITE ######################")

    print("Enter the website that might contains the password you're looking for in the database")
    web_input = raw_input("Enter here: ")

    try:
        # Searching for the password and account based on the associated website
        select_with_website = "select accountName, password from Password where website = \"{}\";".format(web_input)
        cursor.execute(select_with_website)
        # Checking if the website that you're looking for exists in the database
        web_exist = bool(cursor.fetchall())

        if web_exist:
            # If the website is found
            select_with_website = "select accountName, password from Password where website = \"{}\";".format(web_input)
            cursor.execute(select_with_website)
            return_value = cursor.fetchall()
            print("\nHere are the accounts for the {} website".format(web_input))
            print(return_value)
        else:
            # If the website is not found
            print("Website not found in the database")
    except sqlite3.OperationalError:
        # If the user forget to type inside the double quotes
        print("Are you sure that you're typing the website inside the double quotes?")

    connection.close()


# Operation 3: Create a new password
def create_new_password(database):
    connection = sqlite3.connect(database)
    cursor = connection.cursor()

    print("################ CREATE A NEW PASSWORD ######################")

    # Ask the user how many passwords do they want to add
    how_many_password = input("How many passwords do you want to add? (enter here) ")

    # Check if the user is typing in an integer
    try:
        if int(how_many_password) > 0:
            # Asking the user to enter necessary data for the process,
            # and repeat the process according to their how_many_password input
            for i in range(int(how_many_password)):
                new_website = raw_input("Enter the new website: ")
                new_username = raw_input("Enter the new username: ")
                new_password = raw_input("Enter the new password: ")
                param = (new_website, new_username, new_password)

                # Add the newly entered data into the database
                cursor.execute("insert into Password values (?, ?, ?)", param)
    except ValueError:
        print("Try again.")

    connection.commit()
    connection.close()


def delete_password_from_database(database):
    connection = sqlite3.connect(database)
    cursor = connection.cursor()

    print("################ DELETE A PASSWORD FROM THE DATABASE ACCORDING TO THE ACCOUNT'S NAME ######################")
    print("Which account do you want to wipe out from the database?")
    delete_target = raw_input("Enter the account's name that you wish to delete here (case sensitive): ")

    try:
        check_account = "SELECT * FROM Password WHERE accountName = \"?\";" + (str(delete_target))
        cursor.execute(check_account)
        account_exists = bool(cursor.fetchall())

        # Check if the target website exists
        if account_exists:
            print("Deleting the account {}".format(delete_target))
            deleting_password = "DELETE FROM Password WHERE accountName = \"?\";" + (str(delete_target))
            cursor.execute(deleting_password)
            connection.commit()
        else:
            print("Cannot found the target account.")
    except ValueError:
        print("Try again.")
    finally:
        connection.close()


def edit_password_info(database):
    connection = sqlite3.connect(database)
    cursor = connection.cursor()

    print("################ EDIT A PASSWORD'S INFO ######################")

    print("Enter the website's name and the account name to edit a password")
    website = raw_input("Website: ")
    account = raw_input("Account: ")
    new_password = raw_input("Enter your new password here: ")

    try:
        check_account_existence = "SELECT password FROM Password WHERE accountName = ?, website = ?" + account
        cursor.execute(check_account_existence)
        web_and_account_exists = bool(cursor.fetchall())

        if web_and_account_exists:
            edit_info = "UPDATE Password SET password = ?, accountName = ?"
            cursor.execute(edit_info, (new_password, website, account))
            connection.commit()
            print("Password successfully updated.")
        else:
            print("There is not such website and account in the database.")
    except sqlite3.OperationalError:
        print("Something went wrong. The account that you're looking for might not be exists")
    finally:
        connection.close()


def main_program():
    a = 0
    while a < 1:
        print()
        print("################ PASSWORD MANAGER ######################")

        print("Welcome to the Password Manager, user. Here is a list of operations you could use in this program:")
        print("0. Create a new password database (if it's not available already")
        print("1. List all passwords available")
        print("2. Find a password with its according website")
        print("3. Add a new password")
        print("4. Remove a password")
        print("5. Edit a password's info")
        print("6. About this program")
        print("7. Exit the program")
        opt = input("Enter here: ")

        # The database file in the folder
        database = "PasswordDatabase.db"

        if opt == "0":
            create_new_database(database)
        elif opt == "1":
            list_all_password_available(database)
        elif opt == "2":
            find_password_from_database(database)
        elif opt == "3":
            create_new_password(database)
        elif opt == "4":
            delete_password_from_database(database)
        elif opt == "5":
            edit_password_info(database)
        elif opt == "7":
            thank_you = "Thank you for using Password Manager"
            for i in thank_you:
                print(f"{i}", end="")
                sleep(0.1)
            for i in range(0, 3, 1):
                print(".", end="")
                sleep(0.5)
            a = 1
        else:
            print("Try again.")


if __name__ == '__main__':
    main_program()
