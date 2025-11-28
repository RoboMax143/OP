#include <iostream>
#include "list.hpp"
#include "func.hpp"


int main() {
	
	int n;
	std::cin >> n;

	Node head;
	head.next = nullptr;

	for (int i = 0; i < n; ++i) {
		int x;
		std::cin >> x;
		Add_back(&head, x);
	}

	Node* p = head.next;
	bool sorted_first = true;
	bool sorted_last = true;

	while (p->next != nullptr) {
		int a = p->data;
		int b = p->next->data;
		if (l_digit(a) < l_digit(b)) {
			sorted_last = false;
		}
		if (f_digit(a) < f_digit(b)) {
			sorted_first = false;
		}
		p = p->next;
	}

	Print(&head);
	std::cout << '\n';

	if (sorted_first || sorted_last) {
		Delete_composite(&head);
		Duplicate_Prime(&head);
	}
	else {
		for (int i = 0; i < n; ++i) {
			sort_by_increasing(&head);
		}
		
	}
	
	Print(&head);
}