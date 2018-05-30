// usestack.cpp - for CS 24 lab practice using stacks
// Eren Yu

#include "intstack.h"
#include <iostream>
using namespace std;

int main() {
    // evaluating "6 2 3 / *"

	// start with an empty stack

	Stack numbers;

	// first three tokens all numbers to push "6 2 3":
	numbers.push(6);
	numbers.push(2);
	numbers.push(3);

	// fourth token is calculation to do "/":
	int right = numbers.top();
	numbers.pop();
	int left = numbers.top();
	numbers.pop();
	numbers.push(left / right);

	// last token is another calculation "*":
	right = numbers.top();
	numbers.pop();
	left = numbers.top();
	numbers.pop();
	numbers.push(left * right);

	// done - print result:
	cout << numbers.top() << endl;
}
