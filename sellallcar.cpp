#include <bits/stdc++.h>
using namespace std;
#define  lli long long int
int main() {
	// your code goes here
	lli t;cin>>t;
	while(t--)
	{
	    lli n,sum=0;
	    cin>>n;
	    lli arr[n];
	    for(lli i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    
	    sort(arr,arr+n , greater<int>());
	    for(lli i=0;i<n;i++)
	    {
	      if((arr[i]-i)>=0)
	        sum+=(arr[i]-i);
	      else
	      {
	          sum+=0;
	      }
	    }
	    
	    cout <<sum%1000000007<<endl;
	}
	return 0;
}
