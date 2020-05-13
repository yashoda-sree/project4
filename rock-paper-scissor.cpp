#include<bits/stdc++.h>
using namespace std;
int main()
{
	int ch;
	srand((int)time(0));
	do{
		int t=((rand()%3)+1);
		cout<<"1.ROCK\n2.PAPER\n3.SCISSOR\n4.QUIT\n";
		cin>>ch;
		switch(ch)
		{
			case 1:{
				switch(t)
				{
					case 1: 
					{
						cout<<"      YOU : ROCK\n      COMPUTER : ROCK\n";
						cout<<"---------------------TIE-------------------------\n";
						break;
					}
					case 2:
					{
						cout<<"      YOU : ROCK\n      COMPUTER : PAPER\n";
						cout<<"-------------------YOU LOST :(-------------------\n";
						break;	
					}
					case 3:
					{
						cout<<"      YOU : ROCK\n      COMPUTER : scissor\n";
						cout<<"-------------------YOU WON :)--------------------\n";
						break;	
					}
				}
				break;
			}
			case 2:
			{
				switch(t)
				{
					case 1:
					{
						cout<<"      YOU : PAPER\n      COMPUTER : ROCK\n";
						cout<<"-------------------YOW WON :)--------------------\n";
						break;
					}
					case 2:
					{
						cout<<"      YOU : PAPER\n      COMPUTER : PAPER\n";
						cout<<"---------------------TIE-------------------------\n";
						break;	
					}
					case 3:
					{
						cout<<"      YOU : PAPER\n      COMPUTER : scissor\n";
						cout<<"-------------------YOU LOST :(-------------------\n";
						break;	
					}
				}
				
				break;
			}
			case 3:
			{
				switch(t)
				{
					case 1:
					{
						cout<<"      YOU : SCISSOR\n      COMPUTER : ROCK\n";
						cout<<"-------------------YOU LOST:(--------------------\n";
						break;
					}
					case 2:
					{
						cout<<"      YOU : SCISSOR\n      COMPUTER : PAPER\n";
						cout<<"-------------------YOU WON :)--------------------\n";
						break;	
					}
					case 3:
					{
						cout<<"      YOU : SCISSOR\n      COMPUTER : scissor\n";
						cout<<"---------------------TIE-------------------------\n";
						break;	
					}
				}
				break;
			}
			case 4:
			{
				return 0;		
			}
			default:
				cout<<"                   INVALID ENTRY :(\n                   TRY AGAIN\n";
		}
	}while(ch!=4);
	return 0;
}
