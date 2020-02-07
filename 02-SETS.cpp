#include <iostream>
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

class Sets{
	public:
		char *setA= new char[100], *setB= new char[100], *result= new char[100], *result2= new char[100];
		int i, j, choice, counter;
		void input();
		void unionSet();
		void interSet();
		void diffSet();
		void complement();
};

int main(int argc, char** argv) {
	Sets set;
	set.input();
	
	return 0;
}

void Sets::input(){
	cout<<"NOTICE TO THE PUBLIC!!!\n";
	cout<<"(SEPARATE THE ELEMENTS WITH SPACE)\n";
	cout<<"\nEnter elements of the first set:\n \n";
	gets(setA);
	cout<<"\nEnter elements of the second set:\n \n";
	gets(setB);
	unionSet();
	interSet();
	complement();
	diffSet();
}

void Sets::unionSet(){
	cout<<"Set A = "<<setA<<endl;
	cout<<"Set B = "<<setB<<endl;
	cout<<"\nA union B = {"<<setA<<","<<setB<<'}'<<endl;
}

void Sets::interSet(){
	counter=0;
	for(i=0;i<strlen(setA);i++){
		for(j=0;j<strlen(setB);j++){
			if(setA[i]==setB[j] && setA[i]!=',' && setA[i]!=' '){
				result[counter]=setA[i];
				result[counter+1]=',';
				result[counter+2]=' ';
				counter+=3;
			}
		}
	}
	cout<<"\nA intersect B = {";
		for(i=0;i<strlen(result)-2;i++){
		cout<<result[i];
	}
	cout<<'}'<<endl;
}

void Sets::complement(){
	strcpy(result, setA); 
	strcpy(result2, setB);
	for(i=0;i<strlen(setB);i++){
			for(j=0;j<strlen(setA);j++){
				if(setB[i]==setA[j]){
					setB[i]='0';
				}
			}
		}
		cout<<"\nA compliment = {";
		for(i=0;i<strlen(setB);i++){
			if(setB[i]!='0') cout<<setB[i]<<", ";
		} cout<<'}'<<endl;
	for(i=0;i<strlen(result);i++){
			for(j=0;j<strlen(result2);j++){
				if(result[i]==result2[j]){
					result[i]='0'; 
				}
			} 
		} 
		cout<<"B compliment = {"; 
		for(i=0;i<strlen(result);i++){
			if(result[i]!='0') cout<<result[i]<<", ";
		} cout<<'}'<<endl;
}


void Sets::diffSet(){
	cout<<"\nFor the Symmetrical Difference\n";
	cout<<"\n(1)A-B\t(2)B-A\nChoice:\n ";
	cin>>choice;
	if(choice==1){ 
		for(i=0;i<strlen(setA);i++){
			for(j=0;j<strlen(setB);j++){
				if(setA[i]==setB[j]){
					setA[i]='0'; 
				}
			}
		} 
		cout<<"\nA-B = {";
		for(i=0;i<strlen(setA);i++){
			if(setA[i]!='0') cout<<setA[i]<<", ";
		} cout<<'}'<<endl;
	}
	else if(choice==2){
		for(i=0;i<strlen(setB);i++){
			for(j=0;j<strlen(setA);j++){
				if(setB[i]==setA[j]){
					setB[i]='0';
				}
			}
		}
		cout<<"\nB-A = {";
		for(i=0;i<strlen(setB);i++){
			if(setB[i]!='0') cout<<setB[i]<<", ";
		} cout<<'}'<<endl;
	}
	else{
		cout<<"\nInvalid choice";
	}
}
