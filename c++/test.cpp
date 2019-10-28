#include <iostream>
#include <vector>
#include <string>
#include "Creditchecking.h"

using namespace std;

/*int square_sum(const std::vector<int>& numbers)
{
    int k = numbers.size();
    double returnsum = 0.;
    for (int i=0;i<k;i++)
    {returnsum += numbers[i]*numbers[i];}

    return returnsum;
}*/


/// An example could be: 1714 -> 4, 1, 7, 1
int main()
{
 int creditnumber;
 cout<<"Please enter the 16-digit number of the credit card:"<<endl;
 cin>>creditnumber;

 /* string name;
  cout << "What is your name? ";
  getline (cin, name);
  cout << "Hello, " << name << "!\n";*/

 Creditchecking v;
 v.setparameters(creditnumber);
 bool creditcd = v.creditcard();
 if (creditcd)
 cout <<"The card is valid"<<endl;
 else
 cout<<"Invalid card"<<endl;

    return 0;

}



