#include <iostream>
 
#include "stack.h"
#include "stack.cpp"
 
using namespace std;



int main()
{
	Stack<int> iStack;
	cout << "Añadimos a la pila el valor 20." << "\n" ;
	iStack.push(20);
	cout<< "Función top: " << iStack.top() << "\n";
	cout << "Añadimos a la pila el valor 10." << "\n";
	iStack.push(10);
	cout << "Función pop: ";
	cout << iStack.pop() ;
	cout <<  "\n";
	cout << "Añadimos a la pila el valor 40."<< "\n";
	iStack.push(40);
	cout<< "Función top: " << iStack.top() << "\n";
	cout << "Añadimos a la pila el valor 30."<< "\n";
	iStack.push(30);
	
	cout << "Función pop: ";
	cout << iStack.pop() ;
	cout <<  "\n";
	cout << "Función pop: ";
	cout << iStack.pop() ;
	cout <<  "\n";
	cout << "Añadimos a la pila el valor 90."<< "\n";
	iStack.push(90);
	cout<< "Función top: " << iStack.top() << "\n";
	cout << "Función pop: ";
	cout << iStack.pop() ;
	cout <<  "\n";
	cout << "Función pop: ";
	cout << iStack.pop() ;
	cout <<  "\n";


	Stack<int> iStackB;
	iStackB.push(2);
	iStackB.push(4);
	iStackB.push(6);
	iStackB.push(8);

	cout << "Stack C = Stack A + Stack B: " << "\n";
	Stack<int> iStackC = iStack + iStackB;
	cout << "Top del Stack C: "<< iStackC.top()<< "\n";
	cout << "Stack C - Stack B : " << "\n";
	Stack<int>iStackD = iStackC - iStackB;
	cout << "Top del Stack C: "<< iStackD.top()<< "\n";
	return 1;
}
