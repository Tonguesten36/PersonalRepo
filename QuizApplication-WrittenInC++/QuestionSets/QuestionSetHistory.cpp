#include <iostream>
#include "QuizApp.h"

// This is the fifth questions set in the Quiz App. This one is related to history stuff.
void QuestionSetHistory()
{
	cout << "################ HISTORY #################" << endl;
	int score = 0;
	
	int q1 = QuestionManager(3, "Which empire have *attempted* to invade Vietnam (formally known as Dai Viet) three times, and failed throughout 1258, 1285 and 1287-1288?",
		"The United States of America",
		"French Empire",
		"Mongol Empire",
		"The Song (Tong in Vietnamese) Empire (China)") ? score++ : 0;

	int q2 = QuestionManager(2, "The Allied in World War II consists of what countries?",
		"Great Britain, France and the United States",
		"Great Britain, The United States and the **SOVIET UNION**",
		"The United States, France and Great Britain",
		"Great Britain, France and once again the **SOVIET UNION**") ? score++ : 0;
	
	int q3 = QuestionManager(1, "What happened to Germany after they lost WWI?",
		"Their empire is gone (it became Weimar Republic instead), the Hohenzollern dynasty fell, their defense force is severy limited, and a huge compensation to pay",
		"Nothing much, really. Maybe except a humongous compensation.",
		"They lost their sovereignty.",
		"The Allied share a proportion of German territory to each other.") ? score++ : 0;
	
	int q4 = QuestionManager(1, "Who is the first leader of the **SOVIET UNION**?",
		"Vladimir Lenin",
		"Alexei Rykov",
		"Georgy Malenkov",
		"Leon Trotsky") ? score++ : 0;
	
	int q5 = QuestionManager(2, "Thomas Sankara is the leader of what country?",
		"Ghana",
		"Burkina Faso",
		"Upper Volta",
		"Ethiopia") ? score++ : 0;

	int q6 = QuestionManager(3, "How many SUCCESSFUL, CONFIRMED coup d'etat the U.S had sponsored in the Latin America region throughout the Cold War period?",
		"9",
		"12",
		"10",
		"13");
	
	int q7 = QuestionManager(2, "When did Japan surrendered in WWII?", 
		"20-August-1945", 
		"15-August-1945", 
		"4-July-1945", 
		"17-July-1945") ? score++ : 0;
	
	int q8 = QuestionManager(1, "What year did the Communist Party of Vietnam officially founded?", 
		"1930", 
		"1929", 
		"1931", 
		"1945") ? score++ : 0;
	
	int q9 = QuestionManager(3, "The Renaissance began in which country?", 
		"England", 
		"SOVIET UNION", 
		"Italy", 
		"Germany") ? score++ : 0;
	
	int q10 = QuestionManager(4, "Who wrote \"Wealth of Nation\"?", 
		"John Locke", 
		"Karl Marx", 
		"Vladimir Lenin", 
		"Adam Smith") ? score++ : 0;
	
	cout << "###" << endl;
	cout << "You final score: " << score << endl;
	cout << "###" << endl;
}

