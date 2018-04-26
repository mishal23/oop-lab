#include "bits/stdc++.h"
#include "CImg.h"
using namespace std;
using namespace cimg_library;
int main()
{
    CImg<unsigned char> i("input.jpeg");
    int w, h, a, b;
    w = i.width();
    h = i.height();

    for(a=0;a<w;a++)
    {
        for(b=0;b<h;b++)
        {
            //int color = ((int)i(a,b,0) + (int)i(a,b,1) + (int)i(a,b,2))/3;
            i(a,b,0) = 255 - (int)i(a,b,0);
            i(a,b,1) = 255 - (int)i(a,b,1);
            i(a,b,2) = 255 - (int)i(a,b,2);
        }
    }
    i.save("image.jpeg");
    i.display("image.jpeg");
    return 0;
}
