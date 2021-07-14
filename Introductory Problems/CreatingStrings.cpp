#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int main(){

	string n;
	cin >> n;

	sort(n.begin(), n.end()); 

	vector<string> answer;
	do
	{
		answer.push_back(n);
	}
	while(next_permutation(n.begin(), n.end()));

	cout << answer.size() << "\n";

	for(auto c : answer)
	{
		cout << c << "\n";
	}



	return 0;

}
