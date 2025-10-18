#include <iostream>;

int main() {

	setlocale(LC_ALL, "ru");

	std::cout << "Выберите напиток через кнопку: 0 - кола(75р), 1 - вода(50р), 2 - энергетик(150р)" << std::endl;
	int x;
	while (true) {
		std::cin >> x;
		if ((x > 2) || (x < 0))
			std::cout << "Ошибка! Выберите напиток из предложенных: 0 - кола(75р), 1 - вода(50р), 2 - энергетик(150р)" << std::endl;
		else
			break;
	}
	
	std::cout << "Внесите деньги" << std::endl;
	int money;
	std::cin >> money;

	int price;

	switch (x) {
		case 0: {
			price = 75;
			std::cout << "Выбранный напиток: Кола" << std::endl;
			break;
		}
		case 1: {
			price = 50;
			std::cout << "Выбранный напиток: Вода" << std::endl;
			break;
		}
		case 2: { 
			price = 150; 
			std::cout << "Выбранный напиток: Энергетик" << std::endl;
			break;
		}
	}

	if (money - price < 0)
		std::cout << "Недостаточно средств! Ваша сдача: " << money << " рублей" << std::endl;
	else
		std::cout << "Заберите напиток! Ваша сдача: " << money - price << " рублей" << std::endl;
	
	return 0;
}