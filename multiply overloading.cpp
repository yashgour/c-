#include<conio.h>
#include<iostream>
using namespace std;
class complex
{
 private:
 int a,b;
 public:
 void setdata(int x,int u)
 {
  a=x;
  b=u;
 }
 void showdata()
 {
  cout<<"a= "<<a<<endl<<"b= "<<b<<endl;
 }
 complex operator*(complex c)
 {
  complex temp;
  temp.a=a*c.a;
  temp.b=b*c.b;
  return(temp);
 }
};
main()
{
 complex c1,c2,c3;
 c1.setdata(3,4);
 c2.setdata(4,3);
 c3=c1*c2;
 c3.showdata();
 getch();

}
