/* kasey atekwana
   february 25, 2021
   classwork 4 part 1
*/

#include <iostream>
#include <iomanip>

const int ONE_PACKAGE = 99;
void range(int unitsSold){
    float costOfPurchase, discount;
    if(unitsSold >= 10 & unitsSold <= 19){
       discount = ONE_PACKAGE * unitsSold * 0.20;
    }
    else if(unitsSold >= 20 & unitsSold <= 49){
        discount = ONE_PACKAGE * unitsSold * 0.30;
    }
    else if(unitsSold >= 50 & unitsSold <= 99){
        discount = ONE_PACKAGE * unitsSold * 0.40;
    }
    else if(unitsSold >=100){
        discount = ONE_PACKAGE * unitsSold * 0.50;
    }
    discount = ONE_PACKAGE * unitsSold * 0.40; 
    costOfPurchase = ONE_PACKAGE * unitsSold - discount;
    std::cout << std::fixed;
    std::cout << "The total cost of the purchase is $ " << std::setprecision(2) << costOfPurchase << '\n';
}
int main (){
    // variables
    int unitsSold;
    // discount table
    std::cout << "Quantity         discount\n";
    std::cout << "_________________________\n";
    std::cout << "10-19              20%\n";
    std::cout << "20-49              30%\n";
    std::cout << "50-99              40%\n";
    std::cout << "100 or more        50%\n";
    // output message
    std::cout << "How many units were sold? ";
    std::cin >> unitsSold;
    if(unitsSold == 0){ 
        std::cout << "Units sold must be greater than zero.\n";
    }
    else{
        range(unitsSold);
    }
    return 0;
}