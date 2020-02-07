
/* 
 * File:   Value.h
 * Author: cheng
 *
 * Created on February 6, 2020, 8:26 AM
 */

#ifndef VALUE_H
#define VALUE_H
#include "Expr.h"

class Value : public Expr{
public:
    Value();
    Value(int v);
    Value(const Value& orig);
    virtual ~Value();
    int eval();
private:
    int value;
};

#endif /* VALUE_H */

