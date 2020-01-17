#include<iostream>
using namespace std;
int gcd_iterative(int num1, int num2);
int gcd_recursive(int num1, int num2);
int fact_iterative(int num);
int fact_recursive(int num);
int power_iterative(int m, int n);
int power_recursive(int m, int n);
int fibonacci_iterative(int k);
int fibonacci_recursive(int k);
int main()
{
	int num1,num2,num,m,n,k;
    cout<<"Enter numbers you want to calculate GCD of ";
    cin>>num1>>num2;
    cout<<"GCD through iterative function "<<gcd_iterative(num1,num2)<<endl;
    cout<<"GCD through recursive function "<<gcd_recursive(num1,num2)<<endl;
    cout<<"Enter number you want to calculate factorial of ";
    cin>>num;
    cout<<"Factorial through iterative function "<<fact_iterative(num)<<endl;
    cout<<"Factorial through recursive function "<<fact_recursive(num)<<endl;
    cout<<"Enter any number and its power to be calculated ";
    cin>>m>>n;
    cout<<m<<" to the power "<<n<<" by iterative function is "<<power_iterative(m,n)<<endl;
    cout<<m<<" to the power "<<n<<" by recursive function is "<<power_recursive(m,n)<<endl;
    cout<<"Enter number of terms upto fibonacci series is to be printed ";
    cin>>k;
    cout<<k<<" terms of fibonacci series by iterative method are ";
    fibonacci_iterative(k);
    cout<<"\n"<<k<<" terms of fibonacci series by recursive method are ";
    if(k==1)
    cout<<"0";
    else if(k==2)
    cout<<"0 1";
    else
    cout<<"0 1 ";
    fibonacci_recursive(k);
}
int gcd_iterative(int num1, int num2)
{
    if((num1<0)||(num2<0))
    cout<<"Invalid Input"<<endl;
    else
    {
		int temp=0;
    	while(num2!=0)
    	{
        	temp=num1;
        	num1=num2;
        	num2=temp%num2;
    	}
    	return num1;
	}
}
int gcd_recursive(int num1, int num2)
{
	if((num1<0)||(num2<0))
    cout<<"Invalid Input"<<endl;
    else if((num1>num2)&&(num1%num2)==0)
        return num2;
    else 
        return gcd_recursive(num2,num1%num2);
}
int fact_iterative(int num)
{
	int fact=1;
	if(num<0)
	cout<<"Invaid Input"<<endl;
    else if((num==1)||(num==0))
        return 1;
    else
    {
        while(num>1)
        {
            fact*=num;
            num--;
        }
        return fact;
    }
}
int fact_recursive(int num)
{
	if(num<0)
	cout<<"Invalid Input"<<endl;
    else if(num==0)
        return 1;
    else
        return num*fact_recursive(num-1);
}
int power_iterative(int m, int n)
{
	if(n<0)
	cout<<"Invalid Input"<<endl;
    else if(n==0)
        return 1;
    else
    {
        int ans=1;
        for(int i=1;i<=n;i++)
        ans*=m;
        return ans;
    }
}
int power_recursive(int m,int n)
{
	if(n<0)
	cout<<"Invalid Input"<<endl;
    else if(n==0)
        return 1;
    else
        return m*power_recursive(m,n-1);
}
int fibonacci_iterative(int k)
{
	if(k<0)
	cout<<"Invalid Input"<<endl;
	else
	{
    int next=0,first=0,sec=1;
    for(int i=0;i<k;i++)
    {
        if(i<=1)
            next=i;
        else
        {
            next=first+sec;
            first=sec;
            sec=next;
        }
        cout<<next<<" ";
    }
	}
}
int fibonacci_recursive(int k)
{
	if(k<0)
	cout<<"Invalid Input"<<endl;
	else
	{
    static int first=0,sec=1,next=0;
    if(k-2>0)
    {
        next=first+sec;
        first=sec;
        sec=next;
        cout<<next<<" ";
        fibonacci_recursive(k-1);
    }
	}
}

