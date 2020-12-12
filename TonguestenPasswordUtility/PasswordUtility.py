from time import sleep

from TonguestenPasswordUtility.PasswordGenerator import PasswordGenerator as PG
from TonguestenPasswordUtility.PasswordManager import PasswordManager as PM
from TonguestenPasswordUtility.PasswordStrengthChecker import PasswordStrengthChecker as PSC


if __name__ == '__main__':
    while True:
        print("################ PASSWORD UTILITY ######################")
        print("G. Password Generator\n"
              "M. Password Manager\n"
              "S. Password Strength Checker\n"
              "A. About the Password-Related Utility\n"
              "E. Exit the utility")
        operation = input("Choose an operation: ")

        if operation == "G":
            PG.main_program()
            print("--------------------------------------------------------------")
        elif operation == "M":
            PM.main_program()
            print("--------------------------------------------------------------")
        elif operation == "A":
            print("################ ABOUT THIS PROGRAM ######################")
            print("This utility was developed by Tonguesten in 2020")
            print("This utility was written in Python (3.9)")
            print("--------------------------------------------------------------")
        elif operation == "S":
            PSC.main_program()
            print("--------------------------------------------------------------")
        elif operation == "E":
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
