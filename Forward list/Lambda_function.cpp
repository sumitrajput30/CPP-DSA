#include<iostream>
using namespace std;
#include<vector>
#include<forward_list>
#include<algorithm>
int main()
{
  /*forward_list<int>f; */
  cout<<[](int a, int b) {return a+b;} (4,9)<<"\n";

  cout<<[](int a) {return a>=18;}(4)<<"\n";
  auto p=[](int a, int b) {return a+b;};
  cout<<p(4,2)<<"\n";


 /* all_of(),any_of(),none_of(): return boolean value*/

  vector<int>v{1,58,79,858,6,5,9,5,8,5};
  cout<<all_of(v.begin(),v.end(),[](int a){return a>20;});
  cout<<none_of(v.begin(),v.end(),[](int a){return a>20;});
  cout<<any_of(v.begin(),v.end(),[](int a){return a>20;});
}
