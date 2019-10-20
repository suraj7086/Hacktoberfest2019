#include <iostream>
#include <cmath>
using namespace std;

int main(){
        double userInput;
        int result;

    cout<<"Enter a number to find square root";
    cin>> userInput ;

    result = sqrt(userInput);
    cout<< "the square root of " << userInput << " is " << result;

    return 0;
}
