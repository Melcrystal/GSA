
#include "stdafx.h"
#include "setUpParams.h"

SetUpParams::SetUpParams() :
_independent_runs(30), _nb_evolution_steps(0), _population_size(40), _solution_size(20)
{
}

SetUpParams::~SetUpParams()
{
}

const unsigned int SetUpParams::independent_runs() const
{
 return _independent_runs;
}

const unsigned int SetUpParams::nb_evolution_steps() const
{
 return _nb_evolution_steps;
}

const unsigned int SetUpParams::population_size() const
{
 return _population_size;
}

const unsigned int SetUpParams::solution_size() const
{
 return _solution_size;
}

ostream& operator<< (ostream& os, const SetUpParams& setup)
{
 return
 	 os << "number of independent runs : " << setup._independent_runs << endl
 	  << "number of iterations per run : " << setup._nb_evolution_steps << endl
 	  << "number of solutions in the population : " << setup._population_size << endl
 	  << "size of each particle : " << setup._solution_size << endl;
}

istream& operator>> (istream& is, SetUpParams& setup)
{
 return
 	 is >> setup._independent_runs
 	  >> setup._nb_evolution_steps
    	  >> setup._population_size
 	  >> setup._solution_size;
}

void SetUpParams::independent_runs(const unsigned int val)
{
 _independent_runs = val;
}

void SetUpParams::nb_evolution_steps(const unsigned int val)
{
 _nb_evolution_steps = val;
}

void SetUpParams::population_size(const unsigned int val)
{
 _population_size = val;
}

void SetUpParams::solution_size(const unsigned int val)
{
 _solution_size = val;
}
