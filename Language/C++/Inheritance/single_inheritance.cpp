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
int main()
{
B ob;
ob.geta();
ob.getb();
ob.put();
}
