#include <iostream>
#include "QuizApp.h"

using namespace std;

// This is the second questions set in the Quiz App, the topic is culture.
void QuestionSetCulture()
{
	// In this function, I used ternary operator to make the code look less cumbersome. It can be confusing to look at first, but you'll get used to it.
	
	// Here is how ternary operator works:
	// (condition) ? result_true : result_false
	
	// As you can see the condition will be evaluated on the "condition" part, it is located at the left side of the question-mark of the operator.
	// Moving on to the right side of the question-mark,
	// the "result_true" will be executed if the condition is true,
	// and "result_false" will be executed if vice versa
	
	// Note: you can add as many questions as you wish.
	
	int score = 0;
	
	int q1 = QuestionManager(1, "What was the former name of the country known since 1989 as Myanmar?",
		"Burma", 
		"Republic of Burma", 
		"Burma Democratic Republic", 
		"Turkey") ? 1 : 0;
	
	int q2 = QuestionManager(2, "Name the smallest Asian country in terms of both population and area?",
		"Palau",
		"Maldive", 
		"Cook Island", 
		"Timor Leste") ? 1 : 0;
	
	int q3 = QuestionManager(3, "Fortune cookies were first made in which of the following countries?", 
		"China",
		"Japan", 
		"The United States of America", 
		"Vietnam") ? 1 : 0;
	
	int q4 = QuestionManager(1, "When playing pato, Argentina's national sport, today's players use a leather ball with several handles. Originally, participants played with what?", 
		"A live duck in a basket", 
		"A roll of pampas", 
		"A rock", 
		"A coconut") ? 1 : 0; 
	
	int q5 = QuestionManager(1, "Maltese, the language spoken in Malta, a European Union island nation in the Mediterranean Sea, is derived from what language?", 
		"Arabic", 
		"Old Norse", 
		"Russian", 
		"Turkish") ? 1 : 0;		
	
	score = q1 + q2 + q3 + q4 + q5;
	
	cout << "###" << endl;
	cout << "Your final score: " << score << endl;
	cout << "###" << endl;
}

