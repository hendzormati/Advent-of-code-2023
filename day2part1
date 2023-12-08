
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {

int q;
cin >>q;
cin>>ws;
int sum=0;
for(int i=0;i<q;i++)
{
    string s;

    getline(cin, s);
    size_t d,f=s.find(":");
    bool test=true;
    string s1;
        while(f!=string::npos && test)
    {
        d=f+1;
        f=s.find(";",d);
        string num="";
        int r=0,g=0,b=0,n;
        s1= s.substr(d,f-d+1);
        for(int j=0;j<s1.size()&&test;j++)
        {
            if(isdigit(s1[j]))num+=s1[j];
            else if(s1[j]!=' ')
            {
            stringstream strm(num);
            strm >> n;
            num="";
            if(s1[j]=='r' ) {r+=n;j+=3;}
            else if(s1[j]=='g' ) {g+=n;j+=5;}
            else if(s1[j]=='b' ) {b+=n;j+=4;}
            if(r>12 || g>13 || b>14) test=false;
             cout <<test <<" r "<<r<<" g "<<g<<" b "<<b<<endl;

            }
        }
    }
    if(test)sum+=i+1;
}
cout <<sum;
    return 0;
}
