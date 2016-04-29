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

public:
	//ERASE

	//INSERT
	void insert(const T& data, int n){
		node* newmode = new node(data);
		iterator = root;
		while (n > 0 && iterator->next != nullptr) {
			iterator = iterator->next;
			n--;
		}
		newnode->next = iterator->next;
		iterator = newnode;
	}


	void clear(){


	}


	node first() {
		return root*;
	}


	node* end(){


	}


	void pushfornt(){


	}


	void pushback(){


	}


	unsigned int size(){


	}


	void empty(){


	}





};

#endif _SIMPLE_LINKED_LIST_
