//
//  main.cpp
//  leetcode-32
//
//  Created by Chen on 2018/3/5.
//  Copyright © 2018年 Chen. All rights reserved.
//

#include <iostream>
//#include "Solution.hpp"
#include "Solution.cpp"
#include "DPSolution.cpp"
using namespace std;

int main(int argc, const char * argv[]) {
    string s;
    cout<<"please input s: ";
    cin >> s;
   // Solution sl;
    DPSolution sl;
    cout << sl.longestValidParentheses(s) << endl ;
    return 0;
}
