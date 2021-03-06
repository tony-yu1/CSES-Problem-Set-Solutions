#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    long long n;

    cin >> n;

    long long temp; 
    long long sum;
    sum = 0;
    for(long long i = 1; i < n; i++)
    {
        cin >> temp;
        sum += temp;
    }

    cout << n*(n+1)/2 - sum;

    return 0;
}

/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int a;


    n--;

    vector<int> vec;

    for (int i = 1; i <= n; i++)
        vec.push_back(i);
    

    vector<int>::iterator it;
    it = find(vec.begin(),vec.end(),n);

    while(n--)
    {
        cin >> a;
        it = find(vec.begin(),vec.end(),a);

        if(it != vec.end())
        {
            vec.erase(remove( vec.begin(), vec.end(), a), vec.end());
        }
    }

    cout << vec.at(0);


    return 0;
}
*/
