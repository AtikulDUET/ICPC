#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mp;
    map<string,int>::iterator it;

    mp.insert(make_pair("sadikul",49));
    mp.insert(make_pair("ismail",99));
    mp["atikul"] = 10;
    mp["imran"] = 20;

    cout<<mp["atikul"]<<endl;
    cout<<mp["imran"]<<endl;


    /// Printing
    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<'\t'<<it->second<<endl;
    }
    return 0;
}

