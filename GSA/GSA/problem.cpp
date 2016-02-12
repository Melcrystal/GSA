#include "Problem.h"

Problem::Problem()
{}

Problem::~Problem()
{}

ostream& operator<< (ostream& os, const Problem& pb)
{
 return
 	 os << "lower limit : " << pb.LowerLimit << endl
        << "upper limit : " << pb.UpperLimit << endl
        << "dimension : " << pb._dimension << endl
        << "ID :";
}

istream& operator>> (istream& is, Problem& pb)
{
 return
 	 is >> pb.LowerLimit
        >> pb.UpperLimit
        >> pb._dimension;
}

Problem& Problem::operator=  (const Problem& pbm)
{

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
