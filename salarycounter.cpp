#include<iostream>

using namespace std;

int main()
{	
 	int id,half_day,full_day;
	float salary,bonus,fund,total_amount,total_cutoff;
	
	cout<<"Kindly Enter the Id=";
	cin>>id;
	cout<<"Kindly Enter the Salary=";
	cin>>salary;
	cout<<"Kindly Enter the Bonus=";
	cin>>bonus;
	cout<<"Kindly Enter the full day off=";
	cin>>full_day;
	cout<<"Kindly Enter half day off=";
	cin>>half_day;
	cout<<"Kindly Enter Fund amount=";
	cin>>fund;
	
	salary=salary+bonus;
	total_cutoff=(1500*full_day)+(750*half_day)+fund;
	
	total_amount=salary-total_cutoff;
	
	if(total_amount<=0)
	{
		cout<<"The salary is loss of ="<<total_amount<<endl;
	}
	else
	{
	    cout<<"The salary credits amount ="<<total_amount<<endl;	
	}
	cout<<"Data Showed Successfully";
}
