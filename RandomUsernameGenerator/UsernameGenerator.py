import random
from time import sleep


def generate_username(operation):
    print("Generating username...")

    username = []
    # Generating a standard username
    if operation == "S" or operation == "s":
        # You're welcome to update the lists if you wish to
        names = ["Noob", "Lord", "Hot",
                 "Master", "Lord", "Gangster",
                 "Great", "Retro", "Slayer",
                 "Shredder", "Wind", "Moon", "Pepe"]

        for i in range(0, 2, 1):
            username.append(names[random.randint(0, len(names) - 1)])
        for i in range(0, 2, 1):
            numbers = chr(random.randint(48, 57))
            username.append(numbers)

        sleep(2)
        print("New username: ", end="")
        return "".join(username)
    # Generating a username with your real name (and numbers)
    elif operation == "Y" or operation == "y":
        firstName = input("Enter your first name here: ")
        lastName = input("Enter your last name here: ")

        username.append(firstName)
        username.append(lastName)
        for i in range(0, 2, 1):
            numbers = chr(random.randint(48, 57))
            username.append(numbers)

        sleep(2)
        print("New username: ", end="")
        return "".join(username)
    # Generating a username for hardcore gamers
    elif operation == "P" or operation == "p":
        # Feel free to add more pro-gamer-symbol variants
        pro_gamer_symbol_classic_one = ["XXX_", "_XXX"]
        pro_gamer_symbol_classic_two = ["__xxxXXX_", "_XXXxxx__"]

        # Also, you're allowed to make changes to this list
        names = ["Noob", "Lord", "Hot",
                 "Master", "Lord", "Gangster",
                 "Great", "Retro", "Slayer",
                 "Shredder", "Wind", "Moon", "Pepe"]

        # This value determines how many names can be inserted between the two pro_gamer_symbol
        max_username_size = 5

        random_symbols = random.randint(0, 1)

        for i in range(0, max_username_size, 1):
            if i == 0:  # Inserting the pro_gamer_symbol at the beginning

                # This statement uses the Ternary Operator, and it determines which pro-gamer-symbol-type is going to get inserted into the username
                username.insert(0, pro_gamer_symbol_classic_one[0]) \
                    if random_symbols == 0\
                    else username.insert(0, pro_gamer_symbol_classic_two[0])

            elif i == max_username_size - 1:  # Inserting the pro_gamer_symbol at the end

                # Same as above, but inserted at the end of the username
                username.insert(max_username_size - 1, pro_gamer_symbol_classic_one) \
                    if random_symbols == 0\
                    else username.insert(max_username_size - 1, pro_gamer_symbol_classic_two[1])

            else:  # Inserting any other kinds of names in the "names" list between the pro-gamer-symbols
                username.insert(i, names[random.randint(0, len(names) - 1)])

        sleep(2)
        print("New username: ", end="")
        return "".join(username)
    else:
        return "Try again"


def main_program():
    while True:
        print("########## USERNAME GENERATOR ##########")
        print("What kind of username do you want to have?")
        print("\"Standard\" username?\n"
              "\"Your real name\" username?\n"
              "\"Pro Gamer\" username?", end="\n")
        print("Enter one of these letters according to the username types above.")
        print("S: Standard\n"
              "Y: Your real name (with numbers)\n"
              "P: Pro Gamer\n")
        print("Or do you want to exit the program? Simply press E")

        opt = input("Enter here: ")

        if opt == "E" or opt == "e":
            print("Thank you for using this program...")
            exit()
            sleep(2)
        else:
            print("---------------------------------------------")
            print(generate_username(opt))
            print("---------------------------------------------")


if __name__ == '__main__':
    main_program()