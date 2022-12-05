/*
 * Class: CMSC140 CRN
 * Instructor: Emily Koo
 * Project<3>
 * Description: (You are required to write a program that calculates the occupancy rate and the total hotel income for one night and displays this information as well as some other information described below. 
The program starts by asking the location where this hotel chain is located and the number of floors in the hotel. The number of floors may not exceed 5.  The User then enters the total number of rooms for each floor. The program then asks specifically the number of occupied rooms for each room type on this floor. The total number of rooms on each floor may not exceed 30 and the program should check that the total number of occupied rooms on each floor does not exceed the total of rooms on that floor. 
)
 * Due Date: april 1st, 2021
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: kasey atekwana

 * Pseudocode or Algorithm for the program:
	(be sure to indent items with control structure)
	(need to match flow chart submitted in documentation)
  1. declare int variables for all room types
  2. ask user for hotel location, store user input and save it into string variables
  3. while loop to checks the number of floors and the boolean value
  4. create error message if floor number between 1 and 5 and if room numbers are not between 1-30
  5. temporary variable for floors with least room and num of floors with the least amount of rooms
  6. for loop for number of rooms on each floor
  7. user input for about the occupancy of the rooms
  8. else staments determining the occupancy rate.
  9. displays occupancy rates
  10. closing message
*/

#include <iostream>
#include <iomanip>
#include <string>
// constant variables.
const std::string PROGRAMMER_NAME = "kasey atekwana";
const int ASSIGNMENT_NUMBER = 3;
int getRoomsForCurrentFloor(int f){
  int thisFloorTotalRooms;
  std::cout << "Enter total number of rooms in the " << f << "th Floor:";
  std::cin >> thisFloorTotalRooms;
  return thisFloorTotalRooms;
  }
  int main () {
  // variable for location.
  std::string hotelLocation;
  // variables for floors and rooms.
  int numFloors = 0, hotelIncome = 0 , numRooms = 0, numRoomsOccupied = 0, numRoomUnOccupied = 0;
  // hotel header.
  std::cout << "=================================================================================\n";
  std::cout << std::setw(40) << "BlueMont Hotel" << "\n";
  std::cout << "=================================================================================\n";
  // user input for the location chain of the hotel.
  std::cout << "Enter the location of this hotel chain: ";
  std::getline(std::cin, hotelLocation);
  // boolean value for when the number of floors entered isn't within the range of 1 and 5.
  bool validFloors = false;
  // while loop to check the number of floors and the boolean value; if not ask the number of floors again until it's within 1 and 5.
  while(validFloors == false){
    std::cout << "Enter total number of floors of the hotel: ";
    std::cin >> numFloors;
    if (numFloors < 1 | numFloors > 5){
        std::cout << "number of floors should be between 1 and 5 !! please try again.\n\n";
    }else{
      validFloors = true;
    }
  }
  int floorWithLeastRooms = 0;
  int numRoomsFloorWithLeastRooms = 0;
  int thisFloorTotalRooms, singleRooms, doubleRooms, kingRooms, suiteRooms;
  // for loop for number of rooms in each floor.
  for(int f = 1; f <= numFloors; f++){
    bool validRooms = false;
  // while loop to check the floors occupied
    while(validRooms == false){
      thisFloorTotalRooms = getRoomsForCurrentFloor(f);
      while(thisFloorTotalRooms < 1 | thisFloorTotalRooms > 30){
          std::cout << "number of floors should be between 1 and 30 !! Please try again.\n\n";
          thisFloorTotalRooms = getRoomsForCurrentFloor(f);
      }
      std::cout << "How many SINGLE rooms are   occupied in the " << f << "th Floor: ";
      std::cin >> singleRooms;
      std::cout << "How many DOUBLE rooms are occupied in the " << f << "th Floor: ";
      std::cin >> doubleRooms;
      std::cout << "How many KING rooms are occupied in the " << f << "th Floor: ";
      std::cin >> kingRooms;
      std::cout << "How many SUITE are occupied in the " << f << "th Floor: ";
      std::cin >> suiteRooms;
      if (singleRooms + doubleRooms + kingRooms + suiteRooms > thisFloorTotalRooms){
        validRooms = false;
        std::cout << "Total number of occupied rooms exceeds the total number of rooms on this floor. PLease try again!!\n\n\n";
      }else{
        numRooms += thisFloorTotalRooms;
        numRoomsOccupied += singleRooms + doubleRooms + kingRooms + suiteRooms;
        hotelIncome += (singleRooms * 60) + (doubleRooms * 75) + (kingRooms * 100) + (suiteRooms * 150);

        if(floorWithLeastRooms == 0){
          floorWithLeastRooms = f;
          numRoomsFloorWithLeastRooms = thisFloorTotalRooms;
        }else if(thisFloorTotalRooms < numRoomsFloorWithLeastRooms){
          floorWithLeastRooms = f;
          numRoomsFloorWithLeastRooms = thisFloorTotalRooms;
        }
      }
      std::cout << "\n";
      break;
    }
  }
  std::cout << "=================================================================================\n";
  std::cout << std::setw(40) << "BlueMont Hotel located at " << hotelLocation << "\n";
  std::cout << "=================================================================================\n";
  std::cout << std::setw(40) << "\tToday's Room Rates (Us$/night)\n";
  std::cout << std::setw(40) << "\tSingle Room \t Double Room \t King Room \t Suite Room\n";
  std::cout << std::setw(40) << "\t         60 \t          75 \t       100 \t        150\n";
  std::cout << "=================================================================================\n";
  numRoomUnOccupied = (numRooms - numRoomsOccupied);
  // occupancy rate
  double occupancy = (double(numRoomsOccupied) / double(numRooms)) * 100;
  std::cout << std::setw(40) << "Hotel Income:\t\t$" << hotelIncome << ".00\n";
  std::cout << std::setw(40) << "Total # of rooms:\t\t" << numRooms << "\n";
  std::cout << std::setw(40) << "Total # of Occupied Rooms:\t\t" << numRoomsOccupied << "\n";
  std::cout << std::setw(40) << "Total # of UnOccupied Rooms:\t\t" << numRoomUnOccupied << "\n";
  std::cout << std::setw(40) << "Occupancy Rate:\t\t" << std::setprecision(4)<< occupancy << "%\n\n";
  std::cout << floorWithLeastRooms << "th Floor with " << numRoomsFloorWithLeastRooms << " rooms, has the least number of rooms.\n";
  // message to improve occupancy rate
  if(occupancy < 60){
            std::cout << "Need to improve Hotel occupancy rate!!\n";
            std::cout << "\n\n";
        }
  // closing message
  std::cout << "Thank you for testing my program!!\n";
  std::cout << "PROGRAMMER: Kasey Atekwana \n";
  std::cout << "CMSC140 Common Project 3\n";
  std::cout << "DueDate: 04/01/2021\n";
} 