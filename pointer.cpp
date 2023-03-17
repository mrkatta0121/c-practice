 #include<iostream>
#include<string>
using namespace std;
int add(int p, int q); 
int sub(int r, int s);  //function declaration
int main()
{
	int a,b,c,d,e,f;
	cout<<"enter a value: "<<endl;
	cin>>a;
	cout<<"enter b value: "<<endl;
	cin>>b;
	cout<<"enter e value: "<<endl;
	cin>>e;
	cout<<"enter f value: "<<endl;
	cin>>f;
	c=add(a,b);
	d=sub(e,f);  //function call
	cout<<"addition of a,b two numbers : "<<c<<endl;
	cout<<"sub of e,f of two numbers : "<<d<<endl;
	return 0;
}

	int add(int p, int q) // function definition
	{
	return(p+q);

}
	int sub(int r, int s) // function definition
	{
	return(r-s);

}