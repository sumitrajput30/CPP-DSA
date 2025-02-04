#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<pair<int,string>>v;
    int record,rollno;
    string name;
    cout<<"enter your record\n";
    cin>>record;

    for(int i=1;i<=record;i++)
    {
        cout<<"enter your roll no \n";
        cin>>rollno;
        cout<<"enter your name \n";
        cin>>name;
       // v.push_back({rollno,name});
        v.push_back(make_pair(rollno,name));

    }
    cout<<"stored data are\n";
    for(int i=0;i<record;i++)
    {
        cout<<v[i].first<<","<<v[i].second<<"\n";
    }
}
