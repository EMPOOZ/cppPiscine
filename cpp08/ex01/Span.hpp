#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

class Span
{
private:
	
public:
	Span(unsigned int n);
	~Span();
	void addNumber(int i);
	int shortestSpan();
	int longestSpan();

private:
	unsigned int _n;
	int *_ar;
	unsigned int _y;
};


#endif