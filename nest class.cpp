#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
class student{
 private:
     int rollno;
     char name[20];
     class address
     {
     private:
        int houseno;
        char street[20];
        char city[20];
        char state[20];
        char pincode[7];
     public:
        void setadress(int h,char *s,char *c,char *st,char *pn)
        {
            houseno=h;
            strcpy(street,s);
            strcpy(city,c);
            strcpy(state,st);
            strcpy(pincode,pn);
        }
        void showadress()
        {

            cout<<houseno<<" "<<street<<" "<<city<<" "<<state<<" "<<pincode<<endl;
        }
     };
     address add;
     public:
        void setrollno(int r)
        {
            rollno=r;
        }
        void setname(char *n)
        {
            strcpy(name,n);
        }
        void setadress(int h,char *s,char *c,char *st,char *pn){
         add.setadress(h,s,c,st,pn);
        }
        void showdata()
        {
            cout<<" student data "<<endl;
            cout<<"roll no "<<rollno<<endl;
            cout<<"name "<<name<<endl;
            add.showadress();
        }
};
main()
{
    student s1;
    s1.setrollno(22);
    s1.setname("yash");
    s1.setadress(22,"vasundra colony","makrana","rajasthan","341505");
    s1.showdata();
    getch();
}
