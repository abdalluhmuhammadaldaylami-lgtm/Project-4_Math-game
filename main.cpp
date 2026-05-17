#include<iostream>
using namespace std;

enum enquestion{easy=1,mad=2,hard=3,mix=4};
enum enoptype{add=1,sub=2,mul=3,div=4,misop=5};

struct stquestion{
	int number1=0;
	int number2=0;
	enoptype optype;
	enquestion questionlevel;
	int coractenswar=0;
	int playenswar=0;
	bool enswarresult=false;
};
struct stquizz{
	stquestion questionlist[100];
	enoptype optype;
	enquestion questionlevel;
	short numberofquestion=0;
	int woringenswar=0;
	int coractenswarresult=0;
	bool ispass=false;
};


int ranadnumber(int from,int to){
	int num=rand()%(to-from+1)+from;
	return num;
}
short readhowmnyquestion(){
	int num;
	do{
cout<<" ==============00==============\033[0m\n";
cout<<"\033[1;41m   enter the question 1 to 20 :\033[0m\n";
cout<<" ==============00==============\033[0m\n";
cout<<"                                  ";
		cin>>num;
	}while(num<1||num>10);
	return num;
}
enquestion readquestionlevel(){
	int cho=0;
	do{
	cout<<"==============00==============\n";cout<<"\033[1;42m   Enter the type of test \033[0m\n";
	
	cout<<"==============00==============\n";
	cout<<"\t\033[1;33m----------------\n";
	cout<<"\t[1]-easy test  :\n\t[2]-averag test:\n\t[3]-hard test  :\n\t[4]-mix test   :\n";
	cout<<"\t----------------\033[0m\n";
	cout<<"                         ";
	cin>>cho;
	}while(cho<1||cho>4);
	return (enquestion)cho;
}
enoptype readquestionoptype(){
	int num2=0;
	do{
			cout<<"================00==============\n";cout<<"\033[1;42m   Enter The Type Fo Calculation \033[0m\n";
	
	cout<<"================00==============\n";
		cout<<"\t--------------------\n";
		cout<<"\t[1]-collection    +:\n\t[2]-subtract      -:\n\t[3]-multiply      *: \n\t[4]-division      /:\n\t[5]-mixopretion (+-*/):\n\t";
		cout<<"--------------------\n                             ";
	cin>>num2;
	}while(num2<1||num2>5);
	return (enoptype)num2;
}


int simplcalactor(int number1,int number2,enoptype optype){
	switch(optype){
		case enoptype::add:
		return number1+number2;
			case enoptype::sub:
		return number1-number2;
			case enoptype::mul:
		return number1*number2;
			case enoptype::div:
		return number1/number2;
	}
}
		

enoptype readoptype(){
	int op=ranadnumber(1,4);
	return(enoptype) op;}
	
stquestion genratquestion( enquestion questionlevel  ,enoptype optype ){
	stquestion question;
	if(questionlevel==enquestion::mix){
	questionlevel=(enquestion)ranadnumber(1,3);
	}
	if(optype==enoptype::misop){
		optype=(enoptype)ranadnumber(1,4);
	}
	question.optype=optype;
	switch(questionlevel){
		case enquestion::easy:
		question.number1=ranadnumber(1,10);
		question.number2=ranadnumber(1,10);
		question.coractenswar=simplcalactor(question.number1,question.number2,question.optype);
		question.questionlevel==questionlevel;
		return question;
		
				case enquestion::mad:
		question.number1=ranadnumber(10,20);
		question.number2=ranadnumber(10,20);
		question.coractenswar=simplcalactor(question.number1,question.number2,question.optype);
		question.questionlevel==questionlevel;
		return question;
	
				case enquestion::hard:
		question.number1=ranadnumber(50,100);
		question.number2=ranadnumber(50,100);
		question.coractenswar=simplcalactor(question.number1,question.number2,question.optype);
		question.questionlevel==questionlevel;
		return question;	
	}
	return question;
	}
	string getoptype(enoptype optype){
		switch(optype){
			case enoptype::add:
			return"+";
				case enoptype::sub:
			return"-";
				case enoptype::mul:
			return"*";
				case enoptype::div:
			return"/";
			default :
			return"mix";
		}
	}
			

void getgenaratquestion(stquizz &quizz){
	stquestion question;
	for(int i=0; i<quizz.numberofquestion ;i++){
quizz.questionlist[i]=genratquestion(quizz. questionlevel ,quizz.optype);
	}}
	
	void  coracttheensar(stquizz &quizz,int i){
if(quizz.questionlist[i].playenswar == quizz.questionlist[i].coractenswar){
			quizz.questionlist[i].enswarresult=true;
			quizz.coractenswarresult++;
			cout<<"\033[1;42m woring enswar :-)\033[0m"<<endl;
		//	cout<<quizz.questionlist[i].coractenswar;
			cout<<"\n";
		}
			else{
				quizz.questionlist[i].enswarresult=false;
			cout<<"\033[1;41m woring enswar :-(\033[0m"<<endl;
				cout<<"the reit enswar is :";
			cout<<quizz.questionlist[i].coractenswar<<endl;
			quizz.woringenswar++;
			}
	}
	int readquizzenswar(){
		int aswar=0;
		cin>>aswar;
	
		return aswar;
	
	}
	void printquestion(stquizz& quizz ,int i){
		
cout<<"\n  ●question  ["<<i+1<<"/"<<quizz.numberofquestion<<"]..?\n\n";
cout<<"   "<<quizz.questionlist[i].number1<<endl;
cout<<"       ";
cout<<getoptype(quizz.questionlist[i].optype)<<endl;
cout<<"   "<<quizz.questionlist[i].number2<<" ";
		cout<<"\n ________\n = ";
		
	}
		
void askquestionenswar(stquizz& quizz){
	for(int i=0; i<quizz.numberofquestion;i++){
		printquestion(quizz, i);
 quizz.questionlist[i].playenswar=readquizzenswar();
 coracttheensar(quizz,i);
	}
	quizz.ispass=(quizz. coractenswarresult>=quizz.woringenswar);
}

string getfinalresult(bool pass){
	if(pass)
	return"pass :-)";
	else
	return "file :-(";
}
string getlevel(enquestion questionlevel){
	string arr[4]={"Easy test","averag test","hard test","mix test"};
	return arr[questionlevel-1];
}

void printresult(stquizz& quizz){
	system("cls");
	cout<<endl;
cout<<"\033[1;33m===================00=================\033[0m\n";
cout<<"  \033[1;41m   finl is result is "<<getfinalresult(quizz.ispass)<<"\033[0m";
cout<<"\n\033[1;33m===================00=================\033[0m\n";
	cout<<"   number of queztion     :"<<quizz.numberofquestion<<endl;
	cout<<"   question level         :"<<getlevel(quizz.questionlevel)<<endl;
cout<<"   noprtion type          :"<<getoptype(quizz.optype)<<endl;
cout<<"   nnumber of enswar      :\033[1;42m"<<quizz.coractenswarresult<<"\033[0m"<<endl;
cout<<"   number of reit enswar  :\033[1;41m"<<quizz.woringenswar<<"\033[0m"<<endl;
cout<<"\n\033[1;33m======================================\033[0m\n";
}

void playgame(){
stquizz quizz;
quizz.numberofquestion=readhowmnyquestion();
system("cls");
quizz.questionlevel=readquestionlevel();
system("cls");
quizz.optype=readquestionoptype();
getgenaratquestion(quizz);
system("cls");

askquestionenswar(quizz);
printresult(quizz);
}
void systemcls(){
	system("cls");

}
void startgame(){
	char chois='y';
	do{
		 systemcls();
		 playgame();
	cout<<"wat do you want agin [Y/N]:";
	cin>>chois;
	}while(chois=='y'||chois=='Y');
	}	





int main(){
	srand(time(NULL));
	startgame();
}	
