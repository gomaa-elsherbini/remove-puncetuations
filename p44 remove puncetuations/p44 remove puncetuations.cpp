#include<iostream>
#include<string>
#include<vector>
using namespace std;



string readString(string msg)
{
	string str;
	cout << msg;
	getline(cin, str);
	return str;
}

//vector <char> vPunctuations= { ',', '`', '"', ':', ';', '?', '|', '\\', '\/', '\''};

string removePunctuations(string str)
{
	/*for (char ch : vPunctuations)
	{
		short pos = str.find(ch);

		while (pos != -1)
		{
			str.erase(pos, 1);
			pos = str.find(ch);
		}
	}*/

	string s2 = "";
	for (int i = 0; i < str.length(); i++)
	{
		if (!ispunct(str[i]))
			s2 += str[i];
	}
	return s2;
}


int main()
{
	//string str = readString("Enter your string?");
	//string s1 = readString("Enter the string you want to replace?");
	//string s2 = readString("Enter the string you want to replace to?");

	string str = "\\\"welcome\\\": to;? |JORDAN, 'JORDAN', it`s \/a nice? country";
	

	cout << "\n Orignal String: \n";
	cout << str << endl << endl;

	cout << "\n String after removing punctuations:\n";
	cout << removePunctuations(str);

	cout << endl << endl;

	

	return 0;
}