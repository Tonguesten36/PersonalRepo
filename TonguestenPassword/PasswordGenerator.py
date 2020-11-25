import random
from time import sleep


def password_generator(length):
    password = []
    symbols = ["#", "$", "&", "@", "*", "!", "%"]

    # 0 = lower; 1 = upper; 2 = symbols
    # Generating a new password (with uppercase letter and symbols)
    for i in range(0, length):
        randomChar = random.randint(0, 2)
        if randomChar == 0:
            password.insert(i, chr(random.randint(97, 122)))
        else:
            if randomChar == 1:
                password.insert(i, chr(random.randint(65, 90)))
            else:
                if randomChar == 2:
                    password.insert(i, symbols[random.randint(0, 6)])

    return print("".join(password))


def main():
    print("################ GENERATING A PASSWORD ######################")

    request = input("------ Do you want to generate a new password? [Y/N] ")

    # check validity of the request
    try:
        str(request)
        # if the user said Yes
        if request == "Y" or request == "y":
            length = int(input("How long do you want your password to be? "))
            try:
                # prompt the user for password's length
                int(length)

                # prompt the user for intended password's feature (still work-in-progress)
                # uppercase_request = str(input("Uppercase letters in your password? [Y/N] "))  # do they want uppercase letter?
                # number_request = str(input("Numbers? [Y/N] "))  # numbers?
                # symbol_request = str(input("Symbols [Y/N] "))  # symbols?

                print("Generating password...")
                sleep(1)

                # generating password
                print("Password: \b")
                password_generator(length)

            # if the user does not return a specific length
            except ValueError:
                print("We need a specific number")
        else:
            # if the user said No
            if request == "N" or request == "n":
                print("Going back...")
                sleep(3)
            else:
                print("Please return an appropriate command.")
    except ValueError:
        print("An unknown error occur.")


def about():
    print("################ ABOUT THIS PROGRAM ######################")
    print("----------| Password Generator is a program that generates a randomised password |----------")
    print("----------| Made by Tonguesten |----------")


def main_program():
    a = 0
    while a < 1:
        print("################ PASSWORD GENERATOR ######################")
        print("------| Select the following operations |------")
        print("1. Password Generator \n2. About this software \n3. Exit the program")
        opt = input("Enter here: ")

        if opt == "1":
            main()
        elif opt == "2":
            about()
        elif opt == "3":
            print("Thank you for using this Password Generator...")
            sleep(3)
            a = 2
        else:
            print("No such operation exists")

