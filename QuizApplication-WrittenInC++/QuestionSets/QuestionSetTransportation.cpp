#include <iostream>
#include "QuizApp.h"

// This is the fourth questions set in the Quiz App. This one is about transportation.
void QuestionSetTransportation()
{
	cout << "################ TRANSPORTAION #################" << endl;
	int score = 0;
	
	int q1 = QuestionManager(3, "The most ancient method of transportation?",
		"Cartwheel",
		"Horse",
		"On foot",
		"Boat") ? score++ : 0;

	int q2 = QuestionManager(1, "When did the first wheel got invented?",
		"4500-3300 BC",
		"3300-2200 BC",
		"2200-1550 BC",
		"There is no clear evidence yet...") ? score++ : 0;

	int q3 = QuestionManager(3, "What is the world's first airlines?",
		"American Airline",
		"Tamba Bay Airline",
		"Deutsche Luftschiffahrts-Aktiengesellschaft I",
		"Hummus Airline") ? score++ : 0;
		
	int q4 = QuestionManager(1, "The top 1 reason for traffic accidents?",
		"Distracted driving",
		"Drunk driver",
		"Fatigue",
		"Not wearing seatbelts") ? score++ : 0;

	int q5 = QuestionManager(3, "When did the Hindenburg disaster (the event when the last Zeppelin airship - known as Hindenburg - exploded) happened?",
		"1940",
		"1935",
		"1937",
		"1929") ? score++ : 0;
	
	int q6 = QuestionManager(2, "Which means of transport is being widely used in India",
		"Air", 
		"Land", 
		"Sea",
		"Underground") ? score++ : 0;
	
	int q7 = QuestionManager(2, "What were 3 main land transportation techniques before the 18h century?",
		"Car, Boat and Walking", 
		"Walking, Carriage and Wagon", 
		"Walking, Steam engine and Carriage", 
		"Walking, Bicycling and Steam engine") ? score++ : 0;
	
	int q8 = QuestionManager(4, "Where is the oldest road in history recorded?", 
		"Rome, Italy", 
		"Mumbai, Syria", 
		"Guangdong, India", 
		"Damascus, Syria") ? score++ : 0;
	
	int q9 = QuestionManager(3, "Where was the wheelbarrow invented?", 
		"Ancient China", 
		"Mesopotamia", 
		"Ancient Greek", 
		"Great Britain") ? score++ : 0;
	
	int q10 = QuestionManager(1, "Where did camels originate from?", 
		"North America", 
		"Mongolia", 
		"Middle East", 
		"North Africa") ? score++ : 0;
	
	cout << "###" << endl;
	cout << "Your final score: " << score << endl;
	cout << "###" << endl;
}

