#include <iostream>
using namespace std;

void printSpiral(int n) {
    int matrix[20][20] = {0};
    int value = 1;
    int rowStart = 0, rowEnd = n-1;
    int colStart = 0, colEnd = n-1;
    
    while (value <= n*n) {
        for (int i = colStart; i <= colEnd; i++) {
            matrix[rowStart][i] = value++;
        }
        rowStart++;
        
        for (int i = rowStart; i <= rowEnd; i++) {
            matrix[i][colEnd] = value++;
        }
        colEnd--;
        
        for (int i = colEnd; i >= colStart; i--) {
            matrix[rowEnd][i] = value++;
        }
        rowEnd--;
        
        for (int i = rowEnd; i >= rowStart; i--) {
            matrix[i][colStart] = value++;
        }
        colStart++;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of spiral matrix: ";
    cin >> n;
    printSpiral(n);
    return 0;
} 