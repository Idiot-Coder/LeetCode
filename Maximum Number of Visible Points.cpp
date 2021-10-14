//Program to Maximum Number of Visible Points
//Created by Aryan
//Created on 14/10/2021

class Solution {
public:
    int visiblePoints(vector<vector<int>>& points, int angle, vector<int>& location) {
        int x, y, overlap = 0;
        double PI = 3.141592653, eps = 1e-8;
        vector<double> ang;// And  +x  Angle between axes 
        for(int i = 0 ; i < points.size() ; i++)
        {
            x = points[i][0]-location[0];
            y = points[i][1]-location[1];
            if(x == 0 && y == 0)// Overlapping with the axis of rotation 
            {
                overlap++;
            }
            else
            {
                ang.push_back(atan2(y, x)*180/PI);
            }
        }
        sort(ang.begin(), ang.end());
        int n = ang.size();
        for(int i = 0; i < n; i++)
            ang.push_back(ang[i]+360);// Add another spin 
        int j = 0, ans = 0;
        for(int i = 0; i < n; i++)// Scan counter clockwise with each point as the boundary 
        {
            while(j < ang.size() && ang[j]-ang[i] <= angle+eps)
            {
                ans = max(ans, j-i+1);
                j++;
            }
        }
        return ans+overlap;
    }
};
