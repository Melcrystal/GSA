#ifndef PROBLEM_H
#define PROBLEM_H

#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>

using namespace std;

#include "Direction.h"

class Problem
{
public:
	Problem();
	~Problem();

	friend ostream& operator<< (ostream& os, const Problem& pbm);
	friend istream& operator>> (istream& is, Problem& pbm);

	Problem& operator=  (const Problem& pbm);
	bool operator== (const Problem& pbm) const;
	bool operator!= (const Problem& pbm) const;

	Direction direction() const; //Maximize or Minimize
	int dimension() const;
	double LowerLimit, UpperLimit;

private:
    int id;
	int _dimension;
};

#endif
