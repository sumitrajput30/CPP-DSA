#include<iostream>
using namespace std;
#include<list>
int main()
{
  list<int>l;
  l.push_front(10);
  l.push_front(2);
  for(auto p:l)
  {
      cout<<p<<"\t";
  }
  l.push_back(3);
  l.push_back(77);
  cout<<"\n";
  for(auto p:l)
  {
      cout<<p<<" ";

  }
  cout<<"\n";
  l.pop_back();
  for(auto p:l)
  {
    cout<<p<<" ";
  }
   cout<<"\n";
  l.pop_front();
  for(auto p:l)
  {
      cout<<p<<" ";
  }
}
