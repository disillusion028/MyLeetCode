class Solution {
public:
	vector<string> restoreIpAddresses(string s) {
		vector<string> res;
		string tmp;
		dfs(res, 0, 0, s, tmp);
		return res;
	}

	void dfs(vector<string>& res, int l, int begin, string& s, string tmp) {
		if (l == 4)
		{
			if (begin == s.length())
			{
				tmp.erase(tmp.end() - 1);
				res.push_back(tmp);
			}
			return;
		}
		for (int i = 1; i < 4 && begin + i - 1 < s.length(); i++)
		{
			string tmp_str = s.substr(begin, i);
			if (tmp_str[0] == '0' && i > 1)
			{
				continue;
			}

			int num = 0;
			int t = 0;
			while (t < i)
			{
				num = num * 10 + (tmp_str[t] - '0');
				++t;
			}

			if (num < 256)
			{
				dfs(res, l + 1, begin + i, s, tmp + tmp_str + '.');
			}
		}
	}
};
