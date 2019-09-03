#include <iostream>
#include <string.h>
#define MAX=20;
using namespace std;

class paranthesis
{
	public:

	int count=0,counter=0,counted=0,a=0,b=0,c=0;
	int top=-1;
	char exp[20];
	char stack[20];

	bool push()
	{
		if(top>=20)
		{
		cout<<"stack overflow"<<endl;
		return false;
		}
		else
		{
			stack[exp[top++]];
			return true;
		}
	}

	void pop()
	{
		if(top==-1)
		{
			cout<<"stack underflow "<<endl;
		}
		else
		{
			stack[exp[top--]];

		}

	}

	void getdata()
	{
		cout<<"Enter the expression: "<<endl;
		cin>>exp;
	}

	void check()
	{
		int i;
		char temp;
		for(i=0;exp[i]!='\0';i++)
		{
			if(exp[i]=='('||exp[i]=='{'||exp[i]=='[')
			{
				push();
				if(exp[i]=='(')
				{
					count++;
				}
				else if(exp[i]=='{')
				{
					counter++;
				}
				else
				{
					counted++;
				}
			}
			else if(exp[i]==')'||exp[i]==']'||exp[i]=='}')
			{
				pop();
				if(exp[i]==')')
				{
					a++;
				}
				else if(exp[i]=='}')
				{
					b++;
				}
				else
				{
					c++;
				}
			}
		}

		if((top==-1)&&(count==a||counter==b||counted==c))
		{
			cout<<" expression is balanced parenthesis "<<endl;
		}

		else
		{
			cout<<"expression is unbalanced parenthesis "<<endl;
		}

	}



};

int main()
{
	paranthesis x;
	x.getdata();
	x.check();

	return 0;
}
