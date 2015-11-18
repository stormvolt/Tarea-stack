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


//Retornar el último añadido
template<class T>
T Stack<T>::top()
{
	Node<T> *temp;	
	T dat;      // variable auxiliar para retorno 
	if(!last)
	{
		return 0; // Si no hay nodos en la pila retornamos 0 
	}	
	// Nodo apunta al primer elemento de la pila 
	temp = last;
	// Guardamos el valor de retorno 
	dat = temp->data; 
	return dat;
}



// Concatenar a otro Stack
template<typename T>
void Stack<T>::concat(Stack stack)
{
	Node<T> *temp2 = stack.last;
	while (temp2)
	{
		push(temp2->data);
		temp2 = temp2->next;
	}
}

// Buscar el dato de un nodo
template<typename T>
int Stack<T>::search(T data_)
{
	Node<T> *temp = last;
	int cont = 1;
	int cont2 = 0;
	while (temp)
	{
		if (temp->data == data_)
		{
			return cont;			
			cont2++;
		}
		temp = temp->next;
		cont++;
	}
	if (cont2 == 0)
	{
		return 0;
	}
	
}


// Elimina una intersección por posición del nodo
template<typename T>
void Stack<T>::delInterPos(int pos, Stack<T>stack2)
{
	Node<T> *temp = last;
	Node<T> *temp1 = temp->next;
	if (pos == 1)
	{
		last = temp->next;
	}
	else
	{
		for (int i = 2; i <= pos; i++)
		{
			if (i == pos)
			{
				Node<T> *aux_node = temp1;
				temp->next = temp1->next;
				if(stack2.search(aux_node->data)!=0)
				{
					delete aux_node;
				}
			}
			temp = temp->next;
			temp1 = temp1->next;
		}
	}
}

// Elimir números que coinciden en 2 Stacks
template<typename T>
void Stack<T>::nointersection(Stack<T> Stack_2)
{
	int k=1;
	Node<T> *temp = last;
	while(temp)
	{
		delInterPos(k, Stack_2);
		k++;
	}
			
}



// Sobrecarga del operador +
template<class T>
Stack<T> operator+ (Stack<T> a, Stack<T> b)
{
	Stack<T> c;
 	c.concat(a);
	c.concat(b);
	return c;
}


// Sobrecarga del operador -
template<typename T>
Stack<T> operator- ( Stack<T> a,  Stack<T> b)
{
	Stack<T> c;
	c.concat(a);
 	c.nointersection(b);
	return c;
}
