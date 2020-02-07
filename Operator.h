
/* 
 * File:   Operator.h
 * Author: cheng
 *
 * Created on February 6, 2020, 8:20 AM
 */

#ifndef OPERATOR_H
#define OPERATOR_H
#include "Expr.h"

class Operator : public Expr{
public:
    Operator();
    Operator(const Operator& orig);
    virtual ~Operator();
    virtual int eval() = 0;
protected:
    Expr *left;
    Expr *right;
};

#endif /* OPERATOR_H */

