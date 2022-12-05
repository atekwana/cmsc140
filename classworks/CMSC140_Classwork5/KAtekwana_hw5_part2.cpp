/* kasey atekwana
   march 25, 2021
   classwork 5 part 2
*/

#include <iostream>
#include <fstream>
#include <iomanip>

int main (){

    std::ifstream hw5Pt2File;

    // variables 
    std::string name, city, state, address;
    int phone, zip;

    std::ofstream writer("list.txt");

    // getting user name input.
    std::cout << "Name: ";
    getline(std::cin, name);
    // getting user phone number input.
    std::cout << "Phone Number: ";
    std::cin >> phone;
    std::cin.ignore();
    // getting user address input.
    std::cout << "Address: ";
    getline(std::cin, address);
    std::cout << "City: ";
    getline(std::cin, city);
    std::cout << "State: ";
    getline(std::cin, state);
    std::cout << "Zip: ";
    std::cin >> zip;

    // file
    writer << "Name: " << name;
    writer << "\n";
    writer << "Phone Number: " << phone;
    writer << "\n";
    writer << "Adress: " << address;
    writer << "\n";
    writer << "City: " << city;
    writer << "\n";
    writer << "State: " << state;
    writer << "\n";
    writer << "Zip: " << zip;
    
    // close file
    writer.close();
}