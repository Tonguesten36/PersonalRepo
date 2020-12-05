from time import sleep
from TonguestenPasswordUtility import PasswordGenerator as PG
from TonguestenPasswordUtility import PasswordManager as PM


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
            print("--------------------------------------------------------------")
        elif operation == "3":
            print("################ ABOUT THIS PROGRAM ######################")
            print("---------| This utility was developed by Tonguesten in 2020 |---------")
            print("---------| This utility was written in Python (3.9) |---------")
            print("--------------------------------------------------------------")
        elif operation == "4":
            print("################ EXITING THIS PROGRAM ######################")
            thank_you = "Thank you for using this program"
            for i in thank_you:
                print(f"{i}", end="")
                sleep(0.1)
            for i in range(0, 3, 1):
                print(".", end="")
                sleep(0.5)
            exit()
        elif operation == "n":
            print("bye")
