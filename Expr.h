

/* 
 * File:   Expr.h
 * Author: cheng
 *
 * Created on February 6, 2020, 8:18 AM
 */

#ifndef EXPR_H
#define EXPR_H

class Expr {
public:
    Expr();
    Expr(const Expr& orig);
    virtual ~Expr();
    virtual int eval() = 0;
private:

};

#endif /* EXPR_H */

