#include <iostream>
#include "QuizApp.h"

using namespace std;

// This is the third questions set in the Quiz App, this one is about religions. (No discriminative questions here, mind you!)
void QuestionSetReligion()
{
	cout << "################ RELIGION #################" << endl;
	// In this function, I used ternary operator to make the code look less cumbersome. It can be confusing to look at first, but you'll get used to it.
	
	// Here is how ternary operator works:
	// (condition) ? result_true : result_false
	
	// As you can see the condition will be evaluated on the "condition" part, it is located at the left side of the question-mark of the operator.
	// Moving on to the right side of the question-mark,
	// the "result_true" will be executed if the condition is true,
	// and "result_false" will be executed if vice versa
	
	// Note: you can add as many questions as you wish.
	
	int score = 0;
	
	int q1 = QuestionManager(1, "What are The Five Pillars of Islam?",
		"shahada, salat, zakat, sawm, hajj", 
		"shazat, zalam, sawn, hajid",
		"qibla, haya, halal, ahalla, imam",
		"zawarudo, jihad, sura, haram, ijma") ? 1 : 0;
	
	int q2 = QuestionManager(2, "Who founded Buddhism?",
		"Ranjeet Singh",
		"Siddhartha Gautama",
		"Dalai Lama",
		"Me, the creator of this app") ? 1 : 0;
	
	int q3 = QuestionManager(4, "What time did the first Crusade happened?", 
		"1009",
		"1096",
		"1090",
		"1095") ? 1 : 0;
	
	int q4 = QuestionManager(4, "Name one of these four religion groups that does not belong to the Chirstianity",
		"Protestant",
		"Lutheran", 
		"Eastern Orthodox",
		"Hellenism") ? 1 : 0;
	
	int q5 = QuestionManager(1, "What is the most recent and the most revolutionary religion? (Note that these are all religions, regardless of what people think about it)",
		"Humanism",
		"Scientology", 
		"Adonism",
		"None") ? 1 : 0;
	
	score = q1 + q2 + q3 + q4 + q5;
	
	cout << "###" << endl;
	cout << "Your final score: " << score << endl;
	cout << "###" << endl;
}

