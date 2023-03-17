#include<iostream>
using namespace std;
main()
{
//	int i;
//	for(i=100; i>=0; i--)
//	{
//		if(i==35){
//			break;
//			cout<<"continue"<<i<<endl;
//			  
//		}
//		cout<<"time start"<<i<<endl;
//		
//	}
int i;
int a;
int bag=0;
cout<<"enter a number: ";
cin>>a;
for(i=1;i<=a; i++){
	if(a%i==0)
	{
	 bag++;
	}
	
}
if(bag==2){
	cout<<a<<" is a prime number"<<endl;
} else{
	cout<<a<<" is not a prime number";
}
//consecutive number;
// int i;
// int a;
// int sum=0;
// cout<<"give a number: "<<endl;
// cin>>a;
//for(i=1; i<=a; i++){
//	sum=sum+i;
//	
//}
//
//cout<<"sum of all consecutive numbers are " <<sum<<endl;

int a;
int i;
int j;
 cout<<"enter which table you need"<<endl;
 cin>>a;
cout<<"enter range of your table"<<endl;
cin>>j;

for(i=1;i<=j;i++){
	cout<<a<<" * "<<i<<" = "<<a*i<<endl;
}


}