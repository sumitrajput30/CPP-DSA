#include<iostream>
using namespace std;
#include<string>
#include<algorithm>
int main()
{
  string s="cybrombhopal";
  char c[12];
  s.copy(c,3,3);
  cout<<c<<"\n";
  for(auto k:s)
  {
      cout<<k<<"\t";
  }
  reverse(s.begin(), s.end());
  cout<<"\nafter reverse="<<s<<"\n";
  string t1="bhopal";
  string t2="delhi";
  cout<<"t1="<<t1<<"\t"<<"t2="<<t2<<"\n";
  t1.swap(t2);
  cout<<"sawp t1="<<t1<<"\t"<<"swap t2="<<t2<<"\n";
}
