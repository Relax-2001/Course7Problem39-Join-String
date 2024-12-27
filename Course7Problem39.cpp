#include <iostream>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

string JoinString(vector <string>  vWords , string Delem)
{

	string JoinedString = "";

	for (string & Word : vWords)
	{
		JoinedString += Word + Delem;
	}

	return JoinedString.substr(0 , JoinedString.length() - Delem.length() );
}


int main()
{
 
	vector <string> vWords{"Mahmoud" , "Mohammed" , "Ali" , "Omar"};
	cout << (JoinString( vWords  , ", "));


	return 0;
}