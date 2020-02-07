

/* 
 * File:   main.cpp
 * Author: cheng
 *
 * Created on February 6, 2020, 8:15 AM
 */

#include <cstdlib>
#include <iostream>
#include "AddOperator.h"
#include "MulOperator.h"
#include "Value.h"

using namespace std;

int main(int argc, char** argv) {

    // (3*2) + 1 = 7
    //          
    //        +
    //      /   \
    //     *     1
    //   /  \
    //  3    2
    
    Expr* expr1 = new AddOperator(
                        new MulOperator(new Value(3), new Value(2)),
                        new Value(1)
            );

   
    cout << " ( 3 * 2 ) + 1 = " << expr1->eval() << endl;
    
    // (3+2) * 2 = 10
    //          
    //        *
    //      /   \
    //     +     2
    //   /  \
    //  3    2
    Expr* expr2 = new MulOperator(
            new AddOperator( 
                  new Value(3), 
                  new Value(2)),
            new Value(2)
            );
    
    cout << " ( 3 + 2 ) * 2 = " << expr2->eval() << endl;
        
    // 2 * (3+4) = 14
    //       *
    //     /   \
    //    2     +
    //        /   \
    //       3     4
    

    Expr* epxr3 = new MulOperator(
                        new Value(2),
                        new AddOperator(
                            new Value(3),
                            new Value(4)
                        )
                      );
    
    cout << " 2 * ( 3 + 4 ) = " << epxr3->eval() << endl;
    
    /*
     Homework:
     *   Add the following operators
     *       SubOperator  (  3 - 1 )  = 2
     *       DivOperator  (  4 /2 ) = 2
     * 
     *   Challenge:
     *       Add uninary operators
     *       NegOperator  -3 = -3
     *       PosOperator  +( -3) = 3
     *       AbsOperator  |-3| = 3
     *       ModOperator  3%2 = 1
     */
    
    return 0;
}

