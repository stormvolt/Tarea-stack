#ifndef NODE_H
#define NODE_H
 
#include <iostream>
 
template<class T> class Stack;
 
template <class T>
 
class Node
{
	public:
		T data;	        
		Node<T> *next;
	 

	        Node(T data_, Node<T> *next_ = NULL)
		{
			data = data_;
			next = next_;		
		}


};
 
#endif
