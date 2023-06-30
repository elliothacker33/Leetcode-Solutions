class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
	int blanks=0;
	for(auto i=nums.begin();i!=nums.end();){
	    if((*i)!=val){
		count++;
		i++;
	    }
	    else{
		i=nums.erase(i);
		blanks++;
	    }
	}
	for(int i=0;i<blanks;i++)
	    nums.push_back(0);
	return count;
    }
};
