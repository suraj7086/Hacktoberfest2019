// Implementing Sieve of Eratosthenes
#include <iostream>
#include <vector>
using namespace std; 

void SieveOfEratosthenes(int n) 
{ 
	vector<bool> prime(n+1,true);

	for (int i=2; i*i<=n; i++) 
	{ 
		if (prime[i] == true) 
		{ 
			for (int j=i*i; j<=n; j+=i) 
				prime[j] = false; 
		} 
	} 
	for (int i=2; i<=n; i++) 
	if (prime[i]) 
		cout << i << " "; 
}  
int main() 
{ 

	int n;
	cin>>n;

	cout << "Primes below "<< n  <<" are "<< endl; 
	SieveOfEratosthenes(n); 
	return 0; 
} 
