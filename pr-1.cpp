#include<iostream>
using  namespace std;

int main(){
	int score;
	char grade;
	
	//inpute score from user
	
	cout<<"Enter your score out of 100:";
	cin>>score;
	
	//calculate gradfe udsing  ternary operater
	
	(score>=90)?
		cout<<"Grade A":
	(score>=80)?
		cout<<"Grade B":
	(score>=70)?
		cout<<"Grade C":
	(score>=60)?
		cout<<"Grade D":
	(score>=90)?
		cout<<"Faile":	
		
	cout<<"youe grade is"<<grade<<"";	
	
	//additionnal comment swich-case
	
	switch(grade){
		case 'A':
			cout<<"Excellent Work.."<<endl;
			break;
		case 'B':
			cout<<"Well done.."<<endl;
			break;
		case 'C':
			cout<<"Good job.."<<endl;
			break;
		case 'D':
			cout<<"You pass but coul do better.."<<endl;
			break;
		case 'F':
			cout<<"Sorry youm are faile.."<<endl;
			break;
			default:
				cout<<"Invalide grade"<<endl;
			break;
	}
	
	//if-else
	
	
		if (grade >= 'A'&& grade  <= 'D'){
			cout <<"congratulation you are the next level."<<endl;
		}
		else{
			cout <<"please try againe next time."<<endl;
			
			return 0;
		}
}
