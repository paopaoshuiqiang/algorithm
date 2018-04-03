#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;


int _tmain(int argc, _TCHAR* argv[]){
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);


	if (s1.length()!=s2.length())
	{
		cout<<"false"<<endl;
		return 0;
	}
	vector<int> word(26,0);
	
	for (int i=0;i<s1.length();i++)
	{
		word[s1[i]-'a']++;
		word[s2[i]-'a']--;
	}
	for (auto a:word)
	{
		if(a!=0)
			cout<<"false" ;
	}
	cout<<"true";
	
	system("pause");
	getchar();
	return 1;

}