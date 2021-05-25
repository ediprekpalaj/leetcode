#include <iostream>
using namespace std;

class Solution {
public:
    int balancedStringSplit(string str) {
        int counter = 0;
        char l = 'L';
        char r = 'R';
        int counterleft = 0;
        int counterright = 0;
        
        for(int i = 0; i < str.length();i++){
            if(str.at(i) == l){
                counterleft++;
            }
            else if(str.at(i) == r){
                counterright++;
            }
            if(counterleft == counterright){
                counter++;
                counterleft = 0;
                counterright = 0;
            }
        }
        return counter;
    }
};