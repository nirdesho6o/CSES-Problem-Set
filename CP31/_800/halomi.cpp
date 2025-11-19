#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        int num,k;
        cin>>num>>k;
        int arr[num];
        for(int i=0;i<num;i++){
            cin>>arr[i];
        }
        int arrsize=sizeof(arr)/sizeof(arr[0]);
        if(k==1 && is_sorted(arr,arr+arrsize)){
            cout<<"YES\n";

        }
        else if(k>1){
            cout<<"YES\n";
        }
        else cout<<"NO\n";

    }
    return 0;
}