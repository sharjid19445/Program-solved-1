#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,palnum=0,r,f;

    cout<<"Enter a number to check whether it is palindrome or not : "<<endl;
    cin>>n;
    r=n;
    while(n!=0){
        f=n%10;
        palnum = (palnum * 10) + f;
        n/=10;
    }
    if (palnum==r) cout<<"Yes, this number is palindrome . "<<endl;
    else cout<<"No, this number is non-palindrome"<<endl;
}
