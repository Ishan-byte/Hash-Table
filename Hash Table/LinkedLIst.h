#pragma once
#include <iostream>
#include <string>


using namespace std;

typedef struct Node{
	int id;
	string value;
	Node* next;
} Node;

Node* init_list(int id, string value);

