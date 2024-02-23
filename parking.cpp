#include <iostream>
using namespace std;

// Declaration of global variables
int nob = 0, nor = 0, noc = 0, amount = 0, count = 0;

// Function prototypes
int menu();
void bus();
void riksha();
void cycle();
void show_detail();
void Delete();

int main() {
    int d;
    do {
        switch (menu()) {
            case 1:
                bus();
                break;
            case 2:
                riksha();
                break;
            case 3:
                cycle();
                break;
            case 4:
                show_detail();
                break;
            case 5:
                Delete();
                break;
            case 6:
                exit(0);
            default:
                cout << "YOU CHOSE AN INVALID OPTION. PLEASE CHOOSE A CORRECT OPTION AGAIN!" << endl;
        }
        cout << "IF YOU WANT TO ADD MORE VEHICLES, PLEASE PRESS 0. OTHERWISE, PRESS ANY KEY TO EXIT." << endl;
        cout << "Enter your choice: ";
        cin >> d;
        //system("clear"); // Clear the screen (for Linux)
        system("cls"); // Clear the screen (for Windows)
    } while (d == 0);
    cout << "THANK YOU. PLEASE VISIT AGAIN!" << endl;
    return 0;
}

int menu() {
    int c;
    cout << "**********************************************" << endl;
    cout << "PRESS 1 TO PARK A BUS (CHARGE: 100 INR)" << endl;
    cout << "PRESS 2 TO PARK A RIKSHA (CHARGE: 70 INR)" << endl;
    cout << "PRESS 3 TO PARK A CYCLE (CHARGE: 50 INR)" << endl;
    cout << "PRESS 4 TO SEE THE ENTERED RECORDS" << endl;
    cout << "PRESS 5 TO DELETE THE RECORDS" << endl;
    cout << "PRESS 6 TO EXIT" << endl;
    cout << "**********************************************" << endl;
    cout << "ENTER YOUR CHOICE: ";
    cin >> c;
    return c;
}

void bus() {
    nob++;
    amount += 100;
    count++;
}

void riksha() {
    nor++;
    amount += 70;
    count++;
}

void cycle() {
    noc++;
    amount += 50;
    count++;
}

void show_detail() {
    cout << "***********************************************" << endl;
    cout << "TOTAL NUMBER OF BUSES PARKED: " << nob << endl;
    cout << "TOTAL NUMBER OF RIKSHAS PARKED: " << nor << endl;
    cout << "TOTAL NUMBER OF CYCLES PARKED: " << noc << endl;
    cout << "TOTAL NUMBER OF VEHICLES PARKED: " << count << endl;
    cout << "TOTAL COLLECTION OF PARKING CHARGES: " << amount << " INR" << endl;
    cout << "***********************************************" << endl;
}

void Delete() {
    nob = 0;
    nor = 0;
    noc = 0;
    amount = 0;
    count = 0;
}
