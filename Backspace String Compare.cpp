//Program to Backspace String Compare
//Created by Aryan
//Created on 26/09/2021

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack <char> st;
        for(int i =0;i<s.size();i++)
        {
            if(s[i]!='#')
                st.push(s[i]);
            if(s[i] == '#')
            {
                if(!st.empty())
                    st.pop();
            }
        }
         s.clear();
        while(!st.empty())
        {
            s.push_back(st.top());
            st.pop();
        }
        for(int i =0;i<t.size();i++)
        {
            if(t[i]!='#')
                st.push(t[i]);
            if(t[i] == '#')
            {
                if(!st.empty())
                    st.pop();
            }
        }
        t.clear();
        while(!st.empty())
        {
            t.push_back(st.top());
            st.pop();
        }
        cout<<s<<endl;
        cout<<t<<endl;
        if(s.compare(t)==0)
            return true;
        else
            return false;
    }
};