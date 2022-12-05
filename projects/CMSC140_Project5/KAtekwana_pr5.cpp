/*
 * Class: CMSC140 CRN
 * Instructor: Emily Koo
 * Project<5>
 * Description: (Write a program that simulates a magic square using 3 one dimensional parallel arrays of integer type. 
Each one the arrays corresponds to a row of the magic square.
The program asks the user to enter the values of the magic square row by row and informs the user if the grid is a magic square or not.
)
 * Due Date: april 4th, 2021
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: kasey atekwana
 

 * Pseudocode or Algorithm for the program:
	(be sure to indent items with control structure)
	(need to match flow chart submitted in documentation)
  1. declare the input variable as an array[3][3]
        3 rows, 3 columns 
  2. declare variables 
        dia1, dia2, arrayRow1, arrayRow2, arrayRow3, COLS1, COLS2, COLS3
  3. user input 
  4. find the sum of two squares
  5. if diagSum1 == diagSum2, proceed to the next step, otherwise cout "this is not a lo shu magic square"
  6. find the sum of 3 rows
  7. if arrayRow1 == arrayRow2 and arrayRow2 == arrayRow3, proceed to the next step, otherwise cout "this is not a lo shu magic square"
  8. find the sum of 3 columns
  9. if the colSum1 == colSum2 and colSum2 == colSum3, proceed to the next step, otherwise cout "this is not a lo shu magic square"
  10. cout "this is a lo shu magic square"
  11. cout "this is not a lo shu magic square"

 (more as needed)
*/

#include<iostream>
using namespace std;

// Global constants 
const int ROWS = 3;  // The number of rows in the array
const int COLS = 3;  // The number of columns in the array
const int MIN = 1;  // The value of the smallest number
const int MAX = 9;  // The value of the largest number

// Function prototypes
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);

bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max);
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
bool checkRowSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool checkColSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size);
void showArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size);

int main(){
	
	/* Define a Lo Shu Magic Square using 3 parallel arrays corresponding         to each row of the grid */
	int magicArrayRow1[COLS], magicArrayRow2[COLS], magicArrayRow3[COLS];
        // Your code goes here
    char answer = 'y';
    do{
        // calling fillArray function
        fillArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
        // calling showArray function
        showArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
        // checking to see if user input is a lo shu magic square
        if(isMagicSquare(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS)){
            // yes it is
            std::cout << "This is a Lo Shu magic square.\n";
        }
        else
            // no it's not
            std::cout << "This is not a Lo Shu Magic square.\n";
            std::cout << "\n\n";
            // asking user to try again
            std::cout << "Do you want to try again?: ";
            std::cin >> answer;
        }
    while(answer == 'y' | answer == 'Y');
    std::cout << "Thank you for testing my program!!\n";
    std::cout << "PROGRAMMER: Kasey Atekwana \n";
    std::cout << "CMSC140 Common Project 5\n";
    std::cout << "DueDate: 05/04/2021\n";
    return 0;
    }
// Function definitions go here
// function definition for isMagicSquare
bool isMagicSquare(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
    bool withinRange = false;
    // checking magic square
    bool range = checkRange(arrayRow1, arrayRow2, arrayRow3, size, MIN, MAX);
    bool unique = checkUnique(arrayRow1, arrayRow2, arrayRow3, size);
    bool row = checkRowSum(arrayRow1, arrayRow2, arrayRow3, size);
    bool column = checkColSum(arrayRow1, arrayRow2, arrayRow3, size);
    bool diagonal = checkDiagSum(arrayRow1, arrayRow2, arrayRow3, size);
    if(range & unique & row & column & diagonal){
        withinRange = true; 
    }
    return withinRange;
}
// function definition for fillArray
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
    int rowNum = 0;
    // first row and column
    for (int colNum = 0; colNum < size; colNum++){
        cout << "Enter the number for row " << rowNum << " and for column " << colNum << " : ";
        cin >> arrayRow1[colNum];
    }
    rowNum++;
    // second row and column
    for (int colNum = 0; colNum < size; colNum++){
        cout << "Enter the number for row " << rowNum << " and for column " << colNum << " : ";
        cin >> arrayRow2[colNum];
    }
    rowNum++;
    // third row and column
    for (int colNum = 0; colNum < size; colNum++){
        cout << "Enter the number for row " << rowNum << " and for column " << colNum << " : ";
        cin >> arrayRow3[colNum];
    }
}
// function definition for showArray
void showArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
    int rowNum = 0;
    int colNum;
    // first column
    for(int colNum = 0; colNum < size; colNum++){
        std::cout << arrayRow1[colNum] << " ";
    }
    std::cout << "\n";
    rowNum++;
    // second column
    for(int colNum = 0; colNum < size; colNum++){
        std::cout << arrayRow2[colNum] << " ";
    }
    std::cout << "\n";
    rowNum++;
    // third column
    for(int colNum = 0; colNum < size; colNum++){
        std::cout << arrayRow3[colNum] << " ";
    }
    std::cout << "\n";
}
// function definition for checkRange
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size, int min, int max){
    bool withinRange = true;
    int colNum;
    // checking range for user input
    for(int colNum = 0; colNum < COLS; colNum++){
        // row 1
        if(arrayRow1[colNum] < min | arrayRow1[colNum] > max){
            withinRange = false;
        }
        // row 2
        else if(arrayRow2[colNum] < min | arrayRow2[colNum] > max){
            withinRange = false;
        }
        // row 3 
        else if(arrayRow3[colNum] < min | arrayRow3[colNum] > max){
            withinRange = false;
        }
    } 
    return withinRange;
}
// function definition for checkUnique
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
    // variables
    int k = 0, p = 0, a = 0;
    bool withinRange = true;
    // checking if user input is unique or not
     while (k < (sizeof(*arrayRow1) / sizeof(arrayRow1[0])) && p < (sizeof(*arrayRow2) / sizeof(arrayRow2[0])) && a < (sizeof(*arrayRow3) / sizeof(arrayRow3[0]))){
        if ((arrayRow1[k] == arrayRow2[p]) && (arrayRow2[p] == arrayRow3[a])){
            if(k < 1){
                withinRange = false; 
            }
            k++;
            p++;
            a++;
        }
        else if(arrayRow1[k] < arrayRow2[p])
        k++;
        else if(arrayRow2[p] < arrayRow3[a])
        p++;
        else
        a++;
    }
    return withinRange;
}
// function definition of checkRowSum
bool checkRowSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
    bool withinRange = true; 
    // sum of all rows
    int rowSum1 = arrayRow1[0] + arrayRow2[0] + arrayRow3[0];
    int rowSum2 = arrayRow1[1] + arrayRow2[1] + arrayRow3[1];
    int rowSum3 = arrayRow1[2] + arrayRow2[2] + arrayRow3[2];
    // checking if the sum of the rows eqauls each other
    if((rowSum1 != rowSum2) | (rowSum1 != rowSum3) | (rowSum2 != rowSum3)){
        withinRange = false;
    }
    return withinRange;
} 
// function defiition of checkColSum
bool checkColSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int size){
    bool withinRange = true;
    // sum of all columns
    int colSum1 = arrayRow1[0] + arrayRow2[0] + arrayRow3[0];
    int colSum2 = arrayRow1[1] + arrayRow2[1] + arrayRow3[1];
    int colSum3 = arrayRow1[2] + arrayRow2[2] + arrayRow3[2];
    // checking if the sum of the columns eqauls each other
    if((colSum1 != colSum2) | (colSum1 != colSum3) | (colSum2 != colSum3)){
        withinRange = false;
    }
    return withinRange;
}
// function definition of checkDiagSum
bool checkDiagSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size){
    bool withinRange = true;
    int diagSum1 = arrayrow1[0] + arrayrow2[1] + arrayrow3[2];
    int diagSum2 = arrayrow1[2] + arrayrow2[1] + arrayrow3[0];
    if(diagSum1 != diagSum2){
        withinRange = false;
    }
    return withinRange;
}



 



 


