#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>li;
    list<int>::iterator it;
    li.push_back(3);
    li.push_front(9);
    li.push_back(1);
    li.push_front(5);

    cout<<"Size : "<<li.size()<<endl;
    for(it = li.begin();it!=li.end();it++)
        cout<<*it<<'\t';
    cout<<endl;


    it = li.begin();
    li.insert(it,1000);

    for(it = li.begin();it!=li.end();it++)
        cout<<*it<<'\t';
    cout<<endl;


    int look;
    cout<<"Enter your look value: ";
    cin>>look;
    it = find(li.begin(),li.end(),look);

    if(it!=li.end()){
        cout<<"Found: "<<endl;
        /// erase
        li.erase(it);
    }
    else
        cout<<"Not found."<<endl;
    for(it = li.begin();it!=li.end();it++)
        cout<<*it<<'\t';
    cout<<endl;
    ++it;

    li.pop_front();
    li.pop_back();
    cout<<"Size: "<<li.size()<<endl;


    return 0;
}
