//Program to Next Permutation
//Created by Aryan
//Created on 12/11/2021

class Solution {
public:
    void nextPermutation(vector<int> &num) {
        int sz = num.size();
        int k=-1;
        int l;
        
        for (int i=0;i<sz-1;i++){
            if (num[i]<num[i+1]){
                k=i;
            }
        }
        if (k==-1){
            sort(num.begin(),num.end());
            return;
        }
        
        
        for (int i=k+1;i<sz;i++){
            if (num[i]>num[k]){
                l=i;
            }
        }
            
        int tmp = num[l];
        num[l]=num[k];
        num[k]=tmp;
        
        reverse(num.begin()+k+1,num.end());
    }
};