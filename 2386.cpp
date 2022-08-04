#include <iostream>
#include <string>
using namespace std;
int main()
{
	while (1)
	{
		int sum = 0, i;
		string s1, s2;
		cin >> s1;
		getline(cin, s2);
		if (s1 == "#")
			break;
		for (i = 0; i < s2.size(); i++)
		{
			if (s2[i] >= 65 && s2[i] <= 90)
				s2[i] += 32;
			
			if (s2[i] == s1[0])
				sum++;
		}
		cout << s1 << " " << sum << endl;
	}
	
	return 0;
}