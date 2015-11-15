#include "stack.h"

// Destructor
template<class T>
Stack<T>::~Stack()
{
	while(last) pop();
}


//Ingresar un elemento
template<class T>
void Stack<T>::push(T data_) 
{
	Node<T> *new_node = new Node<T> (data_, last);
	last = new_node;	
}

//Borrar el último elemento añadido
template<class T>
T Stack<T>::pop()
{
	Node<T> *temp;	
	T dat;      // variable auxiliar para retorno 
	if(!last)
	{
		return 0; // Si no hay nodos en la pila retornamos 0 
	}	
	// Nodo apunta al primer elemento de la pila 
	temp = last;
	// Asignamos a pila toda la pila menos el primer elemento 
	last = temp->next;
	// Guardamos el valor de retorno 
	dat = temp->data; 
	// Borrar el nodo 
	delete temp;
	return dat;
}
