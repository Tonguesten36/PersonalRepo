#include <iostream>
#include "QuizApp.h"

void QuestionSetTech()
{
	cout << "################ TECH #################" << endl;
	int score = 0;
	
	int q1 = QuestionManager(1, "Who actually designed the prototype of the Apple I?",
		"Steve Wozniak",
		"Steve Jobs",
		"Steve",
		"Steve Wojcicki") ? score++ : 0;
		
	int q2 = QuestionManager(3, "What does Trojan do to your computer?",
		"It copies itself and infect a computer.",
		"I thought it's a company that produces 'protective' gear?",
		"It is an application that looks harmless outside, but it has a hidden code that does malicious things.",
		"It does nothing.") ? score++ : 0;
	
	int q3 = QuestionManager(1, "Which multimedia messaging app created by Evan Spiegel, Bobby Murphy, and Reggie Brown, has pictures and messages which are only available for a short time before they become inaccessible?",
		"Snapchat",
		"Instagram",
		"Snepchat",
		"SMS") ? score++ : 0;
	
	int q4 = QuestionManager(2, "On what iPhone model did Apple first removed the headphone jack?",
		"iPhone X",
		"iPhone 7",
		"iPhone 6",
		"iPhone XD") ? score++ : 0;
	
	int q5 = QuestionManager(1, "Tux is the penguin mascot of which operating system?",
		"Linux",
		"Unix",
		"Windows",
		"Mac OS X") ? score++ : 0;

	int q6 = QuestionManager(2, "What technology is used to record cryptocurrency transactions?",
		"Mining",
		"Blockchain",
		"BitConnect",
		"Token") ? score++ : 0;
	
	int q7 = QuestionManager(3, "What does a Geiger Counter measure?",
		"Alcolhol concentration", 
		"Orgasm intensities", 
		"Radiation", 
		"Earthquake") ? score++ : 0;
	
	int q8 = QuestionManager(4, "Which prestigious university did Microsoft founder Bill Gates drop out of?", 
		"Bruh, he did not even attended to universities",
		"Stanford University",
		"Massachusetts Institute of Technology",
		"Harvard") ? score++ : 0;
	
	int q9 = QuestionManager(4, "Who is the British scientist that invented the World Wide Web (now known as the Internet) in 1989?",
		"Tim Burnurs-Lee",
		"Tim Bruhners-Lee",
		"Timonthy Lancaster",
		"Tim Berners-Lee") ? score++ : 0;
	
	int q10 = QuestionManager(3, "Created in 1990, what was the name of the first internet search engine?",
		"Google",
		"Yahoo! Search engine",
		"Archie",
		"MSN Search engine") ? score++ : 0;

	cout << "###" << endl;
	cout << "Your final score: " << score << endl;
	cout << "###" << endl;
}
