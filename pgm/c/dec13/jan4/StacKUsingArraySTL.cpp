#include "iostream"
#include "stdio.h"
#include "stack"
using namespace std;

void Reverse(char *c,int n)
{
	stack<char> s;
	int i,j;
	// printf("%d\n",c );
	// printf("%d\n",c+1 );
	
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
	char cstr[8]="manohar";
	printf("%s\n",cstr );
	Reverse(cstr,7);
	cout << cstr << "\n" ;
	return 0;
}