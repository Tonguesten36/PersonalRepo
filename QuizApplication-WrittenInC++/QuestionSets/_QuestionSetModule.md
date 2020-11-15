
--------------------------------------------------------------------------------------------------
Hello! Here you will find the code snippet for a question in a questions set.

------| THE SNIPPET (COPY THIS) |------
int q = QuestionManager(int correctAnswer, string question,
		string answer1, 
		string answer2,
		string answer3, 
		string answer4) ? 1 : 0;

------| HOW TO USE THIS ? |------
First of all, you copied this into a .cpp script in the QuestionSets folder.
Here is the arguments for the QuestionManager function:

int correctAnswer: This is the index number of the correct answer, which will give the user one point if the user chose the correct answer index.
string question: This is where you enter a question.
string answer1: The first choice that the user could pick
string answer2: The second choice that the user could pick
string answer3: The third choice that the user could pick
string answer4: The fourth choice that the user could pick

------| HOW IT WORKS? |------
The correctAnswer argument determines which answers is the correct answer, for example, if the value of correctAnswer is 1, then string answer1 is the correct answer, and the same applies to answer2, answer3, and answer4. However, you cannot have it more than 4 or less than 1, or else the program cannot compile.