#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<char> st ={'A','C','G','T'};

    string input;
    cin>>input;
    int maxlen=0;
    int currlen=0;
    char prev='Z';
    for(int i=0;i<input.length();i++){
        if(input[i]==prev){
            currlen++;
        }
        
        maxlen=max(maxlen,currlen);
        
        prev=input[i];
    }
    cout<<maxlen;
    return 0;
}