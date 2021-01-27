#include <iostream>
#include "QuestionSets/QuizApp.h"
#include "synchapi.h"

using namespace std;

int main()
{
	QuizApp();
	return 0;
}

void QuizApp()
{
	int a = 0;
	while(a < 2)
	{
		cout << "################ QUIZ APP - MADE BY TONGUESTEN #################" << endl;
		Sleep(100);
		cout << "-- Welcome to Quiz App, User --" << endl;
		Sleep(75);
		cout << "-- Select one command from below --" << endl;
		Sleep(75);

		cout << "1: Food." << endl;
		cout << "2: Culture." << endl;
		cout << "3: Religion." << endl;
		cout << "4: Transportation." << endl;
		cout << "5: History." << endl;
		cout << "6: Tech." << endl;
		cout << "7: Natural science." << endl;
		cout << "8: About this program" << endl;
		cout << "9: Exit the app" << endl;

		int category;
		cout << "Enter here: ";
		cin >> category;
		
		string txt = "Thank you for using this program...";
		switch(category)
		{
			case 1:
				QuestionSetFood();
				break;
			case 2:
				QuestionSetCulture();
				break;
			case 3:
				QuestionSetReligion();
				break;
			case 4:
				QuestionSetTransportation();
				break;
			case 5:
				QuestionSetHistory();
				break;
			case 6:
				QuestionSetTech();
				break;
			case 7:
				QuestionSetNaturalScience();
				break;
			case 8:
				cout << "################ ABOUT THIS SOFTWARE ###################\n";
				cout << "-----| This software was developed by Nguyen Hoang Tung - Tonguesten |-----\n";
				cout << "-----| Developed by using Dev-C++ (Version 5.11) |-----\n";
				cout << "\n";
				break;
			case 9:
				cout << "########################################################" << endl;
				for(int i = 0; i < txt.size(); i++)
				{
					cout << txt[i];
					Sleep(100);
				}
				for(int i = 0; i < 6; i++)
				{
					cout << ".";
					Sleep(500);
				}
				cout << "" << endl;
				a = 2;
				break;
			default:
				cout << "Try again" << endl;
				break;
		}
	}
}

bool QuestionManager(int correctChoice, string question, string firstChoice, string secondChoice, string thirdChoice, string fourthChoice)
{
	cout << "---------------------------------" << endl;
	cout << question << endl;
	string choices[4] = {firstChoice, secondChoice, thirdChoice, fourthChoice};

	for(int i = 0; i < 4; i++)
	{
		cout << i + 1 << ". " << choices[i] << endl;
	}

	int chosenAnswer;
	cout << "Answer here: ";
	cin >> chosenAnswer;

	string correct = "The answer is correct";
	string incorrect = "The answer is incorrect";
	
	// If the user choose the right answer...
	if(chosenAnswer == correctChoice)
	{
		// Let them know that they chose the correct one.
		for(int i = 0; i < correct.size(); i++)
		{
			cout << correct[i];
			Sleep(50);
		}
		for(int j = 0; j < 3; j++)
		{
			cout << ".";
			Sleep(500);
		}
		cout << "" << endl;
		return true;
	}
	// And if they don't...
	else
	{
		// Notify them that they answered incorrectly.
		for(int i = 0; i < incorrect.size(); i++)
		{
			cout << incorrect[i];
			Sleep(50);
		}
		for(int j = 0; j < 3; j++)
		{
			cout << ".";
			Sleep(500);
		}
		cout << "" << endl;
		return false;
	}
}

