#include<bits/stdc++.h>
using namespace std;
int main()
{
    multimap<string,int>mp;
    multimap<string,int>::iterator it;

    mp.insert(make_pair("ismail",3));
    mp.insert(make_pair("atikul",99));
    mp.insert(make_pair("ismail",12));
    mp.insert(make_pair("atikul",322));

    for(it=mp.begin();it!=mp.end();it++)
        cout<<it->first<<'\t'<<it->second<<endl;

    return 0;
}
