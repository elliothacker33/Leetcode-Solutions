class Solution {
public:
    int maxProfit(vector<int>& prices) {
	int minstock=prices[0];
	int maxstock=prices[0];
	int result=0;
	for(auto i: prices){
	    int profit=maxstock-minstock;
	    if(profit>0 && profit>result){
		result=profit;
	    }
	    if(i<minstock){
		minstock=i;
		maxstock=0;
	    }
	    else if(i>maxstock)
		maxstock=i;
    }
    if(maxstock-minstock>result && maxstock-minstock>0)
	    result=maxstock-minstock;
    return result;
}
};
