// Check if is palindrome - te 25%
class Solution {
public:
    string convert(const string& s){
	string n;
	for(auto i:s){
	    if((i>='0' and i<='9') or (i>='a' and i<='z') or (i>='A' and i<='Z'))
		n.push_back(tolower(i));
	}
	return n;
    }

    bool isPalindrome(string s) {
	string n="";
	for(int i=s.size()-1;i>=0;i--)
	    n.push_back(s[i]);
	n=convert(n);
	s=convert(s);
	if(n==s)
	    return true;
	return false;
    }
};
