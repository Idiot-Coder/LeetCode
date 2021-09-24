//Program to Power of Two
//Created by Aryan
//Created on 24/09/2021

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n>0){
    	if((n&(n-1))==0){
           return true;
	       }
	    else
                            return false;
                       }
                     else
     	return false;
                }
};