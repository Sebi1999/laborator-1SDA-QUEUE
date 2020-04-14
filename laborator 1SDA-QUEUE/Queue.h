#pragma once
typedef int TElem;

class Queue
{
private:

	/*representation of Queue*/
	TElem* elements;
	int rear_index;
	int front_index;
	int length;
	int capacity;

public:
	
	// Best case: O(1) (theta)
	// Worst case: O(1) (theta)
	// Average case: O(1) (theta)
	Queue();

	//pushes an element to the end of the queue
	// Best case: O(1) (theta)
	// Worst case: O(n)  (theta)
	// Average case: O(n).
	// n = lenght
	void push(TElem e);

	//returns the element from the front of the queue
	//throws exception if the queue is empty
	// Best case: O(1) (theta)
	// Worst case: O(1) (theta)
	// Average case: O(1) (theta)
	TElem top() const;

	//removes and returns the element from the front of the queue
	//throws exception if the queue is empty
	// Best case: O(1) (theta)
	// Worst case: O(1) (theta)
	// Average case: O(1) (theta)
	TElem pop();

	//checks if the queue is empty
	// Best case: O(1) (theta)
	// Worst case: O(1) (theta)
	// Average case: O(1) (theta)
	bool isEmpty() const;

	// Best case: O(n) (theta)
	// Worst case: O(n) (theta)
	// Average case: O(n) (theta)
	// n = lenght
	void resize_and_rearrange(int doube_factor);

	// destructor
	// Best case: O(1) (theta)
	// Worst case: O(1) (theta)
	// Average case: O(1) (theta)
	~Queue();

};