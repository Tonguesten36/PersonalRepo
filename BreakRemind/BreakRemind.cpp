// BreakTimer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma comment(lib, "winmm.lib")

#include <iostream>
#include <Windows.h>
#include <mmsystem.h>
#include <synchapi.h>

using namespace std;

void BreakTimer();
void PredefinedBreakTime();
void NewBreakTime(int minute);

int main()
{
	while (true)
	{
		string op;
		cout << "---------------| Tonguesten's Break Timer Utility |---------------" << endl;
		cout << "Do you want to use the utility? [Y/N] ";
		cin >> op;

		if (op == "Y" || op == "y")
		{
			BreakTimer();
		}
		else
		{
			if (op == "N" || op == "n")
			{
				string txt = "Thank you for using this utility";
				for (int i = 0; i < txt.length(); i++)
				{
					cout << txt[i];
					Sleep(50);
				}
				for (int i = 0; i < 3; i++)
				{
					cout << ".";
					Sleep(400);
				}
				return 0;
			}
		}
	}
}



void BreakTimer()
{
	int op;

	cout << "Do you want to choose a predefined break time periods?" << endl;
	cout << "1. Yes, I want to choose a predefined break period." << endl;
	cout << "2. No, I prefer to define my own break time period." << endl;
	cout << "3. On second thoughts..." << endl;

	cin >> op;

	if (op == 1)
	{
		cout << "### PREDEFINED BREAK PREIOD ###" << endl;
		PredefinedBreakTime();
	}
	else if (op == 2)
	{
		cout << "### NEW BREAK PERIOD ###" << endl;
		int minutes;
		cout << "Type out your own break period (type in how many minutes as you desire, oh and it should be an integer): ";
		cin >> minutes;
		NewBreakTime(minutes);
	}
}

void PredefinedBreakTime()
{
	int breakPeriod;
	cout << "5 minutes break (1)" << endl;
	cout << "10 minutes break (2)" << endl;
	cout << "15 minutes break (3)" << endl;
	cout << "30 minutes break (4)" << endl;

	cout << "Pick a break period (type in the index behind each): ";
	cin >> breakPeriod;

	switch (breakPeriod)
	{
	case 1:
		NewBreakTime(5);
		break;
	case 2:
		NewBreakTime(10);
		break;
	case 3:
		NewBreakTime(15);
		break;
	case 4:
		NewBreakTime(30);
		break;
	default:
		cout << "Try again" << endl;
		break;
	}
}

void NewBreakTime(int minutes) {
	if (minutes > 0)
	{
		int seconds = minutes * 60;

		int tempMinutes = minutes;
		int tempSeconds = 60;

		while (seconds >= 0)
		{
			// If the tempSeconds is 60 (which is a minute by the way), then the timer will display like the one in the if block
			if (tempSeconds == 60 || tempSeconds == 0)
			{
				cout << " ----- Time left: " << minutes << " Minutes | 0 Seconds ----- \r";

				// Set the tempSeconds back to 60 if it reaches to 0
				if (tempSeconds == 0)
				{
					tempSeconds = 60;
				}
			}
			else
			{
				// The minute will got minus by 1 if the tempSeconds is 59
				if (tempSeconds == 59)
				{
					minutes--;
				}
				cout << " ----- Time left: " << minutes << " Minutes | " << tempSeconds << " Seconds ----- \r";
			}

			Sleep(1000); // 1000 milliseconds = 1 second

			if (seconds == 0)
			{
				PlaySound(TEXT("Alarm01.wav"), NULL, SND_FILENAME);
				string op;
				cout << "Break time finished, do you want to continue? [Y/N]" << endl;
				cin >> op;
				if (op == "Y" || op == "y")
				{
					// If the user decided to continue the timer, start a new one with the same previous time
					NewBreakTime(tempMinutes);
				}
				else
				{
					if (op == "N" || op == "n")
					{
						break;
					}
				}
			}
			else
			{
				tempSeconds--;
				seconds--;
			}
		}
	}
	else
	{
		cout << "Error: A minute should not be a negative number." << endl;
	}

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
