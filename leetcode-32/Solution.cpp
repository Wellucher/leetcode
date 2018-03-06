//
//  Solution.cpp
//  leetcode-32
//
//  Created by Chen on 2018/3/5.
//  Copyright © 2018年 Chen. All rights reserved.
//

#include "Solution.hpp"

class Solution {
public:
    Solution(){}
    int longestValidParentheses(string s){
        stack<int> sc;
        long max = s.size()-1;
        if(max<1) return 0;
        sc.push(0);
        for(int i=1; i<=max; i++)
        {
            if(!sc.empty() && s[sc.top()]=='(' && s[i]==')')
                sc.pop();
            else
                sc.push(i);
        }
        int* result = new int[max+1]{0};
        while(!sc.empty())
        {
            result[sc.top()]=1;
            sc.pop();
        }
        int count=0,maxvalue=0;
        for(int i=0; i<=max; i++)
        {
            if(result[i]==0) count++;
            else count=0;
            if(count>maxvalue) maxvalue=count;
        }
        return maxvalue;
    }
};
