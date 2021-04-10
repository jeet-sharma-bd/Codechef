#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    vector<int>vec;
    while(t--){
        int a;
        cin>>a;
            vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    
    for(auto i=vec.begin();i<vec.end();i++){
        cout<<*i<<endl;
    }
    
	return 0;
}

