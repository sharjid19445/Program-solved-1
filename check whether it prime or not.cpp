#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    cout<<"Enter a number : "<<endl;
    cin>>n;

    for ( i = 2; i < n; ++i) {
        if (n%i==0) break;
    }
    if (i==n) cout<<n<<" is a prime number ! "<<endl;
    else cout<<n<<" is a non-prime number ! "<<endl;
}
