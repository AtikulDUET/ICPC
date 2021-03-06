#include<bits/stdc++.h>
#define Size 10
using namespace std;
int main()
{
    bitset<Size>bs;

    cout<<"bs: "<<bs<<endl;

    bs.set();
    cout<<"bs: "<<bs<<endl;

    bs.reset();
    cout<<"bs: "<<bs<<endl;

    bs.set(3);
    bs.set(1);
    bs.set(5);
    bs[10] = 1;
    bs[9] = 1;
    bs.set(7);
    cout<<"bs: "<<bs<<endl;
    cout<<"Total one: "<<bs.count()<<endl;
    cout<<"Total zero: "<<bs.size()-bs.count()<<endl;


    return 0;
}
