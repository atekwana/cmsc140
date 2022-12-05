/*
 * Class: CMSC140 CRN
 * Instructor: emily koo
 * Project<4>
 * Description: (Give a brief description for Project)
 * Due Date: april 15, 2021
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: kasey atekwana
 

 * Pseudocode or Algorithm for the program:
	(be sure to indent items with control structure)
	(need to match flow chart submitted in documentation)
  1. open file stream as a global variable.
  2. write a function prototype for number of employees in the company.
      this function returns the number of employees.
      while loop needed.
  3. write a function prototype for totals absent.
      this function takes one parameter and returns an the total days absent.
      while loop needed.
  4. write a function prototype for average days absent.
      this function returns as a double, the average number of days absent.
  5. write a file
      for loop needed.
  6. display final message using file as cout.
*/

#include <iostream>
#include <iomanip>
#include <fstream>

// openning file
std::ofstream file;

// this function asks the user for the number of employees in the company
int numOfEmployees(){
    int numEmployees = 0;
    while(numEmployees < 1){
      std::cout << "Please enter the number of employees in the company: ";
      std::cin >> numEmployees;
      if(numEmployees < 1){ 
        std::cout << "Number of employees must be greater than 0\n";
      }
    }
    return numEmployees;
}
int totalEmployees = static_cast<double>(0);
int totalDaysAbsent = static_cast<double>(0);
// asks the user to enter the id and number of days missed for each employee
int totDaysAbsent(int numOfEmployees){
  int id;
  int daysAbsent = -1;
  std::string name;
  // employee ID should be 4 numbers or less
  std::cout << "Please enter an employee ID: ";
  std::cin >> id;
  while(daysAbsent < 0){        
    // days absent
    std::cout << "Please enter the number of days this employee was absent: ";
    std::cin >> daysAbsent;
    // error message if user enters a negative number
    if(daysAbsent < 0){
      std::cout << "The number of days absent must not be negative.\n";
    }
    if(daysAbsent < 0){
      std::cout << "Please re-enter the number of days absent: ";
      std::cin >> daysAbsent;
    }
  }
  totalDaysAbsent += daysAbsent;
  file << "\t\t" << id << "\t\t" << daysAbsent << "\n";
  return daysAbsent;
}

// this function calculates the average number of days absent
double averageAbsent(int employees, int days){
  return (double(days) / double(employees));
}

// writing the file
int main(){
  int id, daysAbsent;
  std::cout << "Calculate the average number of days a company's employees are absent.\n\n";
  file.open ("employeeAbsences.txt");
  file << "EMPLOYEE ABSENCE REPORT\nemployee id\t\tdays absent\n";
  totalEmployees = numOfEmployees();
  for(int i=0; i < totalEmployees; i++){
    totDaysAbsent(daysAbsent);
  }
  // final message
  std::cout << "Programmer: kasey atekwana\n";
  file << "\nThe " << totalEmployees << " employees were absent a total of " << totalDaysAbsent << " days.\n" << "The average number of days absent is " << std::setprecision(1) << averageAbsent(totalEmployees, totalDaysAbsent) << " days.\nProgrammer: kasey atekwana";
  return 0;
}