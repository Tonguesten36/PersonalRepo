import time
import winsound


def countdown(t):
    while t > 0:
        mins, secs = divmod(t, 60)
        current_timer = '{:02d}:{:02d}'.format(mins, secs)
        print(f"\rCurrent time left: {current_timer}", end="")
        time.sleep(1)
        t -= 1
    print("")
    print("Time's up!")


def create_task():
    a = 0
    while a < 1:
        print("---------| Creating a new task |---------")
        new_task = str(input("Enter task here: "))
        new_timer = input("How long do you want to do the task? (in seconds, you'll have to calculate yourself if you're doing the task in more than 1 minute): ")

        print(f"Current task: {new_task}")
        if int(new_timer):
            countdown(int(new_timer))

            winsound.PlaySound('Alarm01.wav', winsound.SND_FILENAME)

            time.sleep(2)
            repeat_operation = input("Do want to repeat the timer?[Y/N]: ")

            if repeat_operation == "N" or repeat_operation == "n":
                a = 1
            else:
                print("Repeating the process...")
                time.sleep(3)
        else:
            print("Try again.\n")


def about_program():
    print("#### About this program ####")
    print("----------| Tongue's Pomodoro Clock |----------")
    print("----------| Made in Pycharm: Community Edition 2019.2 |----------")


def main():
    print("----------| This is the Pomodoro Clock |----------")
    print("#### Choose an operation ####")
    print("1. Create a new task.")
    print("2. About this program.")
    print("3. Exit the program")

    opt = input("Enter here: ")
    if opt == "1":
        create_task()
    elif opt == "2":
        about_program()
    elif opt == "3":
        exit()
    else:
        print("Type again...")


if __name__ == '__main__':
    while True:
        main()
