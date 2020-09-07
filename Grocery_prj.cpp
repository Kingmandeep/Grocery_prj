#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class mandeepgrocery{
	char name[1000],add[1000],y;
	string mb;
	float bal;
	float amount = 0.0;
	
	public:
		
		void New_customer_Account();
		void Customer_Account_Details();
		void deposite_money();
	    void Customer_Order();
	    void Customer_Balance();
};
void mandeepgrocery :: New_customer_Account()
{
	cout<<"--------New Customer Account ----------"<<endl;
	cout<<"Enter Your Full Name : \t";
	cin.ignore();
	cin.getline(name,1000);
	
	cout<<"Enter Your Address: \t";
	cin.ignore();
	cin.getline(add,1000);
	
	cout<<"Enter Your Mobile number : \t";
    cin>>mb;
	
	cout<<"Enter Your first Deposite Amount : \t";
	cin>>bal;
	
	cout<<"Congratulation, You are successfully create a New Account in My Grocery Shop \n";
}
void mandeepgrocery :: deposite_money()
{
	float d;
	cout<<"Enter your deposite money: "<<endl;
	cin>>d;
	bal+=d;
	cout<<"Your Cuurent balance is: "<<bal<<endl;
}
void mandeepgrocery :: Customer_Account_Details()
{
	cout<<"----------Your Account Detail ----------"<<endl;
	cout<<"Account Holder : "<<name<<endl;
	cout<<"Customer Address : "<<add<<endl;
	cout<<"Customer Mobile number: "<<mb<<endl;
	cout<<"Your Total Amount: "<<bal<<endl;
	
	
}
void mandeepgrocery :: Customer_Order()
{
	float co;
	
	cout<<"----------- Order of Products -----------"<<endl;
	cout<<"Enter Number of total Order: "<<endl;
	int n;
	cin>>n;
	string o[1000];
	float on[100];
	for(int i=1;i<=n;i++)
	{
		cout<<"Enter your Order Name: \n";
		cin>>o[i];
		cout<<"Enter peice/kg of "<<o[i]<<endl;
		cin>>on[i];
		co=on[i]*100;
		cout<<"Your total  Order Price is:  "<<co;
		bal=bal-co;
		cout<<"Your Current balance is: "<<bal;
	}
}
void mandeepgrocery :: Customer_Balance()
{
	float amount;
	cout<<"--------------------------------- Customer Balance -------------------------------"<<endl;
	cout<<"Account Holder : "<<name<<endl;
	
    bal=bal - amount;
	cout<<"Your Current Balance is: "<<bal<<endl;
	
}

int main()
{
	int c,x;
	mandeepgrocery obj;
	do
	{
	
	cout<<"----------------------------------------- THE GROCERY SHOP ----------------------------------------------"<<endl;
	cout<<"1) New Customer Account \n";
	cout<<"2) Customer Account Details \n";
	cout<<"3) Deposite Money \n";
	cout<<"4) Customer Order\n";
	cout<<"5) Customer Balance \n";
	cout<<"6)Exit \n";
	cin>>c;
	switch(c)
	{
		case 1:
			obj.New_customer_Account();
			break;
		case 2:
			obj.Customer_Account_Details();
			break;
		case 3:
			obj.deposite_money();
			break;
		case 4:
			obj.Customer_Order();
			break;
		case 5:
			obj.Customer_Balance();
			break;
		case 6:
			if(c==6)
			{
				exit(1);
			}
		default:
			cout<<"        Invalid Input         \n";
			cout<<"        Please Try Again       \n";
			break;
	}
	cout<<"\n do you want to select next option then press :: y \n";
	cout<<"if you want to exit then press :: N ";
	x=getch();
	if(x=='n'||x=='N')
	exit(0);
}while(x=='y'|| x=='Y');

    getch();
	return 0;
}
