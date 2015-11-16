#include <iostream>
 
#include "stack.h"
#include "stack.cpp"
 
using namespace std;



int main()
{
	Stack<int> iStack;
	cout << "Añadimos a la pila el valor 20." << "\n" ;
	iStack.push(20);
	cout << "Añadimos a la pila el valor 10." << "\n";
	iStack.push(10);
	cout << "Funcion pop: ";
	cout << iStack.pop() ;
	cout <<  "\n";
	cout << "Añadimos a la pila el valor 40."<< "\n";
	iStack.push(40);
	cout << "Añadimos a la pila el valor 30."<< "\n";
	iStack.push(30);

	cout << "Funcion pop: ";
	cout << iStack.pop() ;
	cout <<  "\n";
	cout << "Funcion pop: ";
	cout << iStack.pop() ;
	cout <<  "\n";
	cout << "Añadimos a la pila el valor 90."<< "\n";
	iStack.push(90);
	cout << "Funcion pop: ";
	cout << iStack.pop() ;
	cout <<  "\n";
	cout << "Funcion pop: ";
	cout << iStack.pop() ;
	cout <<  "\n";

	return 1;
}
