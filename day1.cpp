
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
    string num[9]={ "one", "two", "three", "four", "five", "six", "seven", "eight","nine"};
        int l=0,r=0;
    for(int j=0;j<s.size();j++)
    {
        //part 1
        if(isdigit(s[j]))
        {
            if(l==0)
                l=(s[j]-'0')*10;
            r=s[j]-'0';
        }
       else
        {  //part 2 
            for(int k=0;k<9;k++)
                if(s.find(num[k],j)==j)
                    {
                    if(l==0)
                        l=(k+1)*10;
                    r=k+1;
                    j+=num[k].size()-2;// case eightwo 
                    break;
                    }
       }
    }
    sum+=l+r;
}
cout <<sum;
    return 0;
}
