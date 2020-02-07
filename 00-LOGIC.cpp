//OO-LOGIC.cpp
#include<iostream>
#include<string.h>
using namespace std;
class logic{	
	public:
		int p,q;
		void input();
		void conjunction();
		void disjunction();
		void negation();
		void conditional();
		void biconditional();
};

int main() 
{
	
	logic a;
	a.input();
	a.conjunction();
	a.disjunction();
	a.negation();
	a.conditional();
	a.biconditional();
	return 0;
}

void logic::input()
{
	cout<<"Base number: 100\nENTER TWO NUMBERS: ";
	cin>>p;
	cin>>q;
}

void  logic::conjunction()
{

	if(p<=100&&q<=100)
	{
		cout<<"Conjunction: (p<=100&&q<=100)\n";
		cout<<"p="<<p<<" q="<<q<<endl;
		cout<<"TRUE\n";
	}
	else
	{
		cout<<"Conjunction: (p<=100&&q<=100)\n";
		cout<<"p="<<p<<"  q="<<q<<endl;
		cout<<"FALSE\n";
	}
}

void logic::disjunction()
{
	if(p<=100||q<=100)
	{
		cout<<"\nDisjunction: (p<=100||q<=100)\n";
		cout<<"p="<<p<<" q="<<q<<endl;
		cout<<"TRUE\n";
	}
	else
	{
		cout<<"\nDisjunction: (p<=100||q<=100)\n";
		cout<<"p="<<p<<" q="<<q<<endl;
		cout<<"FALSE\n";
	}
}

void logic::negation()
{
	cout<<"\nNegation:";
	cout<<"\nTrue statements become false: (p<=100) and (q<=100)\n";
	if(p<=100)
	{
		cout<<"P "<<p<<"<=100"<<"\t"<<"P is FALSE\n"<<endl;
		
	}
	else
	{
		cout<<"P "<<p<<"<=100"<<"\t"<<"P is TRUE\n"<<endl;
	}

	if(q<=100)
	{
		cout<<"Q "<<q<<"<=100"<<"\t"<<"Q is FALSE\n"<<endl;
		
	}
	else
	{
		cout<<"Q "<<q<<"<=100"<<"\t"<<"Q is TRUE\n"<<endl;
	}
}

void logic::conditional()
{
	if(p<=100&&q<=100)
	{
		cout<<"Conditional Proposition: (p<=100&&q<=100)\n";
		cout<<"TRUE\n";
	}
	if(p<=100&&q>=100)
	{
		cout<<"Conditional Proposition: (p<=100&&q<=100)\n";
		cout<<"FALSE\n";
	}
	if(p>=100&&q<=100)
	{
		cout<<"Conditional Proposition: (p<=100&&q<=100)\n";
		cout<<"TRUE\n";
	}
	if(p>=100&&q>=100)
	{
		cout<<"Conditional Proposition: (p<=100&&q<=100)\n";
		cout<<"TRUE\n";
	}
}

void logic::biconditional()
{
	if((p<=100&&q<=100)||(p>=100&&q>=100))
	{
		cout<<"\nConditional Proposition: (p<=100&&q<=100)\n";
		cout<<"TRUE\n";
	}
	else cout<<"\nBicondiotional Proposition: (p<=100&&q<=100)\nFALSE\n";
}
