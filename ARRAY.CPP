// program for friend function
#include<iostream.h>
#include<conio.h>
class student
{
private:
	   int s1,s2,s3;
	   float avg;
public:
void getdata()
{
cout<<"enter marks\n";
cin>>s1>>s2>>s3;
}
friend void result (student s);
};
void result (student s)  //define member function
{
int tot; //  local variable
tot=s.s1+s.s2+s.s3;
s.avg=(float)tot/3;
cout<<"Average="<<(float)tot/3;
}
void main()
{
student std;
clrscr();
std.getdata();
result (std);
getch();
}
