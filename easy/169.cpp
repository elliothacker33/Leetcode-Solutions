// Majority Element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
	map<int,int> mp; 
	for(auto i:nums){
	    if(mp.find(i)==mp.end()){
		mp[i]=1;
	    }
	    else mp[i]+=1;
	}
	int val;
	for(auto i=mp.begin();i!=mp.end();i++){
		if((*i).second>(nums.size()/2))
		    return (*i).first;
	}
	return 0;
    }
};
