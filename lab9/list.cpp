#include "list.hpp"
#include <iostream>
#include "func.hpp"


Node* Make(int value) {
	Node* p = new Node;
	p->data = value;
	p->next = nullptr;
	return p;
}
 
void Add(Node* head, int value) {
	Node* p = Make(value);
	p->next = head->next;
	head->next = p;
}

void Add_back(Node* head, int value) {
	Node* p = Make(value);

	Node* tmp = head;
	while (tmp->next != nullptr) {
		tmp = tmp->next;
	}

	p->next = tmp->next;
	tmp->next = p;
}

void Print(Node* head) {
	Node* p = head->next;
	while (p != nullptr) {
		std::cout << p->data << ' ';
		p = p->next;
	}
}

void Delete_composite(Node* head) {
	Node* p = head;
	while (p->next != nullptr) {
		if (!is_Prime(p->next->data)) {
			Node* tmp = p->next;
			p->next = p->next->next;
			delete tmp;
		}
		else {
			p = p->next;
		}
	}
}

void Duplicate_Prime(Node* head) {
	Node* p = head->next;
	while (p != nullptr) {
		if (is_Prime(p->data) && is_157(p->data)) {
			Add(p, p->data);
			p = p->next;
		}
		p = p->next;
	}
}

void sort_by_increasing(Node* head) {
	Node* p = head->next;
	while (p->next != nullptr) {
		if (p->data > p->next->data) {
			int tmp = p->data;
			p->data = p->next->data;
			p->next->data = tmp;
		}
		p = p->next;
	}
}
