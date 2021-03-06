//Program to Longest Common Prefix
//Created by Aryan
//Created on 21/09/2021

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int mi=INT_MAX;
        if(strs.size()==0) return " ";
        string c=strs[0];
        for(int i=1;i<strs.size();i++){
            int j=0;int k=0;int a=0;
            while(j<c.size() and k<strs[i].size()){
                if(c[j]==strs[i][k]) a++;
                else break;
                j++;
                k++;
            }
            mi=min(mi,a);
        }
        return c.substr(0,mi);
    }
};