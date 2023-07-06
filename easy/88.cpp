// Merge Sort
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
	int i=0;
	int j=0;
	int k=0;
	vector<int> temp=nums1;
	while(k<(m+n)){
	    if(i<m && j<n){
		if(nums1[i]<nums2[j]){
		    temp[k]=nums1[i];
		    i++;
		}
		else {
		    temp[k]=nums2[j];
		    j++;
		}
		k++;
	    }
	    else if(i<m){
		temp[k]=nums1[i];
		i++;
		k++;
	    }
	    else if(j<n){
		temp[k]=nums2[j];
		j++;
		k++;
	    }
	
	}
	nums1=temp;
    }
};
