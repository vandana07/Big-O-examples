#include<iostream>
 
using namespace std;
 
int main()
{
    int arr[20],n,ans,i,flag=0;
    cout<<"How many elements?";
    cin>>n;
    cout<<"\nEnter elements of the array\n";
    
    for(i=0;i<n;++i)
        cin>>arr[i];
    
    cout<<"\nEnter element to search:";
    cin>>ans;
    
    for(i=0;i<n;++i)
    {
        if(arr[i]==ans)
        {   flag = 1;
            cout<<i;
            break;
        }
    }
    
    if(flag == 0) {
        cout<<"\n Not found!";
    }
    
        
    return 0;
}
