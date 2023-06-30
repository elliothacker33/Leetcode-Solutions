//28 find the needle
//This solution can be only .find()

class Solution {
public:
    int strStr(string haystack, string needle) {
	int sizen=needle.size();
	if(sizen>haystack.size()) return -1;
	for(int i=0;i<haystack.size();i++){
	    int check=i+sizen-1;
	    if(check<haystack.size()){
		if(haystack.substr(i,sizen)==needle)
		    return i;
	    }
	}
	return -1;
    }};
