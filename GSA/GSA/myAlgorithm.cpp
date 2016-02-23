#include "stdafx.h"
#include "myAlgorithm.h"
#include <algorithm>

MyAlgorithm::MyAlgorithm(const Problem& pbm, const SetUpParams& setup):
_lower_cost(pbm.LowerLimit), _upper_cost(pbm.UpperLimit), _setup(setup)
{
}

MyAlgorithm::~MyAlgorithm()
{
}

ostream& operator<< (ostream& os, const MyAlgorithm& myAlgo)
{
	os << endl << "Algorithme : ";
	os << myAlgo;
	return os;
}

istream& operator>> (istream& is, MyAlgorithm& myAlgo)
{
	cout << endl << "Algorithme : ";
	is >> myAlgo;
	return is;
}

MyAlgorithm& MyAlgorithm::operator= (const MyAlgorithm& myAlgo)
{
	for (int i = 0; i < _fitness_values.size(); i++)
	{
		_fitness_values[i] = myAlgo._fitness_values[i];
	}
}

const SetUpParams& MyAlgorithm::setup() const
{
	return _setup;
}

void MyAlgorithm::initialize()
{
	/*LowerLimit = dowm, 
		UpperLimit =up
		X = _solution*/
	Problem pbm;
	cout << endl << "Veuillez entrer la valeur de votre limite minimale : ";
	cin >> pbm.LowerLimit;
	cout << endl << "Veuillez entrer la valeur de votre limite maximale : ";
	cin >> pbm.UpperLimit;
	cout << endl << "Veuillez entrer la dimension : ";
	cin >> pbm.dimension;
	/*A finir*/
}

void MyAlgorithm::evaluate()
{

}

const vector<Solution*>& MyAlgorithm::solutions() const
{
	return _solutions;
}

unsigned int MyAlgorithm::upper_cost() const
{
	return _upper_cost;
}

unsigned int MyAlgorithm::lower_cost() const
{
	return _lower_cost;
}

Solution& MyAlgorithm::solution(const unsigned int index) const
{

}

vector<struct particle>&  MyAlgorithm::fitness_values()
{
	return _fitness_values;
}

double MyAlgorithm::fitness(const unsigned int index) const
{

}

double MyAlgorithm::best_cost() const
{

	/*retourne valeur de best_solution*/
}

double MyAlgorithm::worst_cost() const
{

}

Solution& MyAlgorithm::best_solution() const
{
	/*retourne coord de best_solution*/
}

Solution& MyAlgorithm::worst_solution() const
{

}

void MyAlgorithm::evolution(int iter)
{

}

double MyAlgorithm::gConstant()
{
	double alpha = 20;
	double G0 = 100;
	double max_it;
	cout << endl << "Veuillez entrer le nombre d'itérations voulu : ";
	cin >> max_it;
	for (int i = 0; i < max_it; i++)
	{
		double G = G0*exp((-alpha)*i/max_it);
		return G;
	}
}

double MyAlgorithm::acceleration()
{

}
