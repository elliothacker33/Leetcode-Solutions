class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
	map<char,int> r;
	map<char,int> m;
	for(auto i:ransomNote){
	    if(r.find(i)!=r.end())
		r[i]+=1;
	    else r.insert({i,1});
	}
	for(auto i:magazine){
	    if(m.find(i)!=m.end())
		m[i]+=1;
	    else m.insert({i,1});
	}
	for(auto i=r.begin();i!=r.end();i++){
	    auto it=m.find(i->first);
	    if(it!=m.end()){
		if(it->second<i->second)
		    return false;
	    }
	    else return false;
	}
	return true;
    }
};
