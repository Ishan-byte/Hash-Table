#pragma once
#include <iostream>
#include <string>
#include "LinkedLIst.h"
#define BUCKET 100


typedef struct HashTable {
	Node* table[BUCKET]{};
};

int hashfunction(int id);

void insert_hash(HashTable* h, int id, string value);

void get_value(HashTable* h, int id);

Node* get_value2(HashTable* h, int id);

void delete_obj(HashTable* h, int id);