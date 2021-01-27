#include <iostream>
#include "QuizApp.h"

void QuestionSetNaturalScience()
{
	cout << "################ NATURAL SCIENCE #################" << endl;
	int score = 0;
	
	int q1 = QuestionManager(2, "How many wings does a mosquito have?",
		"4",
		"2",
		"69",
		"6") ? score++ : 0;
	
	int q2 = QuestionManager(4, "Which one below is the largest internal organ in human body?",
		"Lungs",
		"Stomach",
		"Brain",
		"Liver") ? score++ : 0;
	
	int q3 = QuestionManager(1, "The biggest planet in our solar system?",
		"Jupiter",
		"Mars",
		"Sun",
		"Neptune") ? score++ : 0;
	
	int q4 = QuestionManager(3, "How many ribs do you have??",
		"Yes",
		"30",
		"24",
		"69") ? score++ : 0;
	
	int q5 = QuestionManager(2, "The symbol that stands for silver on the periodic table?",
		"Si",
		"Ag",
		"Sil",
		"S") ? score++ : 0;
	
	int q6 = QuestionManager(2, "What is the most popular beverage that just so happens to kill everyone slowly in their lifetime?",
		"An unknown substance that governments have tried to hide from us.",
		"Dihydrogen Monoxide",
		"Poison",
		"Soda") ? score++ : 0;
	
	int q7 = QuestionManager(2, "Humans and chimpanzees share roughly how much DNA?",
		"90%",
		"98%",
		"50%",
		"40%") ? score++ : 0;
	
	int q8 = QuestionManager(2, "The rate at which the body produces energy from nutrients is controlled by which gland in the neck?",
		"Radscorpion Poision gland",
		"Thyroid gland",
		"Cortisol gland",
		"Insulator gland") ? score++ : 0;
	
	int q9 = QuestionManager(1, "At what speed does light travel?",
		"299,337,984 meters per seconds",
		"690,420,000 meters per seconds",
		"999,999,999 meters per seconds",
		"Undetermined") ? score++ : 0;
	
	int q10 = QuestionManager(2, "What is the largest moon of Saturn called?",
		"Io",
		"Titan",
		"Callisto",
		"Europa") ? score++ : 0;
	
	cout << "###" << endl;
	cout << "Your final score: " << score << endl;
	cout << "###" << endl;
}
