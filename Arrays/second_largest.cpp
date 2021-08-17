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

        //o(nlogn)
        sort(A.begin(),A.end());
        cout<<A[A.size()-2]<<endl;
        //o(n) solution if no duplicates
        int mx = *max_element(A.begin(),A.end());
        int second_max = INT_MIN;
        for(auto it:A)
        {
            if(it != mx)
            second_max=max(second_max,it)
        }
        //if there are duplicates [ 1,2,2,3,,4,4,4]
        int pos = -1;
        int first_mx=INT_MIN;
        for(int i=0;i<A.size();i++)
        {
              if(A[i]>first_mx)
              {
                  first_mx=A[i];
                  pos=i;
              }  
        }
        int second_max=INT_MIN
        //iterate again to search for second max element not at position pos
        for(int i=0;i<A.size();i++)
        {
            if(i != pos)
            {
                second_max=max(second_max,A[i]);
            }
        }
    
	return 0;
}
