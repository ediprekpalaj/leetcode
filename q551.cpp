#include <iostream>
using namespace std;

class Solution {
public:
    bool checkRecord(string str) {
        int absentcounter = 0;
        
        for(int i = 0; i < str.size();i++){
            if(str[i] == 'A'){
                absentcounter++;
            }
            if(str[i] == 'L' && str[i+1] == 'L' && str[i+2] == 'L'){
                return false;
            }
        }
        if(absentcounter >= 2){
            return false;
        }
        else{
            return true;
        }
    }
};