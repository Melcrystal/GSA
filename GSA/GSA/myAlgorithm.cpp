#include "stdafx.h"
#include "myAlgorithm.h"

MyAlgorithm::MyAlgorithm(const Problem& pbm, const SetUpParams& setup)
{

}

MyAlgorithm::~MyAlgorithm()
{

}

ostream& operator<< (ostream& os, const MyAlgorithm& myAlgo)
{

}

istream& operator>> (istream& is, MyAlgorithm& myAlgo)
{

}

MyAlgorithm& MyAlgorithm::operator= (const MyAlgorithm& myAlgo)
{

}

const SetUpParams& MyAlgorithm::setup() const
{

}

void MyAlgorithm::initialize()
{

}

void MyAlgorithm::evaluate()
{

}

const vector<Solution*>& MyAlgorithm::solutions() const
{

}

unsigned int MyAlgorithm::upper_cost() const
{

}

unsigned int MyAlgorithm::lower_cost() const
{

}

Solution& MyAlgorithm::solution(const unsigned int index) const
{

}

vector<struct particle>&  MyAlgorithm::fitness_values()
{

}

double MyAlgorithm::fitness(const unsigned int index) const
{

}

double MyAlgorithm::best_cost() const
{

}

double MyAlgorithm::worst_cost() const
{

}

Solution& MyAlgorithm::best_solution() const
{

}

Solution& MyAlgorithm::worst_solution() const
{

}

void MyAlgorithm::evolution(int iter)
{

}
