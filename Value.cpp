/*
 * To change this license header, choose License Headers in Project Properties.

/* 
 * File:   Value.cpp
 * Author: cheng
 * 
 * Created on February 6, 2020, 8:26 AM
 */

#include "Value.h"

Value::Value() {
}

Value::Value(int v){
    this->value = v;
}

Value::Value(const Value& orig) {
}

Value::~Value() {
}

int Value::eval(){
    return value;
}