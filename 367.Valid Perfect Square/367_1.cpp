class Solution {
public:
    bool isPerfectSquare(int num) {
        // write your code here
     int i = 1;
     while (num > 0) {
         num -= i;
         i += 2;
     }
     return num == 0;
    }
};// a perfect square = 1+3+5+7+...
