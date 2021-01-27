#ifndef QUIZAPP_H
#define QUIZAPP_H

using namespace std;
	
void QuizApp();
bool QuestionManager(int correctChoice, string question, string firstChoice, string secondChoice, string thirdChoice, string fourthChoice);

void QuestionSetFood();
void QuestionSetCulture();
void QuestionSetReligion();
void QuestionSetTransportation();
void QuestionSetHistory();
void QuestionSetTech();
void QuestionSetNaturalScience();

#endif

