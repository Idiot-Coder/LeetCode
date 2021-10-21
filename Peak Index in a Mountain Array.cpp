//Program to Peak Index in a Mountain Array
//Created by Aryan
//Created on 21/10/2021

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0;
        int up = arr.size()-1;
        int cur = arr.size()/2;
       
        while(true){
      
            if(arr[cur-1] < arr[cur] && arr[cur] < arr[cur+1]){ 
                low = cur;
                cur = (cur+up)/2;
            }else if(arr[cur-1] > arr[cur] && arr[cur] > arr[cur+1]){ 
                up = cur;
                cur = (cur+low)/2;
            }else{
                return cur;
            }
        }
    }
};