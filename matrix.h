// matrix.h
#pragma once
#include <vector>
#include <string>

void loadMatricesFromFile(const std::string& filename, std::vector<std::vector<int>>& A, std::vector<std::vector<int>>& B, int& N);
void printMatrix(const std::vector<std::vector<int>>& matrix);

std::vector<std::vector<int>> addMatrices(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B);
std::vector<std::vector<int>> multiplyMatrices(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B);

void printDiagonalSums(const std::vector<std::vector<int>>& A);

void swapRows(std::vector<std::vector<int>>& matrix, int r1, int r2);
void swapColumns(std::vector<std::vector<int>>& matrix, int c1, int c2);

void updateElement(std::vector<std::vector<int>>& matrix, int r, int c, int value);
