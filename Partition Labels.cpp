//Program to Partition Labels
//Created by Aryan
//Created on 11/10/2021

class Solution {
public:
    vector<int> partitionLabels(string s) {
        int i = 0, n = s.size();
        vector<int> ans;
        map<char, int> m;
        for(int i = 0; i < n; i++){
            m[s[i]] = i;
        }
        while(i < n){
            int maxi = m[s[i]], j = i;
            while(j <= maxi){
                maxi = max(maxi, m[s[j]]);
                j++;
            }  
            ans.push_back(j - i);
            i = j;
        }     
        return ans;
    }
};