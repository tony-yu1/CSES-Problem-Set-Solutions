#include <iostream>
#include <vector>
 
using namespace std;
 
int main(){
    long long n;
    cin >> n;
    long long total = n*(n+1)/2;
    if((total%2)!=0){
        cout << "NO";
        return 0;
    }
    else
    {
		long long halftotal = total/2;
		cout << "YES" << endl;
		vector<long long> vec1, vec2;
		while(n)
		{
			if(halftotal - n >=0)
			{
				vec1.push_back(n);
				halftotal -= n;
			}
			else
			{
				vec2.push_back(n);
			}
			n--;
		}
		cout << vec1.size() << endl;
		for (long long a : vec1)
			cout << a << " ";
		cout << endl;
		cout << vec2.size() << endl;
		for (long long a : vec2)
			cout << a << " ";
		return 0;
    }
 
	return 0;
}
