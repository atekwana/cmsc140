/* kasey atekwana
   february 11, 2021
   classwork 3
*/

#include <iostream>

    int main (){
        // variables
        std::string name;
        double participationScore, testScore, assignmentScore, examScore, practiceScore, averageScore, finalScore;
        // gettinng user input and displaying
        std::cout << "Enter the Student's name: ";
        std::getline(std::cin, name);
        std::cout << "Enter Class Participation Score ranging from 0 to 100: ";
        std::cin >> participationScore;
        std::cout << "Enter Test Score ranging from 0 to 100: ";
        std::cin >> testScore;
        std::cout << "Enter Assignment Score ranging from 0 to 100: ";
        std::cin >> assignmentScore;
        std::cout << "Enter Exam Score ranging from 0 to 100: ";
        std::cin >> examScore;
        std::cout << "Enter Practice Score ranging from 0 to 100: ";
        std::cin >> practiceScore;
        // total score
        finalScore = participationScore + testScore + assignmentScore + examScore + practiceScore;
        // average score
        averageScore = finalScore / 5;
        // final output message
        std::cout << name << ": " << " Final Score: " << finalScore << " Average Score: " << averageScore << "\n";
    }