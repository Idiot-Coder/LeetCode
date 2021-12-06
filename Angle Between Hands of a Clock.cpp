//Program to Angle Between Hands of a Clock
//Created by Aryan
//Created on 06/12/2021

class Solution {
public:
    double angleClock(int hour, int minutes) {
       
        double angleHourHand = (hour * 30) % 360 + minutes * 0.5;
        

        double angleMinuteHand = minutes * 6; 


        double difference = angleHourHand - angleMinuteHand;

        
        if (difference < 0){
            difference *= -1;
        }

        
        if(difference > 180){
            difference = 360 - difference; 
        }
        
        
        return difference;
    }
};