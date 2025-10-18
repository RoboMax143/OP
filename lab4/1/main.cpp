#include <iostream>;


int main() {
    
    setlocale(LC_ALL, "Russian");

    srand(time(0));
    int x = rand();
    std::cout << x << std::endl;

    int y;
    int count = 0;

    while (true){
        ++count;
        std::cin >> y;
        if (y == x)
            break;
        else if (y > x)
            std::cout << "Слишком много" << std::endl;
        else if (y < x)
            std::cout << "Слишком мало" << std::endl;
    }
    
    if ((1 < count % 10 < 5) && ((count % 100 > 15) || (count % 100 < 11)))
        std::cout << "Точно! Ты угадал за " << count << " попытки!" << std::endl;
    else if (count % 10 == 1 && count % 100 != 11)
        std::cout << "Точно! Ты угадал за " << count << " попытку!" << std::endl;
    else
        std::cout << "Точно! Ты угадал за " << count << " попыток!" << std::endl;
    
    return 0;
}; 