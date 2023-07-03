//Different types of candies
class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
	int nCandies=candyType.size()/2; //Can eat this candies.
	set<int> s(candyType.begin(),candyType.end());
	int difCandies=s.size();
	if(difCandies>=nCandies)
	    return nCandies;
	else return difCandies;
    }
};
