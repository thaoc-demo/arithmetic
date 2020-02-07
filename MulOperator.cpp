

/* 
 * File:   MulOperator.cpp
 * Author: cheng
 * 
 * Created on February 6, 2020, 8:31 AM
 */

#include "MulOperator.h"

MulOperator::MulOperator() {
}

MulOperator::MulOperator(Expr* left, Expr* right){
    this->left = left;
    this->right = right;
}

MulOperator::MulOperator(const MulOperator& orig) {
}

MulOperator::~MulOperator() {
}

int MulOperator::eval(){
    return left->eval() * right->eval();
}