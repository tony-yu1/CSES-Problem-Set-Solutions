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

/*
OR

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
 
int main()
{
 
    long long n;
 
    cin >> n;
 
    vector<long long> vec;
 
    while(n--)
    {
        long long n1;
        cin >> n1;
        vec.push_back(n1);
    }
 
    n = vec.size();
 
    long long ans = 0;

    long long maxima = 0;
 
    for(long long i = 0; i < n; i++)
    {
        if(vec.at(i) >= maxima)
        {
            maxima = max(maxima, vec.at(i));
        }
        else
        {
            ans += maxima-vec.at(i);
        }
    }
 
    cout << ans;
 
 
    return 0;
}
*/
