#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    int max_sum=0;
	    sort(arr,arr+n);
	    for(int i=0;i<k;i++)
	    {
	        if(arr[i]<0)
	        {
	            arr[i] = -1*arr[i];
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>0)
	        {
	            max_sum+=arr[i];
	        }
	    }
	cout<<max_sum<<"\n";    
	    
	}
	
	return 0;
}
