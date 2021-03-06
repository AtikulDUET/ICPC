#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int>s;
    multiset<int>::iterator it;
    s.insert(3);
    s.insert(-1);
    s.insert(5);
    s.insert(2);
    s.insert(3);
    s.insert(2);

    cout<<"Size: "<<s.size()<<endl;
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<'\t';
    cout<<endl;

    int look;
    cout<<"Enter your look: ";
    cin>>look;
    it = find(s.begin(),s.end(),look);
    if(it!=s.end()){
        cout<<"Found."<<endl;
        s.erase(it);
    }
    else
        cout<<"Not found."<<endl;

    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<'\t';
    cout<<endl;

    return 0;
}
