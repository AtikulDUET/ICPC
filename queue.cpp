#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>q;
    q.push(3);
    q.push(8);
    q.push(-1);
    q.push(5);

    /// Size
    cout<<"Size: "<<q.size()<<endl;
    while(!q.empty()){
        int x = q.front();
        cout<<x<<'\t';
        q.pop();
    }
    cout<<endl;
    return 0;
}
