one = "I"
five = "V"
ten = "X"
fifty = "L"
hundred = "C"
five_hundred = "D"
thousand = "_I"


# <summary>
# The input value range from 1 (inclusive) to 8 (inclusive)
# </summary>
def OneToEight(received_int):
    output_string = ""
    # Printing Roman numerals from 1 to 3
    if 1 <= int(received_int) < 4:
        for i in range(0, int(received_int), 1):
            output_string = output_string + one
    # Printing Roman numerals from 4 to 9
    elif 4 <= int(received_int) < 9:
        if int(received_int) == 4:
            output_string = one + five
        else:
            if int(received_int) >= 5:
                output_string = five
                limit = int(received_int) - 5
                for i in range(0, limit, 1):
                    output_string = output_string + one
    return output_string


# <summary>
# The input value range from 9 (inclusive) to 18 (inclusive)
# </summary>
def NineToEighteen(received_int):
    if int(received_int) == 9:
        # Print IX as the received_int 9 in Roman numerals
        output_string = one + ten
    else:
        # Print X as the received_int 10 in Roman numerals
        output_string = ten
        # Printing Roman numerals from 10 to 14
        if 15 > int(received_int) >= 10:
            limit = int(received_int) - 10
            if int(received_int) == 10:
                output_string = ten
            else:
                for i in range(0, limit, 1):
                    if limit < 4:
                        output_string = output_string + one
                    elif limit == 4:
                        output_string = output_string + one + five
                        return output_string

        elif int(received_int) >= 15:
            limit = int(received_int) - 15
            if received_int == 15:
                output_string = output_string + five
            else:
                output_string = output_string + five
                for i in range(0, limit, 1):
                    if 4 > limit >= 1:
                        output_string = output_string + one
                    if limit == 4:
                        output_string = output_string + one + ten
    return output_string


# <summary>
# The input value range from 19 (inclusive) to 29 (inclusive)
# </summary>
def NineteenToThirty(received_int):
    if int(received_int) == 19:
        output_string = ten + one + ten
    else:
        output_string = ten + ten
        if 24 > int(received_int) >= 20:
            for i in range(0, int(received_int) - 20, 1):
                output_string = output_string + one
        elif 29 > int(received_int) >= 24:
            limit = int(received_int) - 24

            if limit == 0:
                output_string = output_string + one + five
            else:
                if limit > 0:
                    output_string = output_string + five
                    if limit > 1:
                        for i in range(0, limit - 1, 1):
                            output_string = output_string + one
        elif int(received_int) == 29:
            output_string = ten + ten + one + ten

    return output_string


def ThirtyToFourty(received_int):
    output_string = ""

    for i in range(0, 3, 1):
        output_string = output_string + ten
    if int(received_int) > 30:
        limit = int(received_int) - 30
        for i in range(0, limit, 1):
            if limit < 5:
                output_string = output_string + one
                if limit == 4:
                    output_string = output_string + five
                    break
            elif limit == 5:
                output_string = output_string + five
                break

    return output_string

