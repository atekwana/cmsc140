/* kasey atekwana
   april 8, 2021
   classwork 6 part 1
*/

#include <iostream>
#include <cmath>

// sum function
double sum (double, double);
// sub function
double subtract (double, double);

int main (){
    // variables
    double choice = 0;
    double num1, num2;
    double result;

    // getting user input
    std::cout << "Enter your Choice, 1 for Addition, 2 for Subtration: ";
    std::cin >> choice; 

    // getting num1 and num2 from user
    if(choice == 1){
       std::cout << "Enter first Number: ";
       std::cin >> num1;
       std::cout << "Enter second Number: ";
       std::cin >> num2; 

    // getting sum result
    std::cout << "\n";
    result = sum (num1, num2);
    std::cout << "The result of the operation is: " << result << "\n";
    }
    if(choice == 2){
       std::cout << "Enter first Number: ";
       std::cin >> num1;
       std::cout << "Enter second Number: ";
       std::cin >> num2;

    // getting sub result
    std::cout << "\n";
    result = subtract (num1, num1);
    std::cout << "The result of the operation is: " << result << "\n";
    }
    return 0;
}
    // adding values
    double sum (double num1, double num2){
        return num1 + num2;
    }
    // subtracting values
    double subtract (double num1, double num2){
        return num1 - num2;
    }