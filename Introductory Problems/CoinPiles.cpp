#include <iostream>

using namespace std;

int main(){
    long long t;
	cin >> t;
	while(t--)
	{
		long long a, b;
		cin >> a >> b;
		cout << ((a+b)%3==0&&2*a>=b&&2*b>=a?"YES":"NO") << endl;
	}
	return 0;
}
