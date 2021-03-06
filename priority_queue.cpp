#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int>q;
    q.push(3);
    q.push(44);
    q.push(-1);
    q.push(5);
    q.push(10);
    while(!q.empty()){
        int x = q.top();
        cout<<x<<'\t';
        q.pop();
    }
    cout<<endl;
    return 0;
}
