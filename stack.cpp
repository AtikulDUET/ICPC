#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>s;
    s.push(3);
    s.push(-1);
    s.push(5);
    s.push(1);
    s.push(12);
    ///Size
    cout<<s.size()<<endl;
    while(!s.empty()){
        int x = s.top();
        cout<<x<<'\t';
        s.pop();
    }
    cout<<endl;
    return 0;
}
