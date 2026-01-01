#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
class game
{
	public:
		void play()
		{
			int i,Userch,Comp,round,Uscore=0,Cscore=0;
			string name;
			char y=0;

			cout<<"enter ur name: ";
			cin>>name;
			cout<<"enter number of rounds: ";
			cin>>round;
			srand(time(0));//generate according to current time
			for(i=1;i<=round;i++)
			{
				cout<<name <<"Score: "<<Uscore<<endl;
				cout<<"Computer Score: "<<Cscore<<endl<<endl;

				cout<<"Round no: "<<i<<"/"<<round<<endl;
				cout<<"1.ROCK"<<endl;
				cout<<"2.PAPER"<<endl;
				cout<<"3.SCISSOR"<<endl;
				cout<<"enter ur choice: "<<endl;
				cin>>Userch;
				
				Comp=(rand() % 3) + 1;//gen from 0 to 2 so + adds 1 to 3
				switch(Userch)
				{
					case 1:
						cout<<"you have selected: Rock"<<endl;
						break;
					case 2:
						cout<<"you have selected: paper"<<endl;
						break;
					case 3:
						cout<<"you have selected: scissor"<<endl;
						break;
					case 4:cout<<"exit"<<endl;
					break;
					default:
						cout<<"invalid choice"<<endl;
						
				}
				switch(Comp)
				{
					case 1:
						cout<<"Computer choice: Rock"<<endl;
						break;
					case 2:
						cout<<"Computer choice: Paper"<<endl;
						break;
					case 3:
						cout<<"Computer choice: Scissor"<<endl;
						break;
					case 4:cout<<"exit"<<endl;
					break;
					default:
						cout<<"invalid choice"<<endl;						
				}
				if(Userch==Comp)
				{
					cout<<"Draw"<<endl;
				}
				else if((Userch==1 && Comp==3) || (Userch==2 && Comp==1) ||
				(Userch==3 && Comp==2))
				{
					cout<<name<<"\tWins"<<endl;
					Uscore++;
				}
				else
				{
					cout<<"Computer WINS"<<endl;
					Cscore++;
				}
					cout<<"Press any key to continue: "<<endl;
					cin>>y;				
			}
				cout<<"Game Over"<<endl;
	}
};
int main()
{
	game g;
	g.play();
}
