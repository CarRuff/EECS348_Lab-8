// matrix.cpp
#include "matrix.h"
#include <iostream>
#include <fstream>
#include <iomanip>

// Load Function
void load(const std::string& filename, std::vector<std::vector<int>>& A, std::vector<std::vector<int>>& B, int& N) {
    // Open File
    std::ifstream infile(filename);
    // Set N to matrix size
    infile >> N;
    
    // Make A & B N sized
    A.assign(N, std::vector<int>(N));
    B.assign(N, std::vector<int>(N));
    
    // Read through Matrix A
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            infile >> A[i][j];
    
    // Read through Matrix B    
    for (int i = 0; i < N; ++i)
        for (int j = 0; j < N; ++j)
            infile >> B[i][j];
}

// PrintMatrix Function
void printMatrix(const std::vector<std::vector<int>>& matrix) {
    
    // Loop through the rows
    for (const auto& row : matrix) {
        // Loop through each value
        for (int val : row)
            // Print each character
            std::cout << std::setw(4) << val;
        // New line
        std::cout << '\n';
    }
}

// Add Matrix Function
std::vector<std::vector<int>> add(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    // Get the matrix size
    int N = A.size();
    
    // Create a blank matrix
    std::vector<std::vector<int>> C(N, std::vector<int>(N));
    
    // Loop through rows
    for (int i = 0; i < N; ++i)
        // Loop through columns
        for (int j = 0; j < N; ++j)
            // Add result
            C[i][j] = A[i][j] + B[i][j];
    
    
    // return resulting matrix
    return C;
}

// Multiply Matrix Function
std::vector<std::vector<int>> multiply(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    // Get the matrix size
    int N = A.size();
    // Create a blank matrix
    std::vector<std::vector<int>> C(N, std::vector<int>(N, 0));
    
    // Loop rows for A
    for (int i = 0; i < N; ++i)
        // Loop Columns for B
        for (int j = 0; j < N; ++j)
            // Dot Product
            for (int k = 0; k < N; ++k)
                
                // Multiply
                C[i][j] += A[i][k] * B[k][j];
    
    // Return Resulting Matrix
    return C;
}

// Print DiagonalSums Function
void DiagonalSums(const std::vector<std::vector<int>>& A) {
    
    // Get the matrix size
    int N = A.size();
    // Variable setup
    int x = 0, y = 0;
    
    // Loop through Matrix
    for (int i = 0; i < N; ++i) {
        
        // Main Diagonal
        x += A[i][i];
        
        // Secondary Diagonal
        y += A[i][N - 1 - i];
    }
    
    // Print Out Both
    std::cout << "Main diagonal sum: " << x << "\n";
    std::cout << "Secondary diagonal sum: " << y << "\n";
}

// Swap Rows Function
void swapRows(std::vector<std::vector<int>>& matrix, int x, int y) {
    // Get Matrix Size
    int N = matrix.size();
    // Test if its possible
    if (x >= 0 && y >= 0 && x < N && y < N)
        // Swap
        std::swap(matrix[x], matrix[y]);
    else
        // Print Error
        std::cout << "Invalid row indices\n";
}

// Swap Columns Function
void swapColumns(std::vector<std::vector<int>>& matrix, int x, int y) {
    // Get matrix Size
    int N = matrix.size();
    
    // Test if possible 
    if (x >= 0 && y >= 0 && x < N && y < N) {
        // Swap
        for (int i = 0; i < N; ++i)
            std::swap(matrix[i][x], matrix[i][y]);
    } else {
        // Print Error
        std::cout << "Invalid column indices\n";
    }
}

// Change Element function
void updateElement(std::vector<std::vector<int>>& matrix, int x, int y, int value) {\
    // Get Matrix Size
    int N = matrix.size();
    // Test if it exists
    if (x >= 0 && x < N && y >= 0 && y < N)
        // Update
        matrix[x][y] = value;
    else
        // Give Error
        std::cout << "Invalid indices\n";
}


