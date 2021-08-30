#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int no_of_rounds ;
	cin>>no_of_rounds;
	int sum1=0 ,sum2=0,ans=0;
	int arr1[no_of_rounds] , arr2[no_of_rounds];
	int lead=0;
	for(int i=0;i<no_of_rounds;i++)
	{
	    cin>>arr1[i]>>arr2[i];
	}
    for(int i=0;i<no_of_rounds;i++)
	{
	    sum1+=arr1[i];
	    sum2+=arr2[i];
	    if(sum1 > sum2 && sum1-sum2 > lead)
	    {
	        lead = sum1-sum2;
	        ans=1;
	    }
	    if(sum2-sum1 > lead && sum2>sum1)
	    {
	        lead = sum2-sum1;
	        ans=2;

	    }
	}
	cout <<ans<<" "<<lead;
	return 0;
}
