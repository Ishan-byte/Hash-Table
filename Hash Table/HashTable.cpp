#include <iostream>
#include <string>
#include "LinkedLIst.h"
#include "Hashtable.h"


int hashfunction(int id) {
	return id%BUCKET;
}


void insert_hash(HashTable *h, int id, string value) {
	int hash = hashfunction(id);

	Node* n = h->table[hash];

	if (n == NULL) {
		h->table[hash] = init_list(id, value);
	}
	else {
		Node* curr = n;
		while (curr->next != NULL) {
			curr = curr->next;
		}
		curr->next = init_list(id, value);
	}
}

void get_value(HashTable* h, int id) {
	int hash = hashfunction(id);
	
	Node* n = h->table[hash];

	if (n == NULL) {
		cout << "Nope notthing" << endl;
	}
	else {
		Node* curr = n;
		while (curr->id != id) {
			curr = curr->next;
		}

		string value = curr->value;
		cout << value << endl;
	
	}

	
}


void delete_obj(HashTable * h, int id ) {
	int hash = hashfunction(id);

	Node* n = h->table[hash];

	if (n == NULL) {
		cout << "Sorry could find the specific node" << endl;
	}
	else {
		Node* curr = n;
		while (curr->id != id) {
			curr = curr->next;
		}

		if (curr->next == NULL) {
			free(curr);
			curr = NULL;
		}
		else {
			Node* tmp = curr;
			curr = curr->next;
			free(tmp);
			tmp = NULL;
			cout << "Deleted successfully" << endl;
		}
		
	}
}














Node* get_value2(HashTable* h, int id) {
	int hash = hashfunction(id);
	
	Node* n = h->table[hash];


	if (n == NULL) {
		return NULL;
	}
	else {
		Node* curr = n;

		if (curr->id == id)
		{
			return curr;
		}
		while (curr->next && curr->next->id != id) {
			curr = curr->next;
		}
		
		return curr;
	}
		

}