#ifndef STACK_H
#define STACK_H
 

#include <iostream>
#include "node.h"
#include "node.cpp"
 
 
template <class T>
 
class Stack
{
	private:
		Node<T> *last;
		
	public:
		// Constructor por defecto	        
		Stack() : last(NULL){};
	        ~Stack();
 
		void push(T);
		T pop();
		T top();
		void concat(Stack);

	
		 

};
 
#endif // LIST_H
