class Solution {
public:
bool canIWin(int maxChoosableInteger, int desiredTotal) {
        if (maxChoosableInteger >= desiredTotal) return true;
        int sum = ((maxChoosableInteger + 1) * maxChoosableInteger) >> 1;
        if (sum < desiredTotal) return false;
        mp = vector<int>(1 << maxChoosableInteger, -1);
        return canWin(0, maxChoosableInteger, desiredTotal);
    }
private:
    vector<int> mp;
    bool canWin(int used, const int &maxChoosableInteger, int desiredTotal) {
        if (mp[used] != -1) return mp[used];
        for (int i = maxChoosableInteger, bits = 1 << (maxChoosableInteger - 1); i >= 1; --i, bits >>= 1) {
            if ((used & bits) != 0) continue;
            if (i >= desiredTotal || !canWin(used | bits, maxChoosableInteger, desiredTotal - i)) {
                mp[used] = 1;
                return true;
            }
        }
        mp[used] = 0;
        return false;
        }
};//it is a dp question but what hell it is,I can't catch what he do.

