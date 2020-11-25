from time import sleep
from TonguestenPassword import PasswordGenerator as PG
from TonguestenPassword import PasswordManager as PM


if __name__ == '__main__':
    while True:
        print("################ PASSWORD UTILITY ######################")
        print("1. Password Generator\n2. Password Manager\n3. About the Password-Related Utility\n4. Exit the utility")
        operation = input("Choose an operation (enter an integer): ")

        if operation == "1":
            PG.main_program()
            print("--------------------------------------------------------------")
        elif operation == "2":
            PM.main_program()
        elif operation == "3":
            print("################ ABOUT THIS PROGRAM ######################")
            print("---------| This utility was developed by Tonguesten in 2020 |---------")
            print("---------| This utility was written in Python (3.9) |---------")
            print("--------------------------------------------------------------")
        elif operation == "4":
            print("################ EXITING THIS PROGRAM ######################")
            print("Thank you for using Password Utility...")
            sleep(3)
            exit()
        elif operation == "n":
            print("bye")
