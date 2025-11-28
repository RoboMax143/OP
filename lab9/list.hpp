#pragma once

struct Node {
	int data;
	Node* next;
};

Node* Make(int value);

void Add(Node* head, int value);

void Add_back(Node* head, int value);

void Print(Node* head);

void Delete_composite(Node* head);

void Duplicate_Prime(Node* head);

void sort_by_increasing(Node* head);


