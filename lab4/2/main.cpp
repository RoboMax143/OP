#include <iostream>;

int main() {

	setlocale(LC_ALL, "ru");

	std::cout << "�������� ������� ����� ������: 0 - ����(75�), 1 - ����(50�), 2 - ���������(150�)" << std::endl;
	int x;
	while (true) {
		std::cin >> x;
		if ((x > 2) || (x < 0))
			std::cout << "������! �������� ������� �� ������������: 0 - ����(75�), 1 - ����(50�), 2 - ���������(150�)" << std::endl;
		else
			break;
	}
	
	std::cout << "������� ������" << std::endl;
	int money;
	std::cin >> money;

	int price;

	switch (x) {
		case 0: {
			price = 75;
			std::cout << "��������� �������: ����" << std::endl;
			break;
		}
		case 1: {
			price = 50;
			std::cout << "��������� �������: ����" << std::endl;
			break;
		}
		case 2: { 
			price = 150; 
			std::cout << "��������� �������: ���������" << std::endl;
			break;
		}
	}

	if (money - price < 0)
		std::cout << "������������ �������! ���� �����: " << money << " ������" << std::endl;
	else
		std::cout << "�������� �������! ���� �����: " << money - price << " ������" << std::endl;
	
	return 0;
}