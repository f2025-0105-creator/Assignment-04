#include <iostream>
using namespace std;
int main() {
    int m = 4, n = 4;
    int a[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int r[4][4];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            r[n - 1 - j][i] = a[i][j];
        
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << r[i][j] << " ";
        
        cout << endl;
    }
    return 0;
}