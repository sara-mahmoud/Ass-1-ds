#include <iostream>
#include <string>
using namespace std;

int convert( string s)
{
	int n = s.length() - 1;

	if(s.empty())
		return 0;
//	if(s[0] == '-')
//		return convert(s.substr(1, n--) ) ;

	if ( s.length()  == 1)
	{
		if(isdigit(s[0]))
			return s[0]- '0';
		else
			cout<<"Invalid numeric character: "<<s<<endl;
			return 0;
	}
	 return convert(s.substr(n,1)) + convert(s.substr(0, n--) ) * 10 ;
}
int main()
{
    string test1("55555");
    cout<<"The Value of \""<<test1<<"\" is " <<convert(test1)<<endl;
    return 0;
}
