#include <iostream>;


int main() {
    
    setlocale(LC_ALL, "Russian");

    int n = 0;
    std::cin >> n;
    int list[10000];

    for (int i = 0; i < n; ++i) {
        std::cin >> list[i];
    }

    int size = 0;

    for (int i = 0; i < n; ++i) {
        int temp = list[i];
        bool six = false;
        bool seven = false;
        while (temp > 0) {
            int digit = temp % 10;
            temp /= 10;
            if (digit == 7) seven = true;
            if (digit == 6) six == true;
        }
        if (six == true || seven == false) {
            list[size] = list[i];
            size++;
        }
        else std::cout << "NAHui" << list[i] << std::endl;
    }

    for (int i = 0; i < size; ++i) {
        std::cout << list[i] << ' ';



    }

    return 0;
}; 