#include <iostream>
 
#include "stack.h"
#include "stack.cpp"
 
using namespace std;



int main()
{
	Stack<int> iStack;
	iStack.push(20);
	iStack.push(10);
	cout << iStack.pop() << ",";
	iStack.push(40);
	iStack.push(30);

	cout << iStack.pop() << ",";
	cout << iStack.pop() << ",";
	iStack.push(90);
	cout << iStack.pop() << ",";
	cout << iStack.pop() << endl;

	return 1;
}
