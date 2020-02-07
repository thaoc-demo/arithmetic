

/* 
 * File:   AddOperator.cpp
 * Author: cheng
 * 
 * Created on February 6, 2020, 8:28 AM
 */

#include "AddOperator.h"

AddOperator::AddOperator() {
}

AddOperator::AddOperator(Expr* left, Expr* right){
    this->left = left;
    this->right = right;
}

AddOperator::AddOperator(const AddOperator& orig) {
}

AddOperator::~AddOperator() {
}

int AddOperator::eval(){
    return left->eval() + right->eval();
}

