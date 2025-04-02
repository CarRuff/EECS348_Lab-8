#include "matrix.h"
#include <iostream>

int main() {
    
    // Variable Setup
    std::vector<std::vector<int>> A, B;
    int N;
    
    
    // Loading and printing Matrices
    load("input.txt", A, B, N);
    std::cout << "Matrix A:\n";
    printMatrix(A);
    std::cout << "\nMatrix B:\n";
    printMatrix(B);
    
    
    // Adding
    std::cout << "A+B:\n";
    printMatrix(add(A, B));
    
    
    // Multiply
    std::cout << "\nA * B:\n";
    printMatrix(multiply(A, B));
    
    // DiagonalSums
    std::cout << "\nDiagonal Sums of A:\n";
    DiagonalSums(A);
    
    // Swap Row
    std::cout << "\nSwapping rows 0 and 3 in A:\n";
    swapRows(A, 0, 3);
    printMatrix(A);
    
    // Swap Column
    std::cout << "\nSwapping columns 0 and 3 in A:\n";
    swapColumns(A, 0, 3);
    printMatrix(A);
    
    // Update
    std::cout << "\nUpdating A[2][2] to 99:\n";
    updateElement(A, 2, 2, 99);
    printMatrix(A);
    
    // return
    return 0;
}
