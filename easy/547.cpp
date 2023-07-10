class Solution {
public:
    void dfs(int i,vector<bool>& visited,vector<vector<int>>& isConnected){
	visited[i]=true; 
	for(int j=0;j<isConnected[i].size();j++){
	    if(visited[j]==false && i!=j && isConnected[i][j]==1)
		dfs(j,visited,isConnected);
	}
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
	vector<bool> visited(isConnected.size(),false);
	int count=0;
	for(int i=0;i<isConnected.size();i++){
	    if(!visited[i]){
		dfs(i,visited,isConnected);
		count++;
	}
    }
		return count;
}
};

