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
    public:
int b;
};
class C:public B
{
    protected:
    int c;
    public:
    put(){cout<<a<<"\t"<<b<<"\t"<<c;}
    getc(){cin>>c;}
};
int main()
{
C ob;
ob.geta();
cin>>ob.b;
ob.getc();
ob.put();
}
