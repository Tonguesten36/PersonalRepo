from RomanToDecimal.DecimalToRomanPackage import DecimalToRomanModule as dec_to_roman

one = "I"
five = "V"
ten = "X"
fifty = "L"
hundred = "C"
five_hundred = "D"
thousand = "M"


# TODO: CREATE A ROMAN TO NUMBER CONVERTER
def roman_to_decimal():
    pass


def decimal_to_roman():
    # TODO: FINISH THE NUMBER TO ROMAN CONVERTER HERE

    number = input("Enter any integer here: ")
    try:
        if int(number) > 0:
            print("-------------------------------")
            print("Decimal integer to Roman numeral conversion results:")
            if int(number) < 9:
                print(dec_to_roman.OneToEight(number))
            elif 9 <= int(number) < 19:  # Printing Roman numerals from 9 to 18
                print(dec_to_roman.NineToEighteen(number))
            elif 19 <= int(number) < 29:
                print(dec_to_roman.NineteenToTwentyEight(number))
            print("-------------------------------")
        else:
            print("Type again")
    except ValueError:
        print("Try again")


def main_program():
    while True:
        print("######### ROMAN NUMERAL CONVERTER #########")
        # print("R. Romans -> Decimal numbers")
        print("D. Decimal numbers -> Romans")
        print("A. About this software")
        print("E. Exit")

        opt = input("Enter an operation's index: ")

        if opt == "D" or opt == "d":
            print("Converting numerals to romans")
            decimal_to_roman()
        elif opt == "A" or opt == "a":
            print("About this software")
        elif opt == "E" or opt == "e":
            print("Exiting software")
            exit()
        else:
            print("Try again")

        print("------------------------------------")


if __name__ == '__main__':
    main_program()
