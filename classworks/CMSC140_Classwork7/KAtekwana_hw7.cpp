/* kasey atekwana
   april 22, 2021
   classwork 7

* Pseudocode or Algorithm for the program:
(be sure to indent items with control structure)
(need to match flow chart submitted in documentation)
1. create a constant variable for array size.
2. write a function prototype largerThanN.
    this function accepts 3 parameters.
        int arr[], int size, int n.
3. display numbers great than user input in the array.
4. nested for loop to determine if input is greater than each element in the array.
5. main function
    local variables
    array of elements
    get user input
6. call the void function largerThanN.
7. function for arr
*/

#include <iostream>
#include <iomanip>
#include <cmath>

// constant variable for array size.
const int SIZE = 10;

// void function largerThanN that accepts three arguments: an array of type int,  the size of the array of type int and an int number n.
void largerThanN(int arr[], int size, int n){
    std::cout << "Numbers greater than " << n << " are: ";
    // nested for loop to determine if user input is greater than EACH value in the array.
    for(int i = 0; i < size; i++){
        if(arr[i] > n){
            std::cout << arr[i] << ' ';
        }
    }
    std::cout << "\n";
    std::cout << "Press any key to continue....\n";
}

// main function. 
int main(){
    // variables
    int n;
    // array of 10 numbers.
    int numbers[SIZE] = {30, 20,50,2,-1,44,3,12,90,32};
    // getting user input.
    std::cout << "Enter a number: ";
    std::cin >> n;
    // calling the void function largerThanN.
    largerThanN(numbers, SIZE, n);
    return 0;
}

// void function arr.
void arr(int arr[], int size, int n){
    for(int i = 0; i < size; i++){
        if(arr[i] > n){
            std::cout << arr[i] << "\n";
        }
    }
 }
