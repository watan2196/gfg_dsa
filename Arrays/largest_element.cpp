//@author watan2196
#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
#define ONLINE_JUDGE

const int N=1e5+5;
const int mod=1e9+7;
int i,j,n,cnt,m,t,a,b;
int32_t main()
{
	#ifndef ONLINE_JUDGE
       freopen("qns.txt","r",stdin);
       freopen("ans.txt","w",stdout);
    #endif
       IOS;
     
        cin>>n;
        vector<int>A(n);
        for(auto it:A)
        cin>>it;

        //o(n) solution
        int mx=INT_MIN;
        for(auto &it:A)
        mx=max(mx,it);
        //using STL 
        mx = *max_element(A.begin(),A.end());
        //using o(nlogn) sorting in desc 
        sort(A.rbegin(),A.rend());
        mx=A[0];

        cout<<mx<<endl;
    
    
	return 0;
}
