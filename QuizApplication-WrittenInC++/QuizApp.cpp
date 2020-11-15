#include <iostream>
#include "QuizApp.h"
#include "synchapi.h"

using namespace std;

int main()
{
	QuizApp();
	return 0;	
}

void QuizApp()
{
	int a = 1;
	while(a < 2)
	{		
		cout << "" << endl;
		cout << "----------| Quiz App - Made by Tongue |----------" << endl;
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
		cout << "6: About this software" << endl;
		cout << "7: Exit the app" << endl;
		
		int chosenCategory;
		cout << "Enter here: ";
		cin >> chosenCategory;
		
		string txt = "Thank you for using this program...";
				
		switch(chosenCategory)
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
				cout << "----------| About this software|----------\n";
				cout << "-----| This software was developed by Nguyen Hoang Tung - Tonguesten |-----\n";
				cout << "\n"; 
				break;
			case 7:
				for(int i = 0; i < txt.size(); i++){
					cout << txt[i];
					Sleep(100);
				}
				for(int i = 0; i < 6; i++)
				{
					cout << ".";
					Sleep(500);
				}
				cout << "" << endl;
				a = 6;
				break;
			default:
				cout << "Category index out of bound." << endl;
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
	
	if(chosenAnswer == correctChoice)
	{
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
	else
	{
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

