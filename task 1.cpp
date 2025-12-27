#include <iostream>
#include <iomanip>
using namespace std;
const int DAYS = 7;
const int TIME = 4;
void inputTemperatures(int temp[DAYS][TIMES]) {
    for (int i = 0; i < DAYS; i++) {
     cout << "Enter temperatures for Day " << i + 1 << ":\n";
     for (int j = 0; j < TIMES; j++) {
            cout << "  Time " << j + 1 << "";
            cin >> temp[i][j];
     }
  }
}
void findHighLow(int temp[DAYS][TIMES], int &highest, int &lowest) {
 highest = temp[0][0];
 lowest = temp[0][0];
 for (int i = 0; i < DAYS; i++) {
 for (int j = 0; j < TIMES; j+) {  if (temp[i][j] > highest)
       highest = temp[i][j];
            if (temp[i][j] < lowest
                lowest = temp[i][j]; }
 }
}
void calculateAverages(int temp[DAYS][TIMES], double avg[DAYS]) {
    for (int i = 0; i < DAYS; i++) {
        int sum = 0;
        for (int j = 0; j < TIMES; j++) {
            sum += temp[i][j];
        }
        avg[i] = sum / 4.0;
    }
}
void displayResults(int temp[DAYS][TIMES], double avg[DAYS], int highest, int lowest) {
    cout << "\nTemperature Table\n";
    cout << "Day   T1   T2   T3   T4   Average\n";

    for (int i = 0; i < DAYS; i++) {
        cout << setw(3) << i + 1 << "  ";
        for (int j = 0; j <TIMES; j++) {
            cout << setw(4) << temp[i][j];
        }
        cout << setw(8) << fixed << setprecision(2) << avg[i] << endl;
    {
    cout << "\nHighest temperature of the week: " << highest << endl;
    cout << "Lowest temperature of the week: " << lowest << endl;
}

int main() {
    int temperatures[DAYS][TIMES];
    double averages[DAYS];
    int highest, lowest;
    inputTemperatures(temperatures)
    findHighLow(temperatures, highest, lowest);
    calculateAverages(temperatures, averages);
    displayResults(temperatures, average highest, lowest);   
    return 0;
}