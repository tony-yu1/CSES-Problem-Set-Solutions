#include <iostream>
#include <vector>
#include <math.h>
 
using namespace std;
 
int main(){
    long long n;
    cin >> n;
    long long result = 2;
	long long mod = pow(10, 9) + 7;
	for(int i = 1; i < n; i++)
	{
	    result = result * 2 % mod;
	}
	cout << result;
	return 0;
}
