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
		"The Song (Tong in Vietnamese) Empire (China)") ? 1 : 0;

	int q2 = QuestionManager(2, "The Allied in World War II consists of what countries?",
		"Great Britain, France and the United States",
		"Great Britain, The United States and the **SOVIET UNION**",
		"The United States, France and Great Britain",
		"Great Britain, France and once again the **SOVIET UNION**") ? 1 : 0;
	
	int q3 = QuestionManager(1, "What happened to Germany after they lost WWI?",
		"Their empire is gone (it became Weimar Republic instead), the Hohenzollern dynasty fell, their defense force is severy limited, and a huge compensation to pay",
		"Nothing much, really. Maybe except a humongous compensation.",
		"They lost their sovereignty.",
		"The Allied share a proportion of German territory to each other.") ? 1 : 0;
	
	int q4 = QuestionManager(1, "Who is the first leader of the **SOVIET UNION**?",
		"Vladimir Lenin",
		"Alexei Rykov",
		"Georgy Malenkov",
		"Vladimia Lenin") ? 1 : 0;
	
	int q5 = QuestionManager(2, "Thomas Sankara is the leader of what country?",
		"Ghana",
		"Burkina Faso",
		"Upper Volta",
		"Ethiopia") ? 1 : 0;

	score = q1 + q2 + q3 + q4 + q5;
	
	cout << "###" << endl;
	cout << "You final score: " << score << endl;
	cout << "###" << endl;
}

