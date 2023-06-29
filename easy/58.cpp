//58 Length of last word- te-100%;
class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
	string word;
	while(ss>>word){
		s=word;
	}
	return s.size();
    }
};
