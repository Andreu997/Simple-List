#ifndef SIMPLE_LINKED_LIST_
#define _SIMPLE_LINKED_LIST_

//typedef
template <class T>

class list{
	struct node{

	public:
		mutable T data;
		node* next = nullptr

	public:
		node(){}
		node(const T& data) : data(data) {}

	};

public:
	List(){
		iterator = root;
	}

	virtual ~List(){}

	node* root;
	node* iterator;
	node* last;
	node* cpy;

public:
	//ERASE

	//INSERT
	void insert(const T& data, int n){
		node* new_node = new node(data);
		iterator = root;
		while (n > 0 && iterator->next != nullptr) {
			iterator = iterator->next;
			n--;
		}
		new_node->next = iterator->next;
		iterator = new_node;
	}


	void clear(){

		

	}


	node* first() {
		return root;
	}

	node* last(){
		if (iterator->next == nullptr)
			iterator = iterator->next;
		return iterator;
	}


	void pushfront(){

		node* new_node = new node(value);
		new_node->next = root;
		root = new_node;
	}


	void pushback(){

		node* new_node = new node(value);
		last = last();
		if (last == NULL)
			root = new_node;
		else
			last->next = new_node;
	}


	unsigned int size(){


	}


	void empty(){


	}





};

#endif _SIMPLE_LINKED_LIST_
