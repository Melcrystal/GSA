#include "Problem.h"

Problem::Problem()
{}

Problem::~Problem()
{}

string Problem::method()
{
    switch (this.id)
    {
    case 1:
        {
            this.LowerLimit=-5.12;
            this.UpperLimit=5.12;
            return "Rastrigin";
        }
    case 2:
        {
            this.LowerLimit=-5.12;
            this.UpperLimit=5.12;
            return "Roulette";
        }
    case 3:
        {
            this.LowerLimit=-5.12;
            this.UpperLimit=5.12;
            return "Rang";
        }
    case 4:
        {
            this.LowerLimit=-5.12;
            this.UpperLimit=5.12;
            return "Tournoi";
        }
/*    case 5:
        {

        }
    case 6:
        {

        }*/
    }
}

ostream& operator<< (ostream& os, const Problem& pb)
{
 return
 	 os << "lower limit : " << pb.LowerLimit << endl
        << "upper limit : " << pb.UpperLimit << endl
        << "dimension : " << pb._dimension << endl
        << "method : " << pb.method() ;
}

istream& operator>> (istream& is, Problem& pb)
{
    is >> pb._dimension
        >> pb.id;
    pb.method();
    return is;
}

Problem& Problem::operator=  (const Problem& pbm)
{
    this.LowerLimit=pbm.LowerLimit;
    this.UpperLimit=pbm.UpperLimit;
    this._dimension=pbm._dimension;
    this.id=pbm.id;
}

bool Problem::operator== (const Problem& pbm) const
{
    if (this.LowerLimit==pbm.LowerLimit) {
        if (this.UpperLimit==pbm.UpperLimit) {
            if (this._dimension==pbm._dimension) {
                if (this.id==pbm.id) return true;
            }
        }
    }
    return false;
}

bool Problem::operator!= (const Problem& pbm) const
{
    if (this.LowerLimit==pbm.LowerLimit) {
        if (this.UpperLimit==pbm.UpperLimit) {
            if (this._dimension==pbm._dimension) {
                if (this.id==pbm.id) return false;
            }
        }
    }
    return true;
}


int Problem::dimension() const
{
    return this._dimension;
}
