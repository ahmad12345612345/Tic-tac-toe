#include<iostream>
using namespace std;
int main()
{
	int number;	cout<<"Enter ur number: ";
	cin>>number;
	cout<<"Prime numbers between 0 and "<<number<<" are: ";
	if(number==2)
	{
		cout<<"2"<<endl;
	}
	
	
	if((number==4)||(number==3))
	{
		cout<<"2"<<endl;
		cout<<"3"<<endl;	
	}
	if(number>=5){
		cout<<"2"<<endl;
		cout<<"3"<<endl;
		cout<<"5"<<endl;
}
for(int i=2;i<=number;i++){
	
	
	for(int j=2;j<=i;j++){
		int k=i;
		if(i%j!=0){
			if(i%k!=0)
			cout<<i<<endl;
		}
		else{
		}
	}
}
return 0;
}
