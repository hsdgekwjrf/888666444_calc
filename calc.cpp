#include <iostream>
#include <cmath>
using namespace std;
int main(){
	cout<<"Loading...\n";
	string calc_mode;
	long double calc_math;
	double calc_temp;
	string version="v1.0.4";
	cout<<"   ____      _\n  / ___|__ _| | ___\n | |   / _` | |/ __|\n | |__| (_| | | (__\n  \\____\\__,_|_|\\___|\n";
	cout<<"--------------------------------------------------\nCalc "<<version<<"\nCommand: + , - , * , / , ** , || , AC , exit , ==\nAttention:\nIf it's 'inf' please input 'ac' or 'AC'\nInstructions for use:\n--------------------------------------------------\n>> 1\n\n>> +\n\n>> 1\n=2\n>>\n--------------------------------------------------";
	calc:
 	cout<<"\n>> ";
	cin>>calc_math;
	while(!cin.good()){
		cout<<"[!]Type Error";
		cout<<"\n>> ";
		cin.clear();
		cin.ignore();
		cin>>calc_math;
	}
	while(true){
		cout<<"\n>> ";
		cin>>calc_mode;
		if(calc_mode=="+"){
			cout<<"\n>> ";
			cin>>calc_temp;
			calc_math+=calc_temp;
			cout<<"="<<calc_math;
		}
		else if(calc_mode=="-"){
			cout<<"\n>> ";
			cin>>calc_temp;
			calc_math-=calc_temp;
			cout<<"="<<calc_math;
		}
		else if(calc_mode=="*"){
			cout<<"\n>> ";
			cin>>calc_temp;
			calc_math*=calc_temp;
			cout<<"="<<calc_math;
		}
		else if(calc_mode=="/"){
			cout<<"\n>> ";
			cin>>calc_temp;
			if(calc_temp==0){
				cout<<"[!]Error";
				continue;
			}
			calc_math/=calc_temp;
			cout<<"="<<calc_math;
		}
		else if(calc_mode=="%"){
			cout<<"\n>> ";
			cin>>calc_temp;
			if(calc_temp==0){
				cout<<"[!]Error";
				continue;
			}
			calc_math=fmod(calc_math, calc_temp);
			cout<<"="<<calc_math;
		}
		else if(calc_mode=="**"){
			cout<<"\n>> ";
			cin>>calc_temp;
			calc_math=pow(calc_math,calc_temp);
			cout<<"="<<calc_math;
		}
		else if(calc_mode=="||"){
			calc_temp=calc_math;
			calc_math=abs(calc_temp);
			cout<<"="<<calc_math;
		}
		else if(calc_mode=="AC" or calc_mode=="ac"){
			goto calc;
		}
		else if(calc_mode=="EXIT" or calc_mode=="exit"){
			return 0;
		}
		else if(calc_mode=="=="){
			cout<<"\n>> ";
			cin>>calc_temp;
			if(calc_math==calc_temp){
				cout<<calc_math<<"="<<calc_temp;
			}
			else if(calc_math>calc_temp){
				cout<<calc_math<<">"<<calc_temp;
				cin.clear();
				cin.ignore();
			}
			else if(calc_math<calc_temp){
				cout<<calc_math<<"<"<<calc_temp;
			}
			else{
				cout<<"[!]Error!";
				continue;
			}
		}
		else{
			cout<<"[!]Command Error";
			cout<<"\n>> ";
			cin>>calc_mode;
			continue;
		}
	}
}
