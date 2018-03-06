//
//  DPSolution.cpp
//  leetcode-32
//
//  Created by Chen on 2018/3/6.
//  Copyright © 2018年 Chen. All rights reserved.
//

#include "DPSolution.hpp"

class DPSolution{
public:
    DPSolution(){}
    int longestValidParentheses(string s){
        long len = s.size();
        if(len<2)
            return 0;
        int *result = new int[len*len+1]{0};
        //还有情况待考虑：
        for(int i=0;i<len-1;i++)
        {
            if(s[i]=='(' && s[i+1]==')')
            {
                result[i*len+i+1] = 1;
                int low=i-1,high=i+2;
                while(low>=0 && high<len && s[low]=='(' && s[high]==')')
                {
                    result[low*len+high] = 1;
                    low--;
                    high++;
                }
            }
        }
        //to be advanced:
        int *label = new int[len]{0};
        for(int i=0; i<len-1; i++)
        {
            for(int j=i+1; j<len; j++)
            {
                if(result[i*len+j]==1)
                {
                    for(int k=i; k<=j; k++)
                        label[k]=1;
                }
            }
        }
        int count=0,maxvalue=0;
        for(int i=0; i<len; i++)
        {
            if(label[i]==1) count++;
            else count=0;
            if(count>maxvalue) maxvalue=count;
        }
        return maxvalue;
    }
    
};
