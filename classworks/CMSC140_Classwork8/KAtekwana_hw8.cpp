/* kasey atekwana
   april 29, 2021
   classwork 8

* Pseudocode or Algorithm for the program:
(be sure to indent items with control structure)
(need to match flow chart submitted in documentation)
1. void function
    displayArray
    swap
    selectionSort
2. int function
    findMax
    findMin
3. double function
    findAvg
4. finds and returns the highest element of the array
5. finds and returns the lowest element of the array
6. finds and returns the average of the elements of the array 
*/

#include <iostream>
#include <iomanip>
#include <cmath>

// const
const int MAX_SCORE = 50; 

// displays the content of the array;
void displayArray(int array[], int size){
    for(int i = 0; i < size; i++){
        std::cout << " " << array[i] << " ";
    }
}
// 
void swap(int *maxNum, int *j){
    int temp = *maxNum;
    *maxNum = *j;
    *j = temp; 
}
// sorts the array using the selection sort algorithm in descending order.
void selectionSort(int array[], int size){
    int j, k, maxNum;
    for(j = 0; j < size - 1; j++){
        maxNum = j;
        for(k = j+1; k < size; k++)
        if(array[k] > array[maxNum])
            maxNum = k;
        swap(&array[maxNum], & array[j]);
    }
}
// finds and returns the highest element of the array.
int findMax(int array[], int size){
    int maxNum = array[0];
    for(int j = 1; j < size; j++){
        if(array[j] > maxNum){
            maxNum = array[j];
        }
    }
    return maxNum;
}
// finds and returns the lowest element of the array.
int findMin(int array[], int size){
    int minNum = array[0];
    for(int j = 1; j < size; j++){
        if(array[j] > minNum){
            minNum = array[j];
        }
    }
    return minNum;
}
// finds and returns the average of the elements of the array.
double findAvg(int array[], int size){
    double average;
    int total = 0, j;
    for(j = 0; j < size; j++){
        total = total + array[j];
    }
    average = (double) total / size;
    return average;
}

int main(){
    int arrSize;
    std::cout << "How many scores do you want to enter? ";
    std::cin >> arrSize;
    // 
    int array[arrSize], j;
    for(j = 0; j < arrSize; j++){
        std::cout << "Enter score #" << j + 1 << ": ";
        std::cin >> array[j];
    }

   std::cout << "Original order scores are: ";
   displayArray(array, arrSize);
   std::cout << "\n\n";
   std::cout << "Scores odered high to low: ";
   selectionSort(array, arrSize);
   for(j = 0; j < arrSize; j++){
       std::cout << array[j] << " ";
   }
    std::cout << "\n\n";
    std::cout << "Highest score: " << findMax(array, arrSize);
    std::cout << "\n\n";
    std::cout << "Lowest score: " << findMin(array, arrSize);
    std::cout << "\n\n";
    std::cout << "Average of scores: " << findAvg(array, arrSize);
    std::cout << "\n\n";
}