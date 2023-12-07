#include <bits/stdc++.h>
using namespace std;

int main() {
int q;
cin >>q;
long long sum=0;
for(int i=0;i<q;i++)
{
    string s;
    cin>>s;
    int l=0,r=0;
    for(int j=0;j<s.size();j++)
    {
        if(s[j]>='0' && s[j]<='9')
        {
            if(l==0){l=(s[j]-48)*10;r=(s[j]-48);}
            else r=(s[j]-48);
        }
    }
    sum+=l+r;
}
cout <<sum;
    return 0;
}
