#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
 
    long long n;
 
    cin >> n;
  
    long long ans = 0;

    long long maxima=0;
 
    for(long long i = 0; i < n; i++)
    {
        long long n1;
        cin >> n1;
        maxima = max(maxima,n1);
        ans= ans + maxima - n1;

    }
 
    cout << ans;
 
 
    return 0;
}
