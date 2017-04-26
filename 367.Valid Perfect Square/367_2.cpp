//using binary search
// or using Integer Newton to deal with sqrt
class Solution {
public:
    bool isPerfectSquare(int num) {
        // write your code here
        int x=num;
    long r = x;
    while (r*r > x)
        r = (r + x/r) / 2;
    return r*r == x;
    }
};//Newton

class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num < 0) return false;
        int root = floorSqrt(num);
        return root * root == num;
    }

    int32_t floorSqrt(int32_t x) {
        double y=x; int64_t i=0x5fe6eb50c7b537a9;
        y = *(double*)&(i = i-(*(int64_t*)&y)/2);
        y = y * (3 - x * y * y) * 0.5;
        y = y * (3 - x * y * y) * 0.5;
        i = x * y + 1; return i - (i * i > x);
    }
};//also Newton

class Solution {
public:
bool isPerfectSquare(int num) {
    long long l = 0, r = num;
    while (l <= r) {
        long long mid = (l + r) >> 1;
        long long sqmid = mid * mid;
        if (sqmid > num) r = mid - 1;
        else if (sqmid < num) l = mid + 1;
        else return true;
    }
    return false;
}
};//binary search
