#include <iostream>
#include <vector>
using std::vector;

class Solution {
	public:
		vector<int> twoSum(vector<int>&nums, int target) {
			vector<int> rv;
			for (decltype(nums.size()) i = 0; i < nums.size(); i++)
			{
				for (decltype(nums.size()) j = 0; j < nums.size(); j++)
				{
					if (i != j && (nums[i]+nums[j]) == target)
					{
						return vector<int>{static_cast<int>(i),static_cast<int>(j)};
					}
				}
			}
			return rv;
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
