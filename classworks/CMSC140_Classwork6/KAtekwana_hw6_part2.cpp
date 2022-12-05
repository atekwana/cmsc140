/* kasey atekwana
   april 8, 2021
   classwork 6 part 2
*/

#include <iostream>
#include <iomanip>

using namespace std;

// void function for showMenu
void showMenu ();
// function for coke price
double coke (double, int);
// function for pepsi price
double pepsi (double, int);
// function for water price
double water (double, int);
// function for coffee price
double coffee (double, int);

int main (){
    // variables
    double payment, totalPurchase, tax;
    int choice, quantity;

    // constant variable for menu prices
    const double COKE = 1.25,
                 PEPSI = 1.00,
                 WATER = 2.00,
                 COFFEE = 1.50;
    // 
    showMenu ();
    
    // getting user choice
    std::cout << "Enter your Choice: ";
    std::cin >> choice;
    
    // coke
    switch (choice){
        case 1:
            // getting quantity amount
            std::cout << "How many do you want? ";
            std::cin >> quantity; 
            // getting payment amount
            std::cout << "How much is your payment? ";
            std::cin >> payment;
            std::cout << "\n";
            std::cout << std::fixed << std::setprecision (2) << std::showpoint;
            // calculating tax
            totalPurchase = coke (COKE, quantity);
            tax = COKE * quantity * 0.06;
            std::cout << "Tax Amount: $" << tax << "\n\n";
            // price plus tax
            std::cout << "Total Purchase: $" << totalPurchase + tax << "\n\n";
            // change if needed
             std::cout << "Change: $" << payment - (totalPurchase + tax) << "\n\n";
        break;

        // pepsi
        case 2:
            // getting quantity amount
            std::cout << "How many do you want? ";
            std::cin >> quantity; 
            // getting payment amount
            std::cout << "How much is your payment? ";
            std::cin >> payment;
            std::cout << "\n";
            std::cout << std::fixed << std::setprecision (2) << std::showpoint;
            // calculating tax
            totalPurchase = pepsi (PEPSI, quantity);
            tax = PEPSI * quantity * 0.06;
            std::cout << "Tax Amount: $" << tax << "\n\n";
            // price plus tax
            std::cout << "Total Purchase: $" << totalPurchase + tax << "\n\n";
            // change if needed
             std::cout << "Change: $" << payment - (totalPurchase + tax) << "\n\n";
        break;

        // water
        case 3:
            // getting quantity amount
            std::cout << "How many do you want? ";
            std::cin >> quantity; 
            // getting payment amount
            std::cout << "How much is your payment? ";
            std::cin >> payment;
            std::cout << "\n";
            std::cout << std::fixed << std::setprecision (2) << std::showpoint;
            // calculating tax
            totalPurchase = water (WATER, quantity);
            tax = WATER * quantity * 0.06;
            std::cout << "Tax Amount: $" << tax << "\n\n";
            // price plus tax
            std::cout << "Total Purchase: $" << totalPurchase + tax << "\n\n";
            // change if needed
             std::cout << "Change: $" << payment - (totalPurchase + tax) << "\n\n";
        break;

        // coffee
        case 4:
            // getting quantity amount
            std::cout << "How many do you want? ";
            std::cin >> quantity; 
            // getting payment amount
            std::cout << "How much is your payment? ";
            std::cin >> payment;
            std::cout << "\n";
            std::cout << std::fixed << std::setprecision (2) << std::showpoint;
            // calculating tax
            totalPurchase = coffee (COFFEE, quantity);
            tax = COFFEE * quantity * 0.06;
            std::cout << "Tax Amount: $" << tax << "\n\n";
            // price plus tax
            std::cout << "Total Purchase: $" << totalPurchase + tax << "\n\n";
            // change if needed
             std::cout << "Change: $" << payment - (totalPurchase + tax) << "\n\n";
        break;

        default:
            std::cout << "You have exited the menu.";
        break;
    }
    return 0;
}
    // return function for coke total price without tax
    double coke (double COKE, int quantity){
        return COKE * quantity;
    }
    // return function for pepsi total price without tax 
    double pepsi (double PEPSI, int quantity){
        return PEPSI * quantity;
    }
    // return function for water total price without tax
    double water (double WATER, int quantity){
        return WATER * quantity;
    }
    // return function for coffee total price without tax. 
    double coffee (double COFFEE, int quantity){
        return COFFEE * quantity;
    }
    // menu options & prices.
    void showMenu(){
        std::cout << "**** Vending Manchine **** \n";
        std::cout << "1. Coke       $1.25 \n"; 
        std::cout << "2. Pepsi      $1.00 \n";
        std::cout << "3. Water      $2.00 \n";
        std::cout << "4. Coffee     $1.50 \n";
        std::cout << "5. Exit Menu \n\n"; 
    }
