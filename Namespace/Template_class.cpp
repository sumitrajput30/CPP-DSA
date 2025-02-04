#include<iostream>
using namespace std;
namespace boss
{
   class student
   {
       public:void show()
       {
           cout<<"cybrom\n";
       }
       public:void enjoy()
       {
           cout<<"holiday\n";
       }
   }faculty;
}
using namespace boss;
int main()
{
    faculty.show();
    faculty.enjoy();
}
