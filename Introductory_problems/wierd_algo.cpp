#include<iostream>
using namespace std;
int main()
{
    int n;
    long long num;
    cin>>n;
    num=n;
    while(num!=1){
        cout<<num<<" ";
        if(num%2==0) num=num/2;
        else num=num*3 +1;
    }
    cout<<1;
    return 0;
}