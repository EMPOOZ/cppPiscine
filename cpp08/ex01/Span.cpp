#include "Span.hpp"

Span::Span(unsigned int n ) : _n(n), _y(0){
	this->_ar = new int[n];
	for (unsigned int i = 0; i < n; i++)
		this->_ar[i] = 0;
	return;
}

Span::~Span(){
	// delete this->_ar;
	return;
}

void Span::addNumber(int i){
	if (this->_y >= this->_n)
		throw(std::out_of_range("out of range"));
	this->_ar[this->_y] = i;
	this->_y++;
	return;
}

int Span::shortestSpan(){
	if (this->_y < 1)
		throw(std::length_error("Span is too short"));
	int x = INT_MAX;
	for (unsigned int i = 0; i < this->_y; i++){
		for (unsigned int j = i + 1; j < this->_y; j++)
			if (abs(this->_ar[i] - this->_ar[j]) < x)
				x = abs(this->_ar[i] - this->_ar[j]);
	} 
	return x;
}

int Span::longestSpan(){
	if (this->_y < 1)
		throw(std::length_error("Span is too long"));
	int x = 0;
	for (unsigned int i = 0; i < this->_y; i++){
		for (unsigned int j = i + 1; j < this->_y; j++)
			if (abs(this->_ar[i] - this->_ar[j]) > x)
				x = abs(this->_ar[i] - this->_ar[j]);
	} 
	return x;
}