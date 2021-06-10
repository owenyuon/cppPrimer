// stack.h -- class definition for the stack ADT
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
private:
	enum {MAX = 10};  // constant specific to class
	Item items[MAX];  // holds stack items
	int top;
public:
	Stack();
	bool isempty() const;
	bool isfull() const;
	// push() returns false if stack is already full, true otherwise
	bool push(const Item & item);
	// pop() returns false if staic is already empty, true otherwise
	bool pop(Item & item);
};

#endif
