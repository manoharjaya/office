#include "iostream"
#include "stdio.h"
#include "stack"
using namespace std;

void Reverse(char *c,int n)
{
	stack<char> s;
	int i,j;
	for ( i = 0; i < n; ++i)
	{
		s.push(c[i]);
	}

	for ( j = 0; j < n; ++j)
	{
		c[j]=s.top();
		s.pop();
	}

}
int main(int argc, char const *argv[])
{
	// printf("%s\n","hello world" );
	char cstr[50]="hello world";
	printf("%s\n",cstr );
	Reverse(cstr,11);
	cout << cstr ;
	return 0;
}