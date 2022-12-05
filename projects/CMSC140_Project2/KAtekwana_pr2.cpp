/*
 * Class: CMSC140 CRN
 * Instructor: Emily Koo
 * Project<2>
 * Description: (There are two main systems for measuring distance, weight and temperature, the Imperial System of Measurement and the Metric System of Measurement. Most countries use the Metric System, which uses the measuring units such as meters and grams and adds prefixes like kilo, milli and centi to count orders of magnitude. In the United States, we use the older Imperial system, where things are measured in feet, inches and pounds.)
 * Due Date: march 4, 2021
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: kasey atekwana
 

 * Pseudocode or Algorithm for the program:
	(be sure to indent items with control structure)
	(need to match flow chart submitted in documentation)
  1.constant variable
        one kilometer
        one kilogram
        student name
        assignment number
  2.void function
  3.variables 
        temperature
        fahrenheit
        distance
        weight
        mile
        pound
  4.switch statement
        user input for choice 1-4
        case 1
            fahrenheit to degrees
        case 2
            kilometer to mile
            error message, no negative distance
        case 3
            kilogram to pound
            error message, no negative weight
  5.main function
  6.variables
        num
        country name
        running
  7.user input
        country name
  8.converter toolkit menu
  9.user input
  10.if/else statement
  11.output message
  12.closing message
        thanks for testing my program
        programmer name
        class name
        due date
 (more as needed)
*/

#include <iostream>
#include <iomanip>
    // constant variables 
    const double ONE_KILOMETER = 0.6;
    const double ONE_KILOGRAM = 2.2;
    const std::string PROGRAMMER_NAME = "kasey atekwana";
    const int ASSIGNMENT_NUMBER = 2;
// void convertToolKit
void converterToolKit(int num){
    // variables
    int temparature, fahrenheit;
    double distance, weight, mile, pound;
    // switch statement for cases 1-3
    switch (num){
    std::cout << "Enter your choice (1-4): ";
    std::cin >> num;
    // case for num 1 is converting fahrenheit to celsius
    case 1:
        if(num == 1){
        std::cout << "Please enter temparature in Celcius (such as 24): ";
        std::cin >> temparature;
        fahrenheit = (9.0/5.0) * temparature + 32;
        std::cout << "It is " << fahrenheit << " in Fahrenheit.";
    }
        break;
    // case for num 2 is converting kilometer to mile
    case 2:
        std::cout << "Please enter distance in Kilometer (such as 18.54): ";
        std::cin >> distance;
        if (distance < 0){
        std::cout << " ! ! ! Program does not convert negative distance ! ! !";
        break;
    }
    // convert kilometer to mile 
        else if(num == 2){
        mile = distance * ONE_KILOMETER;
        std::cout << std::fixed;
        std::cout << "It is " << std::setprecision(2) << mile << " in Miles.";
        break;
    }
        break;
    // case for num 3 is converting kilogram to pound
    case 3:
        std::cout << "Please enter weight in Kilograms (such as 10): ";
        std::cin >> weight;
    // error message if weight entered is negative
        if (weight < 0){
        std::cout << " ! ! ! Program does not convert negative weight ! ! !";
    }
    // convert kilogram to pound
        else if(num == 3){ 
        pound = weight * ONE_KILOGRAM;
        std::cout << std::fixed;
        std::cout << "It is " << std::setprecision(1) << pound << " in Pounds.";
        }
    }
}

int main (){
    // variables
    int num; 
    std::string country;
    //number of run instances, program runs through converterToolKit 2 times
    int running = 0;
    // get user input for country name
    std::cout << "Enter a country name: ";
    std::getline(std::cin, country);
    std::cout << "\n\n\n"; 
    // converter toolkit menu
    std::cout << "Converter Toolkit\n";
    std::cout << "_ _ _ _ _ _ _ _ _\n";
    std::cout << "1. Temperature Converter\n";
    std::cout << "2. Distance Converter\n";
    std::cout << "3. Weight Converter\n";
    std::cout << "4. Quit\n\n";
    // get user input for choice ranging from 1-4
    std::cout << "Enter your choice (1-4): ";
    std::cin >> num;
    // if statement to call the void coverterToolkit and pass the num input
    if(num > 0 & num < 4){
        converterToolKit(num);
    }
    // user input is 4, so to quit, the run count is increased to 2 so it doesnt run again
    else if(num == 4 ){
        running = 2;
    }
    // user input not within the range of 1-4, the run count is increased to 2 and error message is displayed
    else{
        std::cout << num << " is not within the range of 0 and 4.";
        running = 2;
    }
    std::cout << "\n\n";
    // output message
    std::cout << country << " sounds fun!\n\n\n";
    //closing message
    std::cout << "thank you for testing my program!!\n";
    std::cout << "PROGRAMMER: " << PROGRAMMER_NAME << "\n";
    std::cout << "CMSC140 Common Project " << ASSIGNMENT_NUMBER << "\n";
    std::cout << "Due Date: 03/04/2021\n\n";

}
