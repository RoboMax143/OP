#include <iostream>;


int main() {

    setlocale(LC_ALL, "Russian");

    int n = 0;
    std::cin >> n;
    int list[10000];
    int isOne = 0;
    
    for (int i = 0; i < n; i++) {

        std::cin >> list[i];
        while (list[i] < 1) {
            std::cout << "¬ведите натуральное число!" << std::endl;
            std::cin >> list[i];
        }

        int tmp = list[i];
        while (tmp > 0) {
            if (tmp == 1) {
                isOne = 1;
            }
            tmp /= 10;
        }
    }
    
    if (isOne == 1) {
        for (int i = 0; i < n-1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (list[i] > list[j]) {
                    int tmp = list[i];
                    list[i] = list[j];
                    list[j] = tmp;
                }
            }

        }
    }

    for (int i = 0; i < n; ++i)
        std::cout << list[i] << " ";

    return 0;
}; 