#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp (int a, int b) {
    return a > b;
}

int main() {
	// your code goes here
	int m,n,i,j,a,b;
	cin>>n>>m;
	vector<int> v[n + 2];
    
	for(i = 0; i < m; i++){
	    cin>>a>>b;
	    v[a].push_back (b);
	    v[b].push_back (a);
	}
	
	for (int i = 0; i < n; ++i) {
	    sort (v[i].begin(), v[i].end(), greater <int> ());
	}
	
	for(i  = 1; i<=n; i++){
	    cout<<i<<":";
	    for(j = 0; j < v[i].size();j++){
	        cout<<v[i][j]<<" ";
	    }
	    cout<<endl;
	}
    return 0;
}
