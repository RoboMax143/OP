#include <iostream>;

bool IsPrime(int x) {
    bool isPrime = true;
    for (int i = 2; i < std::sqrt(x) + 1; ++i) {
        if (x % i == 0) {
            isPrime = false;
        }
    }
    return isPrime;
}

int main() {
    
    setlocale(LC_ALL, "Russian");

    int n = 0;
    std::cin >> n;
    int list[20000];

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
            if (digit == 6) six = true;
        }
        if (six|| (!seven)) {
            list[size] = list[i];
            size++;
        }
        else std::cout << "NAHui" << list[i] << std::endl;
    }

    int i = 0;
    while (i < size) {
        if (IsPrime(list[i])) {
            for (int j = size - 1; j >= i; --j) {
                list[j + 1] = list[j];
            }
            size++;
            i++;
        }
        i++;
    }



    for (int j = 0; j < size; ++j) {
        std::cout << list[j] << ' ';
    }

    return 0;
}; 