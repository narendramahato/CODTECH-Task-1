#include <iostream>
#include <string>
using namespace std;

// Function to display a question and its choices, and return the correct answer
char displayQuestion(string question, string choiceA, string choiceB, string choiceC, string choiceD, char correctAnswer) {
    cout << question << endl;
    cout << "A. " << choiceA << endl;
    cout << "B. " << choiceB << endl;
    cout << "C. " << choiceC << endl;
    cout << "D. " << choiceD << endl;
    cout << "Your answer: ";
    
    char userAnswer;
    cin >> userAnswer;
    return toupper(userAnswer); // Convert to uppercase to standardize input
}

// Function to check if the user's answer is correct and update score
bool checkAnswer(char userAnswer, char correctAnswer, int& score) {
    if (userAnswer == correctAnswer) {
        cout << "Correct!" << endl;
        score++;
        return true;
    } else {
        cout << "Incorrect. The correct answer is " << correctAnswer << "." << endl;
        return false;
    }
}

int main() {
    int score = 0;
    
    // Questions and answers
    string questions[] = {
        "What is the capital of France?",
        "Which planet is known as the Red Planet?",
        "Who wrote 'Romeo and Juliet'?",
        "What is the powerhouse of the cell?"
    };
    
    string choices[][4] = {
        {"Paris", "London", "Berlin", "Madrid"},
        {"Mars", "Jupiter", "Saturn", "Mercury"},
        {"William Shakespeare", "Jane Austen", "Charles Dickens", "Mark Twain"},
        {"Mitochondria", "Nucleus", "Chloroplast", "Ribosome"}
    };
    
    char correctAnswers[] = {'A', 'A', 'A', 'A'};
    
    // Display each question and process user's answer
    for (int i = 0; i < 4; i++) {
        char userAnswer = displayQuestion(questions[i], choices[i][0], choices[i][1], choices[i][2], choices[i][3], correctAnswers[i]);
        checkAnswer(userAnswer, correctAnswers[i], score);
        cout << endl; // Add a newline for better readability
    }
    
    // Display final score and feedback
    cout << "Quiz complete!" << endl;
    cout << "Your score: " << score << "/4" << endl;
    
    if (score == 4) {
        cout << "Excellent! You got all the questions correct." << endl;
    } else if (score >= 2) {
        cout << "Good job!" << endl;
    } else {
        cout << "Keep practicing!" << endl;
    }
    
    return 0;
}
