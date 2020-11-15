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


if __name__ == '__main__':
    while True:
        print("\n---------- Password Generator ----------")

        # check validity of the request
        try:
            request = input("------ Do you want to generate a new password? [Y/N] ")
            str(request)
            # if the user said Yes
            if request == "Y" or request == "y":
                try:
                    # prompt the user for password's length
                    length = int(input("How long do you want your password to be? "))
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
                    print("Thanks for using this project.")
                    for i in range(0, 3, 1):
                        print("...")
                        sleep(0.5)
                    sleep(0.5)
                    exit()
                else:
                    print("Please return an appropriate command.")
        except ValueError:
            print("An unknown error occur.")
