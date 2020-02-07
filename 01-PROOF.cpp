#include<iostream>
using namespace std;

class proof{
	public:
		int choice;
		void input();
		void one();
		void two();
		void three();
		void identity();
		void dominant();
		void idempotent();
		void doubleNegation();
		void commutative();
		void associative();
		void distributive();
		void demorgans();
		void absorption();
		void negation();
};

int main()
{
	proof a;
	a.input();
	
	return 0;
}

void proof::input()
{
	cout<<"Enter Choice: ";
	cout<<"1- Table of Logical Equivalence\n2- Logical Equivalence Involving Conditional Propositions\n3- Logical Equivalence Involving Biconditional Propositions\n";
	cin>>choice;
	switch(choice)
	{
		case 1:
			one();
			break;
		case 2:
			two();
			break;
		case 3:
			three();
			break;
		default:
			cout<<"Invalid choice";
	}
}
void proof::one()
{
	cout<<"\nPROOF\nTable of Logical Equivalences\n";
	cout<<"Enter choice: \n";
	printf("\n1- Identity\t2- Dominant\t3- Idempotent\t4- Double Negation\t5- Commutative\n6- Associative\t7- Distributive\t8- De Morgan's\t9- Absorption\t10- Negation\n");
	cin>>choice;
	switch(choice)
	{
		case 1:
			identity();
			break;
		case 2:
			dominant();
			break;
		case 3:
			idempotent();
			break;
		case 4:
			doubleNegation();
			break;
		case 5:
			commutative();
			break;
		case 6:
			associative();
			break;
		case 7:
			distributive();
			break;
		case 8:
			demorgans();
			break;
		case 9:
			absorption();
			break;
		case 10:
			negation();
			break;
		default:
			cout<<"Invalid choice";
	}
}

void proof::identity()
{
	cout<<"\nP ^ T = P";
	cout<<"P v F = P";
}

void proof::dominant()
{
	cout<<"\nP v T = T";
	cout<<"P ^ F = F";
}

void proof::idempotent()
{
	cout<<"\nP v P = P";
	cout<<"P ^ P = P";
}

void proof::doubleNegation()
{
	cout<<"\n - ( -P ) = P";
}

void proof::commutative()
{
	cout<<"\nP v Q = Q v P";
	cout<<"P ^ Q = Q ^ P";
}

void proof::associative()
{
	cout<<"\n( P v Q ) v R = P v ( Q v R )";
	cout<<"( P ^ Q ) ^ R = P ^ ( Q ^ R )";
}

void proof::distributive()
{
	cout<<"\nP v ( Q v R ) = (P v Q ) ^ ( P v R )";
	cout<<"P ^ ( Q v R ) = (P v Q ) v ( P v R )";
}

void proof::demorgans()
{
	cout<<"\n- ( P ^ Q ) = -P v -Q";
	cout<<"- ( P v Q ) = -P ^ -Q";
}

void proof::absorption()
{
	cout<<"\nP v ( P ^ Q ) = P";
	cout<<"P ^ ( P v Q ) = P";
}

void proof::negation()
{
	cout<<"\nP v -P = T";
	cout<<"P ^ -P = F";
}

void proof::two()
{
	cout<<"\nPROOF\nLogical Equivalence Involving Conditional Propositions\n";
	cout<<"P --> Q = ~P v Q\n";
	cout<<"P --> Q = ~Q --> ~Q\n";
	cout<<"P v Q = ~P --> Q\n";
	cout<<"( ~P --> ~Q ) = P ^ ~Q\n";
	cout<<"( P --> Q ) ^ ( P --> R ) = P --> ( P ^ R )\n";
	cout<<"( P --> R ) ^ ( Q --> R ) = ( P v Q ) --> R\n";
	cout<<"( P --> Q ) v (p --> R ) = P --> ( Q v R )\n";
	cout<<"( P --> R ) v ( Q --> R ) = ( P ^ Q ) --> R";
}

void proof::three()
{
	cout<<"\nPROOF\nLogical Equivalence Involving Biconditional Propositions\n";
	cout<<"P <--> Q = ( P --> Q ) ^ ( Q --> P )\n";
	cout<<"P <--> Q = ~P <--> ~Q\n";
	cout<<"P <--> Q = ( P ^ Q ) v ( ~P ^ ~Q )\n";
	cout<<"( ~P <--> ~Q ) = P <--> ~Q\n";
}
