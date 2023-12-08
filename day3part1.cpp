
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
bool present(vector<pair<int,int> > S,pair<int,int> val, int n)
{
    for(int i=0 ; i<S.size() ; i++)
    {
        if(S[i].first>=val.first-1 && S[i].first<=val.first+1 && S[i].second>=val.second-1 &&S[i].second<=(val.second+ceil(log10(n))))
         {return true; }
    }
    return false;
}
bool present(int i) { return i; }
int main() {

int q;
cin >>q;
cin>>ws;
int sum=0;
vector<pair<int,int> > S;// position of each symbol
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
                    if(issymbol(s[j]))S.push_back(make_pair(i,j));

                }

    }


}
for(int i=0 ; i<Num.size() ; i++)
{
   if(present(S,Num[i].second,Num[i].first))sum+=Num[i].first;
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
