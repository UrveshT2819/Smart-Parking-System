#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using namespace std::chrono;

int Total = 4;
int Space = Total;

void lcdDisplay() {
    cout << "---------------------------" << endl;
    cout << "Total Parking Spaces: " << Total << endl;
    cout << "Available Spaces:     " << Space << endl;
    cout << "---------------------------" << endl;
}

void entryGate() {
    if (Space > 0) {
        cout << "\n[Entry IR] Car detected at Entry..." << endl;
        cout << "[Gate] Opening Entry Gate..." << endl;
        this_thread::sleep_for(seconds(2));
        cout << "[Gate] Closing Entry Gate..." << endl;
        Space--;
        cout << "[LCD] Car Entered. Space Left: " << Space << endl;
    } else {
        cout << "\n[Entry IR] Car detected but NO SPACE!" << endl;
        cout << "[LCD] Sorry! No Space Available." << endl;
    }
    lcdDisplay();
}

void exitGate() {
    if (Space < Total) {
        cout << "\n[Exit IR] Car detected at Exit..." << endl;
        cout << "[Gate] Opening Exit Gate..." << endl;
        this_thread::sleep_for(seconds(2));
        cout << "[Gate] Closing Exit Gate..." << endl;
        Space++;
        cout << "[LCD] Car Exited. Space Left: " << Space << endl;
    } else {
        cout << "\n[Exit IR] No car parked. Can't exit!" << endl;
    }
    lcdDisplay();
}

int main() {
    int choice;
    cout << "=== SMART CAR PARKING SIMULATION ===" << endl;
    lcdDisplay();

    while (true) {
        cout << "\nChoose an action:" << endl;
        cout << "1. Car Entry" << endl;
        cout << "2. Car Exit" << endl;
        cout << "3. Show Status" << endl;
        cout << "0. Exit Program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                entryGate();
                break;
            case 2:
                exitGate();
                break;
            case 3:
                lcdDisplay();
                break;
            case 0:
                cout << "Exiting simulation." << endl;
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }

    return 0;
}

