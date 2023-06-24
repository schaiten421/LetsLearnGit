#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c=0;
    cin>>a>>b;
    if(a>b)
    c=a-b;
    else
    c=b-a;
    cout<<"the diff is "<<c;
    return 0;
}