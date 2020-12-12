import re


def PwdStrengthChecker(pwd):
    has_number_digits = re.search("[0-9]", pwd)
    has_uppercase_char = re.search("[A-Z]", pwd)
    has_symbol_char = re.search("[!@#%^&*]", pwd)
    if len(pwd) >= 8:
        if has_number_digits:
            if has_uppercase_char:
                if has_symbol_char:
                    return "This password is strong enough for today's standard (2020)."
                else:
                    return "Password must have at least one symbol (!, @, #, $, %, ^, &, *,)"
            else:
                return "Password must have at least one uppercase letter"
        else:
            return "Password should have at least a number"
    else:
        return "Password is too short, it should be at least 8 or more characters"


def main_program():
    print("######### PASSWORD STRENGTH CHECKER #########")
    password = input("Enter the password here to evaluate its strength: ")
    print(PwdStrengthChecker(password))


if __name__ == '__main__':
    main_program()