#include <iostream>
using namespace std;

int main() {
	int t ; 
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n] , q1 , q2 , count=0;
	    cin>>q1>>q1;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>=q1 && arr[i]<=q2)
	        {
	            count++;
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
