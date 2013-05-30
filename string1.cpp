#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
	string a = "i love you";
	map< char,int > M;
	for(int i=0;i<a.size();i++)
	{
		if(M.count(a[i]) == 0)
			M[a[i]] = 1;
		else M[a[i]]++;
	}

	cout<<"the characters that appears only once are:"<<endl;
	for(int i=0;i<a.size();i++)
	{
		if(M[a[i]] == 1)
		cout<<a[i]<<" "<<M[a[i]]<<endl;
	}
	cout<<endl;
	
	return 0;

}

