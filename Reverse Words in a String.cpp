//Program to Reverse Words in a String
//Created by Aryan
//Created on 09/11/2021

class Solution {
public:
   string reverseWords(string s) {
        string ans;
        int n = s.size();
        int i=n-1,j=n-1;
        int x = 0;
        while(s[x]==' ')
            x++;
        while(s[i]==' ')
        {
            i--;
            j--;
        }
        while(i>=x)
        {
            if(s[i]==' ')
            {
                string temp = s.substr(i+1,j-i);
                ans+=temp;
                ans+=' ';
                j=i;
                while(s[i]==' ')
                {
                    i--;
                    j--;
                }
            }
            else
            i--;
        }
        string temp = s.substr(i+1,j-i);
        ans+=temp;
        return ans;
    }
};