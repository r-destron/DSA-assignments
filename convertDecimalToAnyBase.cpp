#include<bits/stdc++.h>
using namespace std;
void convertDecimalToBase(int num,int base){
    if(num==0)return;
    int dig=num%base;
        num/=base;
        if(dig<0)num+=1;
        convertDecimalToBase(num,base);
        if(dig<0) cout<<dig+(base*-1);
        else cout<<dig;
}
int main(){
    int num,base;
    cin>>num>>base;
    if(num==0)  cout<<"0"<<endl;
    else    convertDecimalToBase(num,base);
    return 0;
}