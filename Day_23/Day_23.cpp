#include <iostream>

class Node {
public:
	int Value;
	Node * Next;
};

Node* new_head_insert(Node *head, int new_value) {

	Node* before_head = new Node();
	
	before_head->Value = new_value;
	before_head->Next = head;

	return before_head;
}

Node* new_mid_insert(Node* mid, int new_mid_value) {
	Node* new_mid = new Node();
	new_mid->Value = new_mid_value;
	new_mid->Next = mid->Next;

	mid->Next = new_mid;

	return new_mid;
}


Node* new_tail_insert(Node* tail, int new_tail_value) {
	Node* after_tail = new Node();

	after_tail->Value = new_tail_value;
	after_tail->Next  = NULL;

	tail->Next = after_tail; 
	

	return after_tail;
}

int main() {
	
	Node *head	= new Node();
	Node *mid   = new Node();
	Node *tail	= new Node();

	//you may not give values to head or tail.

	head->Value = 5;
	head->Next	= mid;

	mid->Value = 10;
	mid->Next = tail;

	tail->Value = 15;
	tail->Next = NULL;

	head = new_head_insert(head, 4);
	head = new_head_insert(head, 3);
	head = new_head_insert(head, 2);
	head = new_head_insert(head, 1);
	head = new_head_insert(head, 0);


	//i dont think a mid Node is needed as you can add any value by just having a head or a tail.
	mid  = new_mid_insert (mid , 11);
	mid  = new_mid_insert (mid , 12);
	mid  = new_mid_insert (mid , 13);
	mid  = new_mid_insert (mid , 14);


	tail = new_tail_insert(tail, 16);
	tail = new_tail_insert(tail, 17);
	tail = new_tail_insert(tail, 18);
	tail = new_tail_insert(tail, 19);
	tail = new_tail_insert(tail, 20);


	while (head != NULL) {
		std::cout << head->Value << "\n";
		head = head->Next;
	}
	return 0;
}