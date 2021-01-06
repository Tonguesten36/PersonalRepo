#include <iostream>
#include "QuizApp.h"

// This is the second questions set in the Quiz App, the topic is culture.
void QuestionSetCulture()
{
	cout << "################ CULTURE #################" << endl;
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
		"Turkey") ? score++ : 0;
	
	int q2 = QuestionManager(2, "Name the smallest Asian country in terms of both population and area?",
		"Palau",
		"Maldive", 
		"Cook Island", 
		"Timor Leste") ? score++ : 0;
	
	int q3 = QuestionManager(3, "Fortune cookies were first made in which of the following countries?", 
		"China",
		"Japan", 
		"The United States of America", 
		"Vietnam") ? score++ : 0;
	
	int q4 = QuestionManager(1, "When playing pato, Argentina's national sport, today's players use a leather ball with several handles. Originally, participants played with what?", 
		"A live duck in a basket", 
		"A roll of pampas", 
		"A rock", 
		"A coconut") ? score++ : 0; 
	
	int q5 = QuestionManager(1, "Maltese, the language spoken in Malta, a European Union island nation in the Mediterranean Sea, is derived from what language?", 
		"Arabic", 
		"Old Norse", 
		"Russian", 
		"Turkish") ? score++ : 0;
		
	int q6 = QuestionManager(2, "In the U.S, Canada and most European countries, when are you expected to show up?",
		"Late", 
		"On time", 
		"Earlier than the appointed time", 
		"Never") ? score++ : 0;	
	
	int q7 = QuestionManager(4, "The official language(s) in India?",
		"English",
		"Hindi",
		"Sanskrit",
		"Both Hindi and English") ? score++ : 0;
	
	int q8 = QuestionManager(1, "In which culture would you most typically see “high fives” at the office?",
		"The United States of America",
		"The United Kingdom",
		"Canada",
		"France") ? score++ : 0;
	
	int q9 = QuestionManager(2, "In which culture are you most likely to go out drinking with your boss?",
		"The United Kingdom",
		"Japan",
		"The United States of America",
		"China") ? score++ : 0;
	
	int q10 = QuestionManager(4, "In which culture are people most likely to directly critique a boss’ idea?",
		"Germany",
		"The United States of America",
		"Isreal",
		"Israel") ? score++ : 0;
	
	cout << "###" << endl;
	cout << "Your final score: " << score << endl;
	cout << "###" << endl;
}

