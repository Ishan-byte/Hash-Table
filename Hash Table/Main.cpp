#include <iostream>
#include <string>
#include "HashTable.h"
#include "LinkedLIst.h"



int main() {

	HashTable* h = new HashTable();
	insert_hash(h, 150, "Sup");
	insert_hash(h, 50, "Nigga");
	insert_hash(h, 250, "Yoo");
	delete_obj(h, 250);
	Node *n = get_value2(h, 150);
	cout << "get_value2 = %s\n "<< n->value<< endl;


}