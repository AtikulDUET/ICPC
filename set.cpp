#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>s;
    set<int>::iterator it;
    s.insert(4);
    s.insert(8);
    s.insert(-1);
    s.insert(4);
    s.insert(5);
    ///Size
    cout<<s.size()<<endl;

    /// Printing
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<'\t';
    cout<<endl;

    int look;
    cout<<"Enter your look: ";
    cin>>look;
    it = find(s.begin(),s.end(),look);
    s.erase(it);
     for(it=s.begin();it!=s.end();it++)
        cout<<*it<<'\t';
    cout<<endl;


    return 0;
}
