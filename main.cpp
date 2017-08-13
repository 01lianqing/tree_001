#include<iostream>
#include<cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
	int a,b;
	char ch;
	cin>>a>>b>>ch;
	switch(ch){
		case '+':
		cout<<a+b<<endl;
		break;
		default:
		break;
	}
	cout<<"hello world"<<endl;
	return 0;
}