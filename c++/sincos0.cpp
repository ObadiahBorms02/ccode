//g++ sin0 -o sin0.o
#include <iostream>
#include <cmath>
using namespace std;
double round4(double var)
{
	double value = (int)(var * 10000 + 0.0005);
	return (double)value / 10000;
}

int main (){
double PI=3.14159265;
double rad, t, sr, cr, c;// theta in terms of degrees 
  for (t=0 ; t<=360 ; t = t + 15 )
  {
	rad = t * (PI / 180);
    sr = sin(rad);
    if (sr < 0.00000001)sr = 0;
    cr = cos(rad);
    if (sr < 0.00000001)sr = 0;
    c = sr*sr + cr*cr;
	  cout <<t<<"\t"<<cr<<"\t"<<sr<<"\t"<<c<<endl;
   }
   return 0;
}
