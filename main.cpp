#include <iostream>
 
#include "stack.h"
#include "stack.cpp"
 
using namespace std;



int main()
{
	Stack<int> iStack;
	cout << "Añadimos a la pila el valor 20." ;
	iStack.push(20);
	cout << "Añadimos a la pila el valor 20.";
	iStack.push(10);
	cout << "Funcion pop: ";
	cout << iStack.pop() ;
	cout << "Añadimos a la pila el valor 40.";
	iStack.push(40);
	iStack.push(30);

	cout << "Funcion pop: ";
	cout << iStack.pop() ;
	cout << "Funcion pop: ";
	cout << iStack.pop() ;
	cout << "Añadimos a la pila el valor 90.";
	iStack.push(90);
	cout << "Funcion pop: ";
	cout << iStack.pop() ;
	cout << "Funcion pop: ";
	cout << iStack.pop() ;

	return 1;
}
