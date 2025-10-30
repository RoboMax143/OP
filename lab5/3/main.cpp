#include <iostream>;


int main() {
    
    setlocale(LC_ALL, "Russian");
    int n, m;
    std::cout << "¬ведите количество строк, затем количество столбцов" << std::endl;
    std::cin >> n >> m;
    
    int mat[100][100];
    
    for (int i = 0; i < n; ++i) {
        std::cout << "¬ведите элементы " << i+1 << "-й строки" << std::endl;
        for (int j = 0; j < m; ++j) {
            std::cin >> mat[i][j];
        }
    }

    int x;
    int min_sum = 1000000000;
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = 0; j < m; ++j) {
            sum += mat[i][j];
        }
        if (sum < min_sum) {
            x = i;
            min_sum = sum;
        }
    }

    for (int j = 0; j < m; ++j) {
        mat[x][j] = 0;
    }


    for (int i = 0; i < n; ++i) {
        std::cout << "[ ";
        for (int j = 0; j < m; ++j) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << "]" << std::endl;
    }



    return 0;
}; 