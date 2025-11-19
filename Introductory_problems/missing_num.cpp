#include<iostream>
using namespace std;
int main()
{   
    int num;
    cin>>num;
    int ans=0;
    for(int i=1;i<=num;i++){
        ans=ans^i;
    }
    for(int j=1;j<num;j++){
        int a;
        cin>>a;
        ans=ans^a;
    }
    cout<<ans;
    return 0;
}