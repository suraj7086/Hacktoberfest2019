#include<iostream>
using namespace std;
class A
{

    protected:
int a;
public:
geta(){cin>>a;}
};
class B : public A
{
     public:
int b;
} ;
class C
{
    protected:
    int c;
    public:
    getc(){cin>>c;}
};
 class D : public B, public C
{
    protected:
     int d;
    public:
        getd(){cin>>d;}
        put(){cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d;}
};
int main()
{
    D ob;
    ob.geta();
    cin>>ob.b;
    ob.getc();
    ob.getd();
    ob.put();
}
