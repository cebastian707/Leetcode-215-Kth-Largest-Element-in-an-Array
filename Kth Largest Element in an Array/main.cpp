/*By::Cebastian Santiago 
* Leetcode 215
*/
#include<iostream>
#include<vector>
#include<algorithm>



int findKthLargest(std::vector<int>& nums, int k) {
	//sort the vector
	std::sort(nums.begin(), nums.end());
	//get the element idx form the back of the vector
	int ans = nums.size()  - k;
	//loop throught and find the number starting at the backend 
	for (int i = nums.size()-1; i >= 0; i--){
		if (i == ans){
			return nums[i];
		}

	}
	return 0;
}

int main(int argc, char* argv[]) {
	std::vector<int> nums = {3,2,1,5,6,4};
	
	std::cout << findKthLargest(nums, 2) << std::endl;

	return 0;
}