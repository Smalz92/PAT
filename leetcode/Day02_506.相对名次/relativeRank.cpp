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
		//vector<int> copy = score;
		const int len = score.size();
		if (len == 1) return { "Gold Medal" };
		int *arr = new int[len];
		std::copy(score.begin(),score.end(),arr);
		sort(arr,arr + len, greater<int>());
		//sort(score.begin(), score.end(), greater<int>());  /* 从大到小排序, 排序后长度不变, 故len还能用 */
		// 将原位置上的每个数的rank放进dict
		unordered_map<int, string> rankDict;  // map: score -> rank (string)
		rankDict[arr[0]] = "Gold Medal";
		rankDict[arr[1]] = "Silver Medal";
		if (len > 2) rankDict[arr[2]] = "Bronze Medal";
		for (int i = 3; i < len; i++) rankDict[arr[i]] = to_string(i + 1);
		vector<string> res;
		for (int i = 0; i < len; i++)
			res.push_back(rankDict[score[i]]);
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