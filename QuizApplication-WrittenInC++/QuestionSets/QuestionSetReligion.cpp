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
		"zawarudo, jihad, sura, haram, ijma") ? score++ : 0;
	
	int q2 = QuestionManager(2, "Who founded Buddhism?",
		"Ranjeet Singh",
		"Siddhartha Gautama",
		"Dalai Lama",
		"Me, the creator of this app") ? score++ : 0;
	
	int q3 = QuestionManager(4, "What time did the first Crusade happened?", 
		"1009",
		"1096",
		"1090",
		"1095") ? score++ : 0;
	
	int q4 = QuestionManager(4, "Name one of these four religion groups that does not belong to the Chirstianity",
		"Protestant",
		"Lutheran", 
		"Eastern Orthodox",
		"Hellenism") ? score++ : 0;
	
	int q5 = QuestionManager(1, "What is the most recent and the most revolutionary religion? (Note that these are all religions, regardless of what people think about it)",
		"Humanism",
		"Scientology", 
		"Adonism",
		"None") ? score++ : 0;
	
	int q6 = QuestionManager(3, "Which country is NOT a majority Christian nation?",
		"The United States", 
		"Brazil", 
		"India", 
		"The Philipines") ? score++ : 0;
	
	int q7 = QuestionManager(4, "Islam has two main branches, Sunni and Shia. But just like nearly every other religion, there are numerous sects. Which of the following does not consider itself Islamic?",
		"Ahmadiyya",
		"Alawite",
		"Ismaili",
		"Jainism") ? score++ : 0;

	int q8 = QuestionManager(3, "Into which fictional languages has the Bible been translated?",
		"Quenya",
		"Klingon",
		"All of these",
		"Na\'vi") ? score++ : 0;

	int q9 = QuestionManager(2, "Who is NOT the leader of a religion or religious faction?",
		"Dalai Lama",
		"Saudi King Salam",
		"Pope Francis",
		"Aga Khan") ? score++ : 0;

	int q10 = QuestionManager(1, "Which U.S. president was a Quaker?",
		"Richard Nixon", 
		"Franklin Pierce",
		"George Washington",
		"Franklin Roosevelt") ? score++ : 0;
	
	cout << "###" << endl;
	cout << "Your final score: " << score << endl;
	cout << "###" << endl;
}

