/* kasey atekwana
   february 25, 2021
   classwork 4 part 1
*/

#include <iostream>
#include <iomanip>

int main (){
  int subjects;
  float price, basePrice;
  char background, date = 'y'; 
  std::cout << "Subjects in Portrait       Base Price\n";
  std::cout << "1                      |      $100\n";
  std::cout << "2                      |      $130\n";
  std::cout << "3                      |      $150\n";
  std::cout << "4                      |      $160\n";
  std::cout << "5 or more              |      $165\n";
  std::cout << "Enter the number of portraits: ";
  std::cin >> subjects;
  if(subjects == 1){
      basePrice = 100;
  }
  else if(subjects == 2){
      basePrice = 130;
  }
  else if(subjects == 3){
      basePrice = 150;
  }
  else if(subjects == 4){
      basePrice = 160;
  }
  else if( subjects >= 5){
      basePrice = 165;
  }
  std::cout << "Do you want a fancy background (y/n)? ";
  std::cin >> background;
  std::cout << "Do you want an appointment date (y/n)? ";
  std::cin >> date;
  price = basePrice;
  if(background == 'y'){
    price *= 1.1;
  }
  if(date == 'y'){
    price *= 1.1;
  }
  std::cout << std::fixed;
  std::cout << "The price is: $" << std::setprecision(2) << price << '\n';           
}