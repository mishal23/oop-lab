#include "bits/stdc++.h"
using namespace std;
class base
{
public:
  base()
  {
    cout<<"Constructor Base called"<<endl;
  }
   void hello()
  {
    cout<<"Base Class"<<endl;
  }
  virtual void where()
  {
    cout<<"Base Class"<<endl;
  }
};
class derived: public base
{
public:
  derived()
  {
    cout<<"Constructor Derived called"<<endl;
  }
  void hello()
  {
    cout<<"Derived Class"<<endl;
  }
  void where()
  {
    cout<<"Derived Class"<<endl;
  }
};
int main()
{
  base *ptr;
  derived d;
  ptr = &d;

  ptr->hello();
  ptr->where();
}
