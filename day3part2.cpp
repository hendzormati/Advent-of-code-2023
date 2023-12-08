
#include <bits/stdc++.h>
#include <iostream>   // std::cout
#include <string>     // std::string, std::to_string
using namespace std;
bool issymbol(char c)
{
    return !((c>=48 && c<=57)||
        (c>=65 && c<=90)||
        (c>=97 && c<=122) || (c=='.'));
}
bool present(pair<int,int> S,pair<int,int> val, int n)
{

        if(S.first>=val.first-1 && S.first<=val.first+1 && S.second>=val.second-1 &&S.second<=(val.second+ceil(log10(n))))
         return true;
    return false;
}
bool present(int i) { return i; }
int main() {

int q;
cin >>q;
cin>>ws;
int sum=0,prod=1;
vector<pair<int,int> > S;// position of each *
vector<pair<int,pair<int,int> > > Num; // position of each number and its value
for(int i=0;i<q;i++)
{
    string s,num="";
    int n;
    getline(cin, s);
    s+='.';// case string end with a number
    for(int j=0;j<s.size();j++)
        {
            if(isdigit(s[j]))
            {
                num+=s[j];
            }
            else { if(num!="")
                    {
                       stringstream strm(num);
                        strm >> n;
                        Num.push_back(make_pair(n,make_pair(i,j-num.size())));
                        num="";
                    }
                    if(s[j]=='*')S.push_back(make_pair(i,j));

                }

    }


}
for(int j=0 ; j<S.size() ; j++)
    { int nb=0;
        prod=1;
for(int i=0 ; i<Num.size() ; i++)
{
   if(present(S[j],Num[i].second,Num[i].first))
   {
       prod*=Num[i].first;nb++;
   }
}
if(nb==2)sum+=prod;
}
cout <<sum;
    return 0;
}
/* test case
10
467..114
...*......
..35..633
......#...
617*......
.....+.58
..592.....
......755
...$.*....
.664.598
*/
