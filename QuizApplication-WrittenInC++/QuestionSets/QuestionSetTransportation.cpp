#include <iostream>
#include "QuizApp.h"

using namespace std;

// This is the fourth questions set in the Quiz App. This one is about transportation.
void QuestionSetTransportation()
{
	int score = 0;
	
	int q1 = QuestionManager(3, "The most ancient method of transportation?",
		"Cartwheel",
		"Horse",
		"On foot",
		"Boat") ? 1 : 0;

	int q2 = QuestionManager(4, "When did the first wheel got invented?",
		"4500-3300 BC",
		"3300-2200 BC",
		"2200-1550 BC",
		"There is no clear evidence yet...") ? 1 : 0;

	int q3 = QuestionManager(3, "What is the world's first airlines?",
		"American Airline",
		"Tamba Bay Airline",
		"Deutsche Luftschiffahrts-Aktiengesellschaft I",
		"Hummus Airline") ? 1 : 0;
		
	int q4 = QuestionManager(1, "The top 1 reason for traffic accidents?",
		"Distracted driving",
		"Drunk driver",
		"Fatigue",
		"Not wearing seatbelts") ? 1 : 0;

	int q5 = QuestionManager(3, "When did the Hindenburg disaster (the event when the last Zeppelin airship - known as Hindenburg - exploded) happened?",
		"1940",
		"1935",
		"1937",
		"1929") ? 1 : 0;
	
	score = q1 + q2 + q3 + q4 + q5;
	
	cout << "###" << endl;
	cout << "Your final score: " << score << endl;
	cout << "###" << endl;
}

