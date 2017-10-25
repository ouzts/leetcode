#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <vector>
#include <map>
using std::vector;

class Solution {
	public:
		vector<int> twoSum(vector<int>&nums, int target) 
		{
			std::unordered_map<int,int> m;
			for (unsigned int i = 0; i < nums.size(); i++) m.insert(std::make_pair(nums[i], i));
			for (unsigned int i = 0; i < nums.size(); i++)
			{
				int valToFind = target - nums[i];
				if (m.find(valToFind) != m.end() && m[valToFind] != static_cast<int>(i)) 
				{
					return vector<int>{static_cast<int>(i), m[valToFind]};
				}
			}
			return vector<int>();
		}
};

int main()
{
	Solution s;
	vector<int> v{2,7,11,15};
	int t = 9;
	vector<int> sol = s.twoSum(v, t);
	for (auto &item : sol) std::cout << item << std::endl;
}
