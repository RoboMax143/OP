#include "reform.hpp"
#include <cmath>;
#include <iostream>;

namespace reform {

	bool equal_columns(int mat[100][100], int n) {
        bool flag = true;

        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                for (int k = 0; k < n; ++k) {
                    if (mat[k][i] != mat[k][j]) flag = false;
                    
                }
                if (flag == true) return true;
                flag = true;
            }
        }
        return false;
	}

    bool find_prime(int mat[100][100], int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                int x = abs(mat[i][j]);
                bool flag = true;

                if (x > 1) {
                    for (int k = 2; k <= sqrt(x); ++k) {
                        if (x % k == 0) flag = false;
                    }
                    if (flag == true) return true;
                }
            }
        }
        return false;
    }

    int sum_of_modules(int mat[100][100], int n, int i) {

        int sum = 0;
        if (i >= n) {
            std::cout << "Incorrect line number" << std::endl;
            return sum;
        }

        for (int j = 0; j < n; j++) {
            int x = abs(mat[i][j]);
            sum += x;
        }

        return sum;
    }

    void swap_lines(int mat[100][100], int n, int i, int j) {
        int tmp;

        for (int a = 0; a < n; a++) {
            tmp = mat[i][a];
            mat[i][a] = mat[j][a];
            mat[j][a] = tmp;
        }

    }



}//reform

