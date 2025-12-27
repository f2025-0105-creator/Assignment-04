#include <iostream>
using namespace std;
const int ROWS = 10;
const int COLS = 10;
void displaySeats(int seats[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << seats[i][j] << " ";
        }
        cout << endl;}
}
void reserveSeat(int seats[ROWS][COLS]) {
    int r, c;
    cin >> r >> c;

    if (seats[r][c] == 0) {
        seats[r][c] = 1;
        cout << "Seat reserved\n";
    } else {
        cout << "Seat already reserved\n";}
}
void cancelSeat(int seats[ROWS][COLS]) {
    int r, c;
    cin >> r >> c;
    if (seats[r][c] == 1) {
        seats[r][c] = 0;
        cout << "Seat canceled\n";
    } else {
        cout << "Seat already empty\n"; }
void countRows(int seats[ROWS][COLS]) {
    int full = 0, empty = 0, partial = 0;
    for (int i = 0; i < ROWS; i++) 
        int ones = 0, zeros = 0;
        for (int j = 0; j < COLS; j++) {
            if (seats[i][j] == 1)
                ones++;
            else
        zeros++; }
      if (ones == COLS)
            full++;
      else if (zeros == COLS)
            empty++;
        else
         partial++;
    }
    cout << "Full rows: " << full << endl;
    cout << "Empty rows: " << empty << endl;
    cout << "Partial rows: " << partial << endl;
}
int main() {
    int seats[ROWS][COLS] = {0};
    int choice;
    do {
     cout << "\n1.Display Seats\n2.Reserve Seat\n3.Cancel Seat\n4.Count Rows\n5.Exit\n";
     cin >> choice;

        if (choice == 1)
  displaySeats(seats);
else if choice == 2)
            reserveSeatseats);        else if (choice == 3)
      cancelSeat(seats);
  else if (choice == 4)
  ountRows(seats)
    } while (choice != 5);
    return 0;
}