#include "inout.hpp"
#include <iostream>;

namespace InOut {

	void input(int mat[100][100], int n) {
        for (int i = 0; i < n; i++) {
            std::cout << "¬ведите "<<i+1<<"-ю строку" <<std::endl;
            for (int j = 0; j < n; j++) {
                std::cin >> mat[i][j];
            }
        }
	}

    void print(int mat[100][100], int n) {
        for (int i = 0; i < n; i++) {
            std::cout << "[ ";
            for (int j = 0; j < n; j++) {
                std::cout << mat[i][j]<<' ';
            }
            std::cout << "]" << std::endl;
        }
    }


} //InOut