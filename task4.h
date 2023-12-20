#pragma once

#include <iostream>
#include <optional>

using namespace std;

template <typename DataType>
class List {
private:
	struct Node {
		Node* next;
		DataType data;
	}* head;

public:
	List() {
		head = nullptr;
	}

	List(List&& list_copy) { // move constructor
		head = list_copy.head;
	}

	~List() {
		while (head != nullptr) {
			Node* current = head;
			head = head->next;
			delete current;
		}
	}

	void InsertNode(DataType new_data, int position) { // При position>length-1 - в конец; при -1<position<length-1 - на место элемента со сдвигом вправо
		Node* newNode = new Node;
		newNode->data = new_data;
		newNode->next = nullptr;
		if (head == nullptr) {
			head = newNode;
		}
		else if (position == 0) {
			newNode->next = head;
			head = newNode;
		}
		else if (position > 0) {
			Node* i = head;
			while (position > 1 and i->next != nullptr) {
				i = i->next;
				position--;
			}
			newNode->next = i->next;
			i->next = newNode;
		}
	}

	void RemoveNode(int position) { // При position>length-1 - ничего не менять; при -1<position<length-1 - исключить position
		if (position == 0) {
			head = head->next;
		}
		else if (position > 0) {
			Node* i = head;
			while (i->next != nullptr and position > 1) {
				i = i->next;
				position--;
			}
			if (i->next != nullptr){
				i->next = i->next->next;
			}
		}
		
	}

	DataType GetElement(int position) { // При position>length-1 - вернуть NULL; при -1<position<length-1 - position
		Node* i = head;
		while (i != nullptr and position > 0) {
			i = i->next;
			position--;
		}
		if (i != nullptr) { 
			return i->data; 
		}
		else {
			return NULL;
		}
	}

	void PrintList() {
		Node* i = head;
		while (i != nullptr) {
			cout << i->data << "\n";
			i = i->next;
		}
	}
};