//#ifndef CREDITCHECKING_H
//#define CREDITCHECKING_H

#include <vector>
#include <string>

using namespace std;
class Creditchecking
{
private:
int creditnumber;

public:
void setparameters(int creditnumber_)
{creditnumber=creditnumber_;}

bool creditcard ()
{
// variable and vector declaration
bool validity = true;
vector<int> digits;

// get the digits
int i = 0;
while ((creditnumber % 10) != 0)
{digits.push_back(creditnumber % 10) ; /// resize could be an option here
creditnumber -= (creditnumber % 10);
creditnumber /= 10;
cout<<digits[i]<<" "<<endl;
i++;
}

// square every second number

/*if (digits.size() % 2 ==0)
{
  for (int i=0;i<digits.size();i*=2)
    {digits[i] = digits[i]*digits[i];}
}
else
{*/
  for (int i=digits.size()-1;i>=0;i-=2)
    {digits[i] = digits[i]*digits[i];
    cout<<digits[i]<<endl;}

// sum all digits, after summing the digits for those > 9
int sum = 0;
for (int i=0;i<=digits.size();i++)
  {
  if (digits[i] > 9)
  {digits[i] = (digits[i] % 10 + (digits[i] - 10));}
  sum += digits[i];
  }
  cout<<sum<<endl;

if ((sum % 10) == 0)
validity = true;
else
validity = false;

return validity;}
};

//#endif // CREDITCHECKING_H
