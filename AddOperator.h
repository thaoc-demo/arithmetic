
/* 
 * File:   AddOperator.h
 * Author: cheng
 *
 * Created on February 6, 2020, 8:28 AM
 */

#ifndef ADDOPERATOR_H
#define ADDOPERATOR_H
#include "Operator.h"

class AddOperator : public Operator {
public:
    AddOperator();
    AddOperator(Expr* left, Expr* right);
    AddOperator(const AddOperator& orig);
    virtual ~AddOperator();
    int eval();
private:

};

#endif /* ADDOPERATOR_H */

