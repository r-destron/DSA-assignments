#include<bits/stdc++.h>
using namespace std;
void convertBaseToDecimal(int num,int base){
    int sum=0,p=1;
    while(num!=0){
        int dig=num%base;
        num=num/10;
        sum+=dig*p;
        p=p*base;
    }
    cout<<sum<<endl;
}
int main(){
    int num,base;
    cin>>num>>base;
    if(num==0) cout<<"0"<<endl;
    else convertBaseToDecimal(num,base);
    return 0;
}