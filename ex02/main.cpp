#include "MutantStack.hpp"
#include <iostream>
#include <list>
#include <string>

template <typename T> void printStack(T &stack) {
	while (!stack.empty()) {
	std::cout << stack.top() << " ";
	stack.pop();
	}
	std::cout << std::endl;
}

int main() {
	// Test 1: Basic operations and empty stack
	std::cout << "Test 1: Basic operations and empty stack" << std::endl;

	MutantStack<int> mstack;

	std::cout << "Is empty: " << mstack.empty() << std::endl;
	std::cout << "Size: " << mstack.size() << std::endl;

	// Test 2: Single element
	std::cout << "\nTest 2: Single element" << std::endl;

	mstack.push(42);

	std::cout << "Top: " << mstack.top() << std::endl;
	std::cout << "Size: " << mstack.size() << std::endl;

	MutantStack<int>::iterator it = mstack.begin();

	std::cout << "Begin: " << *it << std::endl;
	++it;
	std::cout << "Begin == end: " << (it == mstack.end()) << std::endl;

	// Test 3: Multiple elements and iterator operations
	std::cout << "\nTest 3: Multiple elements and iterator operations" << std::endl;
	mstack.push(13);
	mstack.push(75);
	mstack.push(20);
	mstack.push(98);
	//size check
	std::cout << "Size: " << mstack.size() << std::endl;
	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
	{
	std::cout << *it << " ";
	}std::cout << std::endl;

	// Test 4: Copy constructor
	std::cout << "\nTest 4: Copy constructor" << std::endl;
	MutantStack<int> mstack_copy(mstack);
	std::cout << "Original: ";
	printStack(mstack);
	std::cout << "Copy: ";
	printStack(mstack_copy);

	// Test 5: Different data types
	std::cout << "\nTest 5: Different data types" << std::endl;
	MutantStack<std::string> sstack;
	sstack.push("Hello");
	sstack.push("World");
	sstack.push("!");
	for (MutantStack<std::string>::iterator it = sstack.begin();
		 it != sstack.end(); ++it) {
	std::cout << *it << " ";
	}
	std::cout << std::endl;

	// Test 6: Comparison with std::list
	std::cout << "\nTest 6: Comparison with std::list" << std::endl;
	std::list<int> list;
	list.push_back(5);
	list.push_back(17);
	list.push_back(3);
	list.push_back(5);
	list.push_back(737);
	list.push_back(0);

	MutantStack<int> mstack2;
	mstack2.push(5);
	mstack2.push(17);
	mstack2.push(3);
	mstack2.push(5);
	mstack2.push(737);
	mstack2.push(0);

	std::cout << "List: ";
	for (std::list<int>::iterator it = list.begin(); it != list.end(); ++it) {
	std::cout << *it << " ";
	}
	std::cout << std::endl;

	std::cout << "MutantStack: ";
	for (MutantStack<int>::iterator it = mstack2.begin(); it != mstack2.end();
		 ++it) {
	std::cout << *it << " ";
	}
	std::cout << std::endl;

	return 0;
}