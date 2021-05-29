#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string lol = to_string(x);
        string lol2 = to_string(x);
        reverse(lol2.begin(),lol2.end());
        
        return lol == lol2;
    }
};