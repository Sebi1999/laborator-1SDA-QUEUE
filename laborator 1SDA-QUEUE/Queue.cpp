#include "Queue.h"
#include<iostream>

using namespace std;

Queue::Queue()
{

	capacity = 10;
	length = 0;
	front_index = 0;
	rear_index = -1;
	elements = new TElem[capacity];
}

void Queue::push(TElem e)
{
	if (length == capacity) {
		this->resize_and_rearrange(2);
	}
	rear_index = (rear_index + 1) % capacity;
	elements[rear_index] = e;
	++length;
}

TElem Queue::top() const
{
	if (this->isEmpty())
		throw std::exception();

	return elements[front_index];
}

TElem Queue::pop()
{
	if (this->isEmpty())
		throw std::exception();
	int current_front_index = front_index;

	--length;
	front_index = (front_index + 1) % capacity;
	return elements[current_front_index];
}

bool Queue::isEmpty() const
{
	return (length == 0) ? true : false;
}

void Queue::resize_and_rearrange(int double_factor)
{
	capacity = capacity * double_factor;
	TElem* new_elements = new TElem[capacity];
	TElem current_element;
	int i = 0, actual_lenght = length;
	while (!this->isEmpty())
	{
		current_element = this->pop();
		new_elements[i] = current_element;
		++i;
	}
	delete[] elements;

	elements = new_elements;
	length = actual_lenght;
	front_index = 0;
	rear_index = length - 1;
}

Queue::~Queue()
{
	delete[] elements;
}