//Remove Duplicates in Sorted Array te-70%
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
	vector<int> temp;
	int blanks=0;
	int k;
	for (int i=0;i<nums.size();i++){
	    if(find(temp.begin(),temp.end(),nums[i]) != temp.end())
		blanks++;
	    else temp.push_back(nums[i]);
	}
	k=temp.size();
	temp.insert(temp.end(),blanks,0);
	nums=temp;
	return k;
    }
};
