#include <iostream>;


int main() {

    setlocale(LC_ALL, "Russian");

    int n = 0;
    std::cin >> n;
    int list[1000];
    int firstNum[1000];
    int sumNum[1000];

    for (int i = 0; i < n; ++i) {
        std::cin >> list[i];
        
        int tmp = list[i];
        sumNum[i] = 0;

        while (tmp > 0) {
            if (tmp < 10) {
                firstNum[i] = tmp;
            }
            int digit = tmp % 10;
            sumNum[i] += digit;
            tmp /= 10;
        }
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (firstNum[i] > firstNum[j]) {
                std::swap(list[i], list[j]);
                std::swap(firstNum[i], firstNum[j]);
                std::swap(sumNum[i], sumNum[j]);
            }
            if (firstNum[i] == firstNum[j]) {
                if (sumNum[i] > sumNum[j]) {
                    std::swap(list[i], list[j]);
                    std::swap(firstNum[i], firstNum[j]);
                    std::swap(sumNum[i], sumNum[j]);
                }
            }
            if (firstNum[i] == firstNum[j] && sumNum[i] == sumNum[j]) {
                if (list[i] > list[j]) {
                    std::swap(list[i], list[j]);
                    std::swap(firstNum[i], firstNum[j]);
                    std::swap(sumNum[i], sumNum[j]);
                }
            }
        }
    }

    for (int i = 0; i < n; ++i)
        std::cout << list[i] << " " << firstNum[i] << " " << sumNum[i] << "\n";


    return 0;
}; 