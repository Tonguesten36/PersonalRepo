#include <iostream>
#include "QuizApp.h"

// This is the first questions set for the Quiz App, this one is related to food.
void QuestionSetFood()
{
	cout << "################ FOOD #################" << endl;
	// In this function, I used ternary operator to make the code look less cumbersome. It can be confusing to look at first, but you'll get used to it.
	
	// Here is how ternary operator works:
	// (condition) ? result_true : result_false
	
	// As you can see the condition will be evaluated on the "condition" part, it is located at the left side of the question-mark of the operator.
	// Moving on to the right side of the question-mark,
	// the "result_true" will be executed if the condition is true,
	// and "result_false" will be executed if vice versa
	
	// Note: you can add as many questions as you wish.
	
	// For this particular app, I used score as an overused method to give the player some kind of small reward.
	int score = 0;
	
	// Here is the first question and the ternary operator in action. 
	// As you can see, the question (with its answers) are presented on the left side of the question-mark (?) as a condition (because the QuestionManager function is a boolean type)
	// On the right side of the question-mark, we have two answers, the "score++" will be executed if the condition is true, and 0 will be executed if the condition is false.
	// For example, the correct answer for the first question is "Portugal". If the player enter 3 - which is Portugal - the player's score will increase by 1.
	int q1 = QuestionManager(3, "Castelo Branco cheese originates from which country?", 
		"Italy", 
		"Tunisia", 
		"Portugal", 
		"Spain") ? score++ : 0;
	
	int q2 = QuestionManager(1, "What is the national dish of Hungary?", 
		"Goulash", 
		"Potato salad", 
		"Blin", 
		"Kalashnikov") ? score++ : 0;	
	
	int q3 = QuestionManager(1, "Dolmades is a Greek dish wrapped in what?", 
		"Vine leaves", 
		"Grape leaves", 
		"Bale leaves", 
		"Banana leaves") ? score++ : 0;
	
	int q4 = QuestionManager(2, "Which type of nut is used in the production of marzipan?", 
		"Nut", 
		"Almond", 
		"Cashew nut", 
		"Peanut") ? score++ : 0;
	
	int q5 = QuestionManager(1, "Which extra toppings (in addition to cheese and tomato) would you expect to find on a Hawaiian pizza?",
		"Ham and pineapple", 
		"Kebab and banana", 
		"Coconut and... more coconut?", 
		"Ham and pine apple") ? score++ : 0;
	
	int q6 = QuestionManager(2, "Which type of beans are used to make baked beans?", 
		"Borlotti Beans", 
		"Haricot Beans", 
		"Cannellini Beans", 
		"BEANZ") ? score++ : 0;
	
	int q7 = QuestionManager(2, "What does IPA stands for?", 
		"Intensely Potent Ale", 
		"Indian Pale Ale", 
		"International Phonetic Alphabet", 
		"Indian Premiun Ale") ? score++ : 0;
	
	int q8 = QuestionManager(2, "Which of these chocolate bar brands does not contain nuts in its ingredient list?",
		"Snickers", 
		"Double Decker",
		"NoNutNovember",
		"Tobblerone") ? score++ : 0;
	
	int q9 = QuestionManager(4, "Which of these flowers does the spice saffron come from?",
		"Poppy",
		"Orchid",
		"Saffron",
		"Crocus") ? score++ : 0;
	
	int q10 = QuestionManager(1, "Gruyère is a cheese from which country?",
		"Switzerland",
		"France",
		"Italy",
		"Austria") ? score++ : 0;
	
	// You display the final score here
	cout << "###" << endl;
	cout << "Your final score: " << score << endl;
	cout << "###" << endl;
}


