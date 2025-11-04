#include <iostream>;
#include "inout.hpp"
#include "reform.hpp"

int main() {

    setlocale(LC_ALL, "Russian");

    int n;
    std::cout << "¬ведите размер матрицы: ";
    std::cin >> n;
    int mat[100][100];

    InOut::input(mat, n);
    
    InOut::print(mat, n);
    
    if (reform::equal_columns(mat, n) && reform::find_prime(mat, n)) {
        for (int i = 0; i < n-1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (reform::sum_of_modules(mat, n, i) > reform::sum_of_modules(mat, n, j)) {
                    reform::swap_lines(mat, n, i, j);
                }
            }
        }
    }
    
    InOut::print(mat, n);

}; 