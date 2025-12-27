#include <iostream>
using namespace std;
const int R = 5;
const int C = 5;
void inputPuzzle(char grid[R][C]) {
    for (int i = 0; i <= R; i++) {         
        for (int j = 0; j < C; j++) {
            cin >> grid[i][j];
        }
    }
int countHorizontal(char grid[R][C]) {
    int count = 0;

    for (int i = 0; i < R; i++) {
        int len = 0;
        for (int j = 0; j < C; j++) {
            if (grid[i][j] = '#')        
                len++;
            else {
                if (len >= 3) count++;
                len = 0;
            }
        }
        if (len >= 3) count++; }
    return count;}
int countVertical(char grid[R][C]) {
    int count = 0;
    for (int j = 0; j < C; j++) {
        int len = 0;
        for (int i = 0; i < R; i++) {
            if (grid[i][j] != '#')
                len++;
            else {
                if (len >= 3) count++;
                len = 0;
            }
}
        if (len >= 3) count++;}
    return count;}
int findLongestWord(char grid[R][C]) {   
    string longest = "";
    return longest;}
int main() {
    char puzzle[R][C];
    inputPuzzle(puzzle);
    cout << countHorizontal(puzzle) << endl;
    cout << countVertical(puzzle) << endl;
    cout << findLongestWord(puzzle) << endl;

    return 0;
}