//Program to Subarray Sum Equals K
//Created by Aryan
//Created on 10/09/2021

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        
        int  count=0;
        unordered_map<int,int> mymap;
        
        int curr_sum=0;
        
        int n=nums.size();
        int i=0;
        while(i<n){
            curr_sum+=nums[i];
            if(curr_sum==k)count++;
            if(mymap.find(curr_sum-k)!=mymap.end())
                count+=mymap[curr_sum-k];
            mymap[curr_sum]++;
            i++;
        }
        return count;
    }
};