//Program to add two numbers using functions

#include<iostream>

#include<conio.h>

using namespace std;

void add(int,int);

int main()

{

int a,b;

cout<<"enter values of a and b"<<endl;

cin>>a>>b;

add(a,b);

getch();

return 0;

}
int add(void)

{

int a,b;

cout<<"enter 2 numbers::";

cin>>a>>b;

return(a+b);

}
