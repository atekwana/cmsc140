/*
 * Class: CMSC140 CRN
 * Instructor: Emily Koo
 * Project<1>
 * Description: (The Department plans to purchase a humanoid robot. The Chairman would like you to write a program to show a greeting script the robot can use later. )
 * Due Date: February 18, 2021
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: kasey atekwana
 

 * Pseudocode or Algorithm for the program:
	(be sure to indent items with control structure)
	(need to match flow chart submitted in documentation)
  1.constant variables 
        one_dog_year
        days_per_month
        programmer's name
        assignment number
        gold fish year
  2.variables
        robot name
        visitor name
        age of person or pet
  3.user input
        name
        age of an important person or a pet
  4.display output message
  5.covert user input into
        months
        days
        hours
        minutes
        seconds
  6.ask to play another game
  7.user input 
        a whole number
        another whole number
  8.calculate both numbers using the following operators
        +
        /
  9.calculate both numbers as a double
        /
  10.display final message
        thanks for testing my program
        programmer name
        class name
        due date
*/
#include <iostream>
#include <iomanip>
    int main (){
        // constant variables
        const int ONE_DOG_YEAR = 7;
        const int DAYS_PER_MONTH = 30;
        const int ONE_GOLD_FISH_YEAR = 5;
        const std::string PROGRAMMER_NAME = "kasey atekwana";
        const int ASSIGNMENT_NUMBER = 1;
        // variables
        std::string robotName, visitorName;
        robotName = "Nao";
        int age, num1, num2;
        // getting user input and displaying it
        std::cout << "**************** Robot Prototype Scripting ****************\n";
        std::cout << "\n";
        std::cout << "Hello, welcome to Montgomery College! My name is " << robotName << "." << " May I have your name?\n";
        std::getline(std::cin, visitorName);
        std::cout << "Nice to have you with us today, " << visitorName << "!\n";
        std::cout << "Let me impress you with a small game.\n";
        std::cout << "Give me the age of an important person or a pet to you.\n";
        std::cout << "Please give me only a number:\n";
        std::cin >> age;
        std::cout << "\n";
        std::cout << "You have entered " << age << ".\n";
        std::cout << " If this is for a person, the age can be expressed as:\n";
        // calculating the months, days, hours, minutes and seconds based on the user input
        std::cout << " or " << age * 12 << " months\n";
        std::cout << " or " << age * (12 * DAYS_PER_MONTH) << " days\n";
        std::cout << " or " << age * (12 * DAYS_PER_MONTH * 24) << " hours\n";
        std::cout << " or " << age * (12 * DAYS_PER_MONTH * 24 * 60) << " minutes\n";
        std::cout << " or " << age * (12 * DAYS_PER_MONTH * 24 * 60 * 60) << " seconds\n";
        // coverting dog and gold fish years into human age
        std::cout << "If this is for a dog, it is " << ONE_DOG_YEAR * age << " years old in human age.\n";
        std::cout << "If this is for a gold fish, it is " << ONE_GOLD_FISH_YEAR * age << " years old in human age.\n\n";
        // new game
        std::cout << "Let's play another game " << visitorName << ". Give me a whole number.\n";
        std::cin >> num1;
        // turning the first number into a float point
        float num1Float = (float) num1;
        std::cout << "Very well. Give me another whole number.\n";
        std::cin >> num2;
        // changing the second number into a float point
        float num2Float = (float) num2;
        // using basic math operators
        std::cout << "Using the operator '+' in C++, the result of " << num1 << " + " << num2 << " is " << num1 + num2 << ".\n";
        
        std::cout << "Using the operator '/', the result of " << num1 << " / " << num2 << " is " << num1 / num2 << ".\n";
        std::cout << std::fixed;
        std::cout << "however, the result of " << std::setprecision(1) << num1Float << " / " << num2Float << " is about " << num1Float / num2Float << ".\n\n\n";
        
        // closing message
        std::cout << "thank you for testing my program!!\n";
        std::cout << "PROGRAMMER: " << PROGRAMMER_NAME << "\n";
        std::cout << "CMSC140 Common Project " << ASSIGNMENT_NUMBER << "\n";
        std::cout << "Due Date: 02/18/2021\n";
    }