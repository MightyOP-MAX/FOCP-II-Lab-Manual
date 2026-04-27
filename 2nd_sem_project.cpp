#include <iostream>
using namespace std;

//  Vehicle Class
class Vehicle {
public:
    int id;
    int entryTime;

    Vehicle(int i, int time) {
        id = i;
        entryTime = time;
    }
};

// Parking Slot Class
class ParkingSlot {
public:
    int id;
    bool isOccupied;
    Vehicle* vehicle;

    ParkingSlot(int i = 0) {
        id = i;
        isOccupied = false;
        vehicle = NULL;
    }
};

int main() {

    //  Create 5 parking slots
    ParkingSlot slots[5] = {
        ParkingSlot(1),
        ParkingSlot(2),
        ParkingSlot(3),
        ParkingSlot(4),
        ParkingSlot(5)
    };

    int vehicleId = 1;
    int currentTime = 0;

    //  Menu Loop
    while (true) {

        cout << "\n============================\n";
        cout << "   SMART PARKING SYSTEM\n";
        cout << "============================\n";
        cout << "1. Park Vehicle\n";
        cout << "2. Remove Vehicle\n";
        cout << "3. Show Slots\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";

        int choice;
        cin >> choice;

        //  PARK VEHICLE
        if (choice == 1) {

            bool parked = false;

            for (int i = 0; i < 5; i++) {
                if (!slots[i].isOccupied) {

                    slots[i].isOccupied = true;
                    slots[i].vehicle = new Vehicle(vehicleId++, currentTime);

                    cout << "Vehicle " << slots[i].vehicle->id
                         << " parked at time " << currentTime
                         << " in slot " << slots[i].id << endl;

                    currentTime += 5;
                    parked = true;
                    break;
                }
            }

            if (!parked) {
                cout << "Parking Full!\n";
            }
        }

        //  REMOVE VEHICLE
        else if (choice == 2) {

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

                    removed = true;
                    break;
                }
            }

            if (!removed) {
                cout << "No vehicle to remove!\n";
            }
        }

        //  SHOW SLOTS
        else if (choice == 3) {

            cout << "\n===== Parking Status =====\n";

            for (int i = 0; i < 5; i++) {
                cout << "Slot " << slots[i].id << " : ";

                if (slots[i].isOccupied) {
                    cout << "Occupied (Vehicle "
                         << slots[i].vehicle->id << ")\n";
                } else {
                    cout << "Free\n";
                }
            }
        }

        //  EXIT
        else if (choice == 4) {
            cout << "Exiting program...\n";
            break;
        }

        //  INVALID INPUT
        else {
            cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}