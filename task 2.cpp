#include <iostream>
using namespace std;
const int PRODUCTS = 5;
const int DAYS = 7;
void inputSales(int sales[PRODUCTS][DAYS]) {
    for (int i = 0; i < PRODUCTS; i++) {
        for (int j = 0; j < DAYS; j++) {
            cin >> sales[i][j];
        }}
void calculateRevenue(int sales[PRODUCTS][DAYS], int total[PRODUCTS]) {
    for (int i = 0; i < PRODUCTS; i++) {
total[i] = 0;
    for (int j = 0; j < DAYS; j++) {
 total[i] += sales[i][j];
        }}
}
int findMaxProduct(int total[PRODUCTS]) {
    int max = 0;
    for (int i = 1; i < PRODUCTS; i++) {
        if (total[i] > total[max]) {
            max = i;
        }}
    return max;
}
int findBestDay(int sales[PRODUCTS][DAYS] {
    int best = 0;

    for (int j = 1; j < DAYS; j++) {
    int sum1 = 0, sum2 = 0;
 for (int i = 0; i < PRODUCTS; i++ {
 sum1 += sales[i][j];
 sum2 += sales[i][best];
}

 if (sum1 > sum2) {
      best = j;
        } }
    return best;
   }
int main() {
    int sales[PRODUCTS][DAYS];
    int total[PRODUCTS;
    inputSales(sales);
    calculateRevenue(sales, total);
    int maxProduct = findMaxProduct(total);
    int bestDay = findBestDay(sales);
    cout < "Max Product: " << maxProduct + 1 << endl;
    cout << "Best Day: " << bestDay + 1 < endl;
    return 0;
}