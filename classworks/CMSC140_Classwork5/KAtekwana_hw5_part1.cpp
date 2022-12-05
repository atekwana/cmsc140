/* kasey atekwana
   march 25, 2021
   classwork 5 part 1
*/

#include <iostream>
#include <iomanip>

int main  (){
    std::cout << "(i)\n";
    int i = 0;
    while(i < 10){
        std::cout << "*";
        i++;
    }
    std::cout << "\n\n\n";
    std::cout << "(ii)\n";
    for(int i = 0; i < 20; i++){
        std::cout << "*";
    }
    std::cout << "\n\n\n";
    std::cout << "(iii)";
    for(int i = 0; i < 10; i++){
        for(int k = 0; k < i; k++){
            std::cout << "*";
        }
        std::cout << "\n";
    }
    std::cout << "\n\n\n";
    std::cout << "(iv)";
    for(int i = 0; i < 20; i++){
        for(int k = 0; k < i; k++){
        std::cout << "*";
        }
        std::cout << "\n";
    }
    std::cout << "\n\n\n";
    std::cout << "(v)\n";
    for(int i = 0; i < 10; i++){
        for(int k = i; k < 10; k++){
        std::cout << "*";
        }
    std::cout << "\n";
    } 
    std::cout << "\n\n\n";
    std::cout << "(vi)\n";
    for(int i = 0; i < 20; i++){
        for(int k = i; k < 20; k++){
        std::cout << "*";
        }
    std::cout << "\n";
    }
}