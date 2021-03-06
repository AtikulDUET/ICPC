#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>q;
    q.push_front(1);
    q.push_back(5);
    q.push_front(10);
    q.push_back(-2);

    cout<<"Size: "<<q.size()<<endl;
    while(!q.empty()){
        int x = q.front();
        cout<<x<<'\t';
        q.pop_front();
    }
    cout<<endl;
    return 0;
}
