
/*                                         ROCK_PAPER_SCISSOR_GAME                               */


// ############################# Declaring Header Files ###################################

#include<iostream>
#include<cstring>
#include<cstdlib>			
#include<conio.h>
#include<windows.h>


// ############################# Declaring Variables ###################################

using namespace std;
int inputuser();
int winner(string,string);
void display();

// ####################### Code Implementation #########################

int main()
{

string name;
cout<<"Enter your name:-\n";
getline(cin,name);
cout<<endl;
char input;
int score=0;

// ############################ Conditional Statement ###########################

do
{
	system("cls");
	display();
	score=score+inputuser();
	cout<<"Try Again  -  Y/N \n";
    cin>>input;
	cout<<endl;	
}

while(input!='N');
for(int i=0;i<name.size();i++)
{
	cout<<name[i];
	Sleep(100);
}

//################################ Result  #############################

cout<<"  your score is :- "<<score<<endl;

cout<<"\n\n********************************************** PLAY MORE **********************************************\n\n"<<endl;
}


//########################### Function Declaration ##########################

int inputuser()
{
	int input;
	string option;
cout<<"1. Rock"<<endl;
cout<<"2. Paper"<<endl;
cout<<"3. Scissor"<<endl;
try_again:
cout<<"Enter your choosed option:-\n";
cin>>input;
cout<<endl;	

// ############################ Declaring Conditional Statements To Satisfy Conditions ###########################

if(input==1)
{
	option="Rock";
}
else if(input==2)
{
	option="Paper";
}
else if(input==3)
{
	option="Scissor";
}
else
{
	cout<<"invalid input , sorry please try again "<<endl;
	goto try_again;
}

//################# Input from 2nd user which is Computer ###################

int computerinput=rand()%3 + 1;	 // by default it take 1-3 random number
string com_input;
if(computerinput==1)
{
	com_input="Rock";
}
else if(computerinput==2)
{
	com_input="Paper";
}
else if(computerinput==3)
{
	com_input="Scissor";
}
cout<<"Computer choose:-"<<com_input<<endl;

//########################### Result B/W two player #########################

int output=winner(option,com_input);
if(output==1)
{
	cout<<"You win . Congratulations\n";
	return 1; // user1 score is affected
}
else if(output==0)
{
	cout<<"Sorry  ! Computer won"<<endl;
	return 0; // user1 score is not affected
}
else if(output==-1)
{
	cout<<"Game Draw"<<endl;
	return 0; // user1 score is not affected
}
}

int winner(string option,string com_input)
{
	if(com_input=="Rock")
	{
		if(option=="Rock")
		{
			return -1;
		}
		else if(option=="Scissor")
		{
			return  0;
		}
		else if(option=="Paper")
		{
			return 1;
		}
	}

	if(com_input=="Scissor")
	{
		if(option=="Rock")
		{
			return 1;
		}
		else if(option=="Scissor")
		{
			return  -1;
		}
		else if(option=="Paper")
		{
			return 0;
		}
	}
	if(com_input=="Paper")
	{
		if(option=="Rock")
		{
			return 0;
		}
		else if(option=="Scissor")
		{
			return  1;
		}
		else if(option=="Paper")
		{
			return -1;
		}
	}
}
 
//############################# Display Rules of Game ########################

void display()
{

cout<<"________________________________Rock, Scissor ,Paper Game_________________________________\n\n"<<endl;
	cout<<endl;
	cout<<"\t Game rules : "<<endl;
	cout<<"\t ->Rock crushes the scissor"<<endl;
	cout<<"\t ->Scissor cuts the paper"<<endl;
	cout<<"\t ->Paper covers the rock"<<endl;
	cout<<endl;
}