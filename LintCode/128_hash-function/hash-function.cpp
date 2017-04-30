/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/hash-function
@Language: C++
@Datetime: 16-10-27 12:01
*/

class Solution {
public:
    /**
     * @param key: A String you should hash
     * @param HASH_SIZE: An integer
     * @return an integer
     */
  int hashCode(string key, int HASH_SIZE) {
	// write your code here
	long long temp = 0;
	for (int i = 0; i != key.size()-1; i++) {
		temp = (temp + key[i])*33 % HASH_SIZE;
		//cout << key[i] <<"   "<< temp << endl;
	}
	temp = (temp + key[key.size() - 1])% HASH_SIZE;
	return temp;
}

};