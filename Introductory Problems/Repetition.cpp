#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s;

    cin >> s;

    long long tempMax = 1;
    long long ans = 1;

    long long l = s.length();

    for(int i = 0; i < l; i++)
    {
        if(s[i] == s[i+1])
        {
            tempMax++;
            ans = max(ans, tempMax);
        }
        else
        {
            tempMax = 1;
        }
    }

    cout << ans;



    return 0;
}
