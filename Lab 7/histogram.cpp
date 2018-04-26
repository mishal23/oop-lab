#include "bits/stdc++.h"
#include "CImg.h"
using namespace std;
using namespace cimg_library;
long red[500],green[500],blue[500];
int main()
{
  int j;
    CImg<unsigned char> i("input.jpeg");
    int w, h, a, b;
    w = i.width();
    h = i.height();

    for(a=0;a<w;a++)
    {
        for(b=0;b<h;b++)
        {
            red[(int)i(a,b,0)]++;
            green[(int)i(a,b,1)]++;
            blue[(int)i(a,b,2)]++;
        }
    }
    cout<<"Index"<<"\t"<<"Red"<<"\t"<<"Green"<<"\t"<<"Blue"<<endl;
    for(j=0;j<256;j++)
    {
      cout<<j<<"\t"<<red[j]<<"\t"<<blue[j]<<"\t"<<red[j]<<endl;
    }
    return 0;
}
