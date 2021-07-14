#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){

	string s;
	cin >> s;

	unordered_map<char, int> mp;

	for(char c : s)
	{
		mp[c]++;
	}
/*
   for (auto const &pair: mp) {
        cout << "{" << pair.first << ": " << pair.second << "}\n";
    }
*/
	int odds = 0;
	string oddString;
	string firstHalf = "";	
	string secondHalf = "";


	for(auto a : mp)
	{
		if(a.second%2!=0)
		{
			odds++;
			oddString = string(a.second, a.first);
		}
	}

	for(auto a : mp)
	{
		if(a.second%2==0)
		{
			a.second = a.second/2;
			firstHalf = firstHalf + string(a.second, a.first);
			secondHalf = string(a.second, a.first) + secondHalf;
		}
	}

	if(odds > 1)
	{
		cout << "NO SOLUTION";
		return 0;
	}

	if(odds==1)
	{
		cout << firstHalf + oddString + secondHalf;
	}
	else
	{
		cout << firstHalf + secondHalf;
	}


	return 0;

}
