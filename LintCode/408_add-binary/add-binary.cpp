/*
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/add-binary
@Language: C++
@Datetime: 16-09-22 11:35
*/

class Solution {
public:
    /**
     * @param a a number
     * @param b a number
     * @return the result
     */
    string addBinary(string& a, string& b) {
        // Write your code here
    int temp=0,i=0;
	int m = a.size(), n = b.size();
	int p;
	p = (m > n ? m : n) + 1;
	string c(p, '0'); string d(p, '0');
	while ((m > 0) && (n > 0)) {
		c[i++] = (temp ^ (a[m - 1] - '0') ^ (b[n - 1] - '0'))+'0';
		if (temp + (a[m - 1] - '0') + (b[n - 1] - '0') > 1) {
			temp = 1;
		}
		else {
			temp = 0;
		}
		m--; n--;
	}
	while (m > 0) {
		c[i++] = (temp ^ (a[m - 1] - '0')) + '0';
		if (temp + (a[m - 1] - '0') > 1) {
			temp = 1;
		}
		else temp = 0;
		m--;
	}
	while (n > 0) {
		c[i++] = (temp ^ (b[n - 1] - '0'))+'0';
		if (temp + (b[n - 1] - '0') > 1) {
			temp = 1;
		}
		else temp = 0;
		n--;
	}
	//cout << temp << endl;
	//cout << i << endl;
	if (temp == 1) {
		c[i] = '1';
	}
	//cout << "p=" << p << endl;

	for (i = 0; i < p; i++) {
			d[i] = c[p - 1 - i];
	}
	if (d[0] == '0') {
		string e(p-1, '0');
		for (int j = 0; j < p-1; j++) {
			e[j] = d[j + 1];
		}
		return e;
	}
	else return d;
    }
};