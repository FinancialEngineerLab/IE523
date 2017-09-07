//
//  main.cpp
//  Sudoku
//
//  Created by Yu Gao on 9/5/17.
//  Copyright © 2017 Yu Gao. All rights reserved.
//
// Soduku Solver using Brute-Force Search implemted using
// recursion.
// Written for IE523: Financial Computation by Prof. Sreenivas
// and GE523: Discrete Event Systems
//
#include <iostream>
#include "sudoku.h"

using namespace std;

int main (int argc, char * const argv[])
{
    Sudoku x;
    x.read_puzzle(argc, argv);
    cout << "Input file name : " << argv[1] << endl;
    x.print_puzzle();
    x.Solve(0,0);
    //x.alternate_Solve(0, 0);
    x.print_puzzle();
    
    return 0;
}
