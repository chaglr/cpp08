#pragma once
/*
Containers library
C++ Containers library
C++ provides a set of standard template classes that implement containers to
store collections of objects. The Containers library is a generic collection of
class templates and algorithms that allow programmers to easily implement common
data structures like queues, lists and stacks. There are two classes of
containers:

*sequence containers,
*associative containers,
and each of which is designed to support a different set of operations.

The container manages the storage space that is allocated for its elements and
provides member functions to access them, either directly or through iterators
(objects with properties similar to pointers). Most containers have at least
several member functions in common, and share functionalities. Which container
is the best for the particular application depends not only on the offered
functionality, but also on its efficiency for different workloads.

***********Sequence containers***********
Sequence containers implement data structures which can be accessed
sequentially.

vector : dynamic contiguous array (class template)
--->deque: double-ended queue (class template) <---
list :doubly-linked list (class template)

***********Container adaptors***********
Container adaptors provide a different interface for sequential containers.

stack: adapts a container to provide stack (LIFO data structure) (class
template) queue :adapts a container to provide queue (FIFO data structure)
(class template) priority_queue :adapts a container to provide priority queue
(class template)


**********STD::STACK**********
The stack class is a container adapter that gives the programmer the
functionality of a stack - specifically, a LIFO (last-in, first-out) data
structure. The class template acts as a wrapper to the underlying container -
only a specific set of functions is provided. The stack pushes the elements on
the top of the stack and pops them from the top of the stack.

template< class T, class Container = std::deque<T> > class stack;

stack functions:
        Element access
                empty() - Returns whether the stack is empty
                size() - Returns the size of the stack
        Element access
                top() - Returns a reference to the topmost element of the stack
        Modifiers
                push(g) - Adds the element 'g' at the top of the stack
                pop() - Deletes the topmost element of the stack

T	-	The type of the stored elements. The program is ill-formed if T
is not the same type as Container::value_type.
Container	-	The type of the underlying container to use to store the elements. The container must
satisfy the requirements of SequenceContainer. Additionally, it must provide the
following functions with the usual semantics: back(), e.g., std::vector::back(),
push_back(), e.g., std::deque::push_back(),
pop_back(), e.g., std::list::pop_back().
The standard containers std::vector (including std::vector<bool>), std::deque
and std::list satisfy these requirements. By default, if no container class is
specified for a particular stack class instantiation, the standard container
std::deque is used.

*/

#include <stack>

//template <data type, container type>
// if you don't specify the container type, it will use std::deque as default
//thats why bec stack is a container adapter that defines the underlying container type as std::deque
template <typename T, typename Container = std::deque<T>>