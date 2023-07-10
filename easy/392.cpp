class Solution {
public:
    bool isSubsequence(string s, string t) {
	string x;
	int it=0;
	if(t=="" && s=="")
		return true;
	for(char i: t){
	    if(it<s.size() && i==s[it]){
		x.push_back(i);
		it++;
	    }
	    if(x==s) return true;
	}
	return false;
    }
};
