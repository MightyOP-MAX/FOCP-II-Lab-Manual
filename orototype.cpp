#include <iostream>
using namespace std;
class Vehicle {
public:
    int id;
    int entryTime;

    Vehicle(int i, int time) {
        id = i;
        entryTime = time;
    }
};
class ParkingSlot {
public:
    int id;
    bool isOccupied;
    Vehicle* vehicle;//pointer to vehicle

    ParkingSlot(int i) {
        id = i;
        isOccupied = false;
        vehicle = NULL;
    }
};

int main() {
   
    ParkingSlot slots[5] = {
        ParkingSlot(1),
        ParkingSlot(2),
        ParkingSlot(3),
        ParkingSlot(4),
        ParkingSlot(5)
    };
//     // step 1:manual
// // slots[0].isOccupied = true; // TO SHOW MANUALLY THAT SLOT 1 IS FILLED
// // Park a vehicle automatically
// // step 2: automatic
// // for (int i = 0; i < 5; i++) {
// //     if (!slots[i].isOccupied) { // previously we were checking that each vehicle is parked and running the same loop again to check for next slot
// //         slots[i].isOccupied = true;
// //         cout << "Vehicle parked in slot " << slots[i].id << endl;
// //         break;
// //     }
// // }
// // for (int i = 0; i < 5; i++) {
// //     if (!slots[i].isOccupied) {
// //         slots[i].isOccupied = true;
// //         cout << "Vehicle parked in slot " << slots[i].id << endl;
// //         break;
// //     }
// //SHOW THE SAME LOOP AGAIN IF YOU WANT TO PARK THE SECOND VEHICLE
// //step 3 :
 int vehicleId = 1;
 int currentTime =0;
//menu loop automated system
while (true) {

        cout << "\n1. Park Vehicle\n";
        cout << "2. Remove Vehicle\n";
        cout << "3. Show Slots\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";

        int choice;
        cin >> choice;

        // 3️ All logic goes INSIDE this loop

        if (choice == 1) {
            // park logic
              for (int i = 0; i < 5; i++) {
        if (!slots[i].isOccupied) {
            slots[i].isOccupied = true;
            slots[i].vehicle = new Vehicle(vehicleId++, currentTime);

            cout << "Vehicle " << slots[i].vehicle->id
                 << " parked at time " << currentTime
                 << " in slot " << slots[i].id << endl;

            currentTime += 5;
            break;
        }
    }
        }//remove vehicle
        else if (choice == 2) {
            // remove logic
            bool removed = false;
              for (int i = 0; i < 5; i++) {
        if (slots[i].isOccupied) {

            int parkedTime = currentTime - slots[i].vehicle->entryTime;
            int fee = parkedTime * 10;

            cout << "Vehicle " << slots[i].vehicle->id
                 << " leaving from slot " << slots[i].id << endl;

            cout << "Time parked: " << parkedTime << endl;
            cout << "Fee: ₹" << fee << endl;

            delete slots[i].vehicle;
            slots[i].vehicle = NULL;
            slots[i].isOccupied = false;

            break;
        }
    }
        }
        else if (choice == 3) {
            // display logic
                for (int i = 0; i < 5; i++) {
        cout << "Slot " << slots[i].id << " is ";

        if (slots[i].isOccupied) {
            cout << "Occupied by Vehicle "
                 << slots[i].vehicle->id << endl;
        } else {
            cout << "Free\n";
        }
    }

        }
        else if (choice == 4) {
            break; // exit program
        }
        else {
    cout << "Invalid choice by user please try again later\n";
}
    }

    // 4️ End of program
    return 0;
}
// for (int i = 0; i < 5; i++) {
//     if (!slots[i].isOccupied) {
//         slots[i].isOccupied = true;

//         slots[i].vehicle = new Vehicle(vehicleId++, currentTime);

//         cout << "Vehicle " << slots[i].vehicle->id
//              << " parked at time " << currentTime
//              << " in slot " << slots[i].id << endl;
//         break;
//     }
// }
// currentTime += 5; // assume 5 time units passed
// // parking another vehicle
// //  vehicleId = 2;

// // for (int i = 0; i < 5; i++) {
// //     if (!slots[i].isOccupied) {
// //         slots[i].isOccupied = true;

// //         // create vehicle
// //         slots[i].vehicle = new Vehicle(vehicleId++);

// //         cout << "Vehicle " << slots[i].vehicle->id
// //              << " parked in slot " << slots[i].id << endl;
// //         break;
// //     }
// // }
// // Remove a vehicle (simulate exit)
// for (int i = 0; i < 5; i++) {
//     if (slots[i].isOccupied) {

//         int parkedTime = currentTime - slots[i].vehicle->entryTime;
//         int fee = parkedTime * 10; // ₹10 per unit time

//         cout << "Vehicle " << slots[i].vehicle->id
//              << " leaving from slot " << slots[i].id << endl;

//         cout << "Time parked: " << parkedTime << endl;
//         cout << "Parking fee: "<< fee<<" rupees "  << endl;

//         delete slots[i].vehicle;
//         slots[i].vehicle = NULL;
//         slots[i].isOccupied = false;

//         break;
//     }
// }
//     // Display all slots
//     for (int i = 0; i < 5; i++) {
//         cout << "Slot " << slots[i].id << " is ";
//         if (slots[i].isOccupied){
//                 cout << "Occupied by Vehicle "<<slots[i].vehicle->id<<endl;
//          } else{
//             cout << "Free\n";
//     }
//     }
//     return 0;
// }