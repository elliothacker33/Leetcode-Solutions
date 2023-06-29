// 14 - Longest Common String - te- 7%
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
	string low=strs[0];
	for(string i:strs){
	    if(i.size()<low)
		low=i;
	}
	string result="";
	for(int i=0;i<low.size();i++){
	    for(string j:strs){
		if(j[i]!=low[i]){
		    return result;
		}
	    }
	    result.push_back(low[i]);
	}
    }
};
