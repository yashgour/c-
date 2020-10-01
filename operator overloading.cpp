#include<conio.h>
#include<iostream>
using namespace std;
class complex{
 private:
 int a,b;
 public:
 void setdata(int x,int y)
 {
  a=x;
  b=y;
 }
 void showdata()
 {
  cout<<"a= "<<a<<"  "<<"b= "<<b<<endl;
 }
 complex operator +(complex c)
 {
  complex temp;
  temp.a=a+c.a;
  temp.b=b+c.b;
  return(temp);
 }

};
main()
{
 class complex c1,c2,c3;
 c1.setdata(3,6);
 c2.setdata(3,2);
 c3=c1.operator+(c2);
 c3.showdata();
 getch();
}
