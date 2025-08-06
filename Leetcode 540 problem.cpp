#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
	int SingleNonDuplicate(vector<int>& nums) {
		for(int i=0; i<nums.size()-1; i+=2) {
			if(nums[i]!=nums[i+1]) {
				return nums[i];
			}
		}
		return nums[nums.size() -1];
	}
};
int main() {
	Solution sol;
	vector<int> nums= {1,1,2,2,3,4,4};
	cout<<"Single non-duplicate element:"<< sol.SingleNonDuplicate(nums)<<endl;
	return 0;
}