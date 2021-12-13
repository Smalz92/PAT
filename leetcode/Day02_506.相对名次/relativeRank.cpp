#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<vector>
#include<algorithm>
#include"cstring"
#include <unordered_map>
using namespace std;

class Solution {
public:
	vector<string> findRelativeRanks(vector<int>& score) {
		vector<int> copy = score;
		const int len = score.size();
		if (len == 1) return { "Gold Medal" };
		sort(score.begin(), score.end(), greater<int>());  /* 从大到小排序, 排序后长度不变, 故len还能用 */
		// 将原位置上的每个数的rank放进dict
		unordered_map<int, string> rankDict;  // map: score -> rank (string)
		rankDict[score[0]] = "Gold Medal";
		rankDict[score[1]] = "Silver Medal";
		if (len > 2) rankDict[score[2]] = "Bronze Medal";
		for (int i = 3; i < len; i++) rankDict[score[i]] = to_string(i + 1);
		vector<string> res;
		for (int i = 0; i < len; i++)
			res.push_back(rankDict[copy[i]]);
		return res;
	}
};

int main()
{
	printf("hello world\n");
	Solution *test1 = new Solution();
	vector<string> results;
	vector<int> score = { 10, 3, 8, 9, 4 };
	results = test1->findRelativeRanks(score);
	for (auto temp : results) {
		cout << temp << endl;
	}
	return 0;
}