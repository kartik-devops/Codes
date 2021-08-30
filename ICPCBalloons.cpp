#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;cin>>n;
	    
	    std::vector<int>arr ;
	    for(int i=0;i<n;i++)
	    {
	        int ele;
	        cin>>ele;
	        arr.push_back(ele);
	    }
	    int sum=28;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=1 && arr[i]<=7)
	        {
	            sum = sum - arr[i];
	        
	        if(sum==0)
	        {
	            cout<<i+1<<"\n";
	            break;
	        }
	        }
	    }
	    
	}
	return 0;
}
