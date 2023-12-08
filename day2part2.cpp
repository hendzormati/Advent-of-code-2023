
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
    string s1;
    int rm=0,gm=0,bm=0;// maximum values 
        while(f!=string::npos)
    {
        d=f+1;
        f=s.find(";",d);
        string num="";
        int r=0,g=0,b=0,n;
        s1= s.substr(d,f-d+1);
        for(int j=0;j<s1.size();j++)
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
            if(r>rm)rm=r;
            if(b>bm)bm=b;
            if(g>gm)gm=g;
            }
        }
    }
    cout <<" rm "<<rm<<" gm "<<gm<<" bm "<<bm<<endl;
    sum+=(rm*gm*bm);
}
cout <<sum;
    return 0;
}
