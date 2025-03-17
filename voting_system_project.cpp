#include<iostream>
using namespace std;

int bjp=0, congress=0, aap=0, bsp=0,nota=0;
void electionResult()
{
	int wonByvote;
	if(bjp>congress&&bjp>aap&&bjp>bsp)
	{
		cout<<"\n********************************************";
		cout<<"\n    BJP won the election   \n"<<endl;
		cout<<"     Total vote of BJP :"<<bjp<<endl;
		wonByvote=bjp-congress;
		cout<<"\n	BJP won by "<<wonByvote<<" votes to congress"<<endl;
		wonByvote=bjp-aap;
		cout<<"		BJP won by "<<wonByvote<<" votes to AAP"<<endl;
		wonByvote=bjp-bsp;
		cout<<"		BJP won by "<<wonByvote<<" votes to BSP"<<endl;
		cout<<"**********************************************\n";
	}
	else if(congress>aap&&congress>bsp)
	{
		cout<<"\n********************************************";
		cout<<"\n	Congress won the Election	\n\n";
		cout<<"\n	Total vote of Congress :"<<congress<<endl;
		wonByvote=congress-bjp;
		cout<<"		Congress won by "<<wonByvote<<" vote to BJP\n"<<endl;
		wonByvote=congress-aap;
		cout<<"		Congress won by "<<wonByvote<<" vote to AAP\n"<<endl;
		wonByvote=congress-bsp;
		cout<<"		Congress won by "<<wonByvote<<" vote to BSP\n"<<endl;
		cout<<"**********************************************\n";
	}
	else if(aap>bsp)
	{
		cout<<"\n********************************************";
		cout<<"\n		AAP won Election		\n\n";
		cout<<"		Total vote of AAP :"<<aap<<endl;
		wonByvote=aap-congress;
		cout<<"\n	AAP won by "<<wonByvote<<" vote to Congress\n"<<endl;
		wonByvote=aap-bjp;
		cout<<"\n	AAP won by "<<wonByvote<<" vote to BJP\n"<<endl;
		wonByvote=aap-bsp;
		cout<<"\n	AAP won by "<<wonByvote<<" vote to BSP\n"<<endl;
		cout<<"**********************************************\n";
	}
	else if(bsp==congress&&bjp==aap&&bjp==bsp)
	{
		cout<<"\n********************************************";
		cout<<"\n Every party got equal votes\n\n";
		cout<<"party\t\tVotes\n";
		cout<<"BJP\t\t	"<<bjp<<endl;
		cout<<"Congress 		\t	"<<congress<<endl;
		cout<<"AAP\t\t	"<<aap<<endl;
		cout<<"BSP\t\t	"<<bsp<<endl;
		cout<<"**********************************************\n";
	}
	else
	{
		cout<<"\n********************************************";
		cout<<"\n		BSP won the Election 	\n\n";
		cout<<"		Total vote of BSP :"<<bsp<<endl;
		wonByvote=bsp-congress;
		cout<<"\n	BSP won by "<<wonByvote<<" votes to Congress\n";
		wonByvote=bsp-aap;
		cout<<"\n	BSP won by "<<wonByvote<<" vote to AAP\n";
		wonByvote=bsp-bjp;
		cout<<"\n	BSP won by "<<wonByvote<<" vote to BJP\n";
		cout<<"**********************************************\n"; 
	}
}
void calculatevote(int vote)
{
	switch(vote)
	{
		case 1:
			bjp+=1;
			break;
		case 2:
			congress+=1;
			break;
		case 3:
			aap+=1;
			break;
		case 4:
			bsp+=1;
			break;
		case 5:
			nota+=1;
			break;
	}
}
int main()
{
	int choose;
	
	
	
		cout<<"\n		WELCOME TO SIMPLE VOTING SYSTEM PROJECT \n\n";
		cout<<"				LOKSABHA ELECTION		\n\n";
		cout<<"***********************************************************************\n";
		cout<<"|		1.BJP		|		2.Congress		|\n";
		cout<<"***********************************************************************\n";
		cout<<"|		3.APP		|		4.BSP			|\n";
		cout<<"***********************************************************************\n";
		cout<<" 			Press 1 to vote BJP  \n";
		cout<<" 			Press 2 to vote Congress \n";
		cout<<" 			Press 3 to vote AAP \n ";
		cout<<" 			Press 4 to vote BSP \n";
		cout<<" 			Press 5 to vote NOTA \n";
		cout<<"			Press 6 to show election Result\n\n";
	do
	{
		cout<<"Give vote By Pressing Digit : ";
		cin>>choose;
		if(choose==6)
		{
			electionResult();
		}
		else if(choose >=1&&choose<6)
		{
			calculatevote(choose);
		}
		else
		{
			cout<<"\nInvalid key pressed try again"<<endl;	
		}
	}while(choose != 6);
	cout<<endl;
	return 0;	
}
