#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    vector<int>::iterator it;
    vec.push_back(3);
    vec.push_back(88);
    vec.push_back(89);
    vec.push_back(-1);
    vec.push_back(4);

    /// Size
    cout<<"Size:   "<<vec.size()<<endl;


    ///Printing  by loop
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<'\t';
    }
    cout<<endl;

    /// Printing by iterator
    for(it=vec.begin();it!=vec.end();it++)
        cout<<*it<<'\t';
    cout<<endl;


    /// Sorting
    sort(vec.begin(),vec.end());
    for(it=vec.begin();it!=vec.end();it++)
        cout<<*it<<'\t';
    cout<<endl;


    /// Reverse
    reverse(vec.begin(),vec.end());
    for(it=vec.begin();it!=vec.end();it++)
        cout<<*it<<'\t';
    cout<<endl;


    /// sort and reverse
    /// sort(vec.begin(),vec.begin()+3);
    sort(vec.rbegin(),vec.rend());
    for(it=vec.begin();it!=vec.end();it++)
        cout<<*it<<'\t';
    cout<<endl;

    /// Random shuffle
    cout<<"Random shuffle: "<<endl;
    random_shuffle(vec.begin(),vec.end());
    for(it=vec.begin();it!=vec.end();it++)
        cout<<*it<<'\t';
    cout<<endl;




    /// Point

    it = vec.begin();
    cout<<"First number: "<<*it<<endl;
    it++;
    cout<<"Second number: "<<*it<<endl;




    /// Searching
    int look;
    cout<<"Enter your look value: ";
    cin>>look;
    it = find(vec.begin(),vec.end(),look);
    if(it!=vec.end())
        cout<<"Found the value."<<endl;
    else
        cout<<"Not found."<<endl;






    /// initial by array
    int arr[5]={9,7,4,193,333};
    vector<int>vec1(arr,arr+5);

    for(it=vec1.begin();it!=vec1.end();it++)
        cout<<*it<<'\t';
    cout<<endl;



    return 0;
}
