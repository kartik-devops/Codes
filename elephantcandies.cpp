#include <iostream>
using namespace std;

int main(){
    int t,i,j;
    cin>>t;
    int a[100];
    for(i=0;i<t;i++){
        int n,c;
        cin>>n>>c;
        int sum=0;
        
        for(j=0;j<n;j++){
            cin>>a[j];
            sum=sum+a[j];
            
        } 
        if(sum<=c)
        cout<<"Yes"<<'\n';
        else
        cout<<"No"<<'\n';  
        
}


}
