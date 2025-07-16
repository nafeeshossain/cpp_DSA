#include <iostream>
#include <vector>
using namespace std;

// Function to transpose the matrix
void transpose(vector<vector<int>>& matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
}

// Function to reverse each column
void reverseColumns(vector<vector<int>>& matrix, int n) {
    for (int j = 0; j < n; j++) {
        int top = 0, bottom = n - 1;
        while (top < bottom) {
            swap(matrix[top][j], matrix[bottom][j]);
            top++;
            bottom--;
        }
    }
}

// Function to rotate the matrix 90 degrees anti-clockwise
void rotate90AntiClockwise(vector<vector<int>>& matrix, int n) {
    transpose(matrix, n);
    reverseColumns(matrix, n);
}

// Function to print the matrix
void printMatrix(const vector<vector<int>>& matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Main function
int main() {
    int n;
    cout << "Enter the size of the square matrix (n x n): ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> matrix[i][j];

    rotate90AntiClockwise(matrix, n);

    cout << "Matrix after 90-degree anti-clockwise rotation:\n";
    printMatrix(matrix, n);

    return 0;
}
