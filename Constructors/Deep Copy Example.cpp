class Demo
{
public:
int a;
int b;
Demo() int *p; { p = new
int Demo(Demo &d) ; } {
a = d.a; //4
b = d.b; //5
p = new int;
*p = *(d.p);
}
void setdata(int x,int y,int z)
{ a=x;
b=y;
*p=z;
}
void showdata()
{std::cout << "value of a is : " <<a<< std::endl;
std::cout << "value of b is : " <<b<< std::endl;
std::cout << "value of *p is : " <<*p<< std::endl;
}};

 int main()
{
Demo d1;
d1.setdata(4,5,7);
Demo d2(d1);
d2.showdata();
return 0;
 }
