#include "bits/stdc++.h"
using namespace std;
class square{
  int l,b;
public:
  square(){
    cout<<"Enter length and breadth of square: ";
    cin>>l>>b;
  }
  int getLength(){
    return l;
  }
  int getBreadth(){
    return b;
  }
  virtual float Area() = 0;
};

class Area1: public square
{
public:
  float Area()
  {
    return (float)(getLength()*getBreadth());
  }
};
int main()
{
  Area1 C;
  float area = C.Area();
  cout<<"Area of square: "<<area<<endl;
}
