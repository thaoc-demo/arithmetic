

/* 
 * File:   MulOperator.h
 * Author: cheng
 *
 * Created on February 6, 2020, 8:31 AM
 */

#ifndef MULOPERATOR_H
#define MULOPERATOR_H
#include "Operator.h"

class MulOperator : public Operator{
public:
    MulOperator();
    MulOperator(Expr* left, Expr* right);
    MulOperator(const MulOperator& orig);
    virtual ~MulOperator();
    int eval();
private:

};

#endif /* MULOPERATOR_H */

