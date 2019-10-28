#include<iostream>
using namespace std;

class A
{
    protected:
int a;
public:
geta(){cin>>a;}
};
class B:public A
{
    protected:
int b;
public:
getb(){cin>>b;}
put(){cout<<a<<"\t"<<b;}
};
class C:public A
{
    protected:
int c;
public:
getc(){cin>>c;}
put(){cout<<a<<"\t"<<c;}
};
int main()
{
B ob;
cout<<"class B\n";
ob.geta();
ob.getb();
ob.put();

C ob1;
cout<<"\n class C\n";
ob1.geta();
ob1.getc();
ob1.put();
}
