#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <string>

#include "boad.h"
#include "space.h"
#include "bank.h"
#include "Player.h"
#include "Action.h"
#include "card.h"
using namespace std;

int Dice(){//dice
 int roll=rand() % 8 + 1;
 return roll;
 } 

void printBoard(Board b){// print the bord by parts
 b.printOut1(20,30);
 b.printOut2(19,31);
 b.printOut1(10,0);
}


int main(int argc, char* argv[])
{
 bool battle=true;// determin if the game is still being played
 int numbofPlayers, //number for amount of players
diceNumber;//number for the value from a dice roll.

 char PlayerAnswer;// hold the piece for the player



 Board game;//Board class is cunstructed will contain many widgets
 bank WallSt;// bank class is constructed wont contain many widgets
 Player* student; // player class wis contructed
 card deck;// card class is made wont contain many widgets
string pieceHolder=" ";

 srand (time(NULL));//for the random number
 /*
 vector<Player*> Playa(2);

 cout<<Playa[1]->printPiece()<<" | "<< Playa[1]->ShowMoney()<<endl;
 
WallSt.givethMoney(Playa, 1 , 500);

 cout<<Playa[1]->printPiece()<<" | "<< Playa[1]->ShowMoney()<<endl;
 */
 cout<<"Welcome to BOMMONOPALY\n How many players are going to play?"<<endl;//prompt numb of players
 cin>>numbofPlayers;
// possibly replace with a pop up window aslkng for players

 
 if(numbofPlayers>4||numbofPlayers<2)
 {
	cout<<"too many or too little players"<<endl;
 return 0;
 }

 student = new Player[numbofPlayers];// bumber of players dynamicly contructed
 

 for(int i=0;i<numbofPlayers;i++){
 student[i].getNumber(i+1);//give the number for the student class

 cout<<"Player "<<i+1<<" Please enter the piece you would want for the game\n";//prompt for pieses
 cin>> pieceHolder;//user enters the piece for the player
//student[i].PrintPlayNumb();
//QT could assign the piec based of the player number;

 	if(pieceHolder.size()>1){//if the use puts in too many pieces then the program will quit
	cout<<"too many pieces"<<endl;
 	return 0;
	}

 student[i].setPiece(pieceHolder);//enters the piece for the player
 game.ReplacePiece(0,i,student[i].printPiece());//enters the piece of the player after using a funtion to return the piece then the board classtakes in nthe funtion
 }

/*
Action *actions[1];
actions[0] = new card;
*/

 printBoard( game);//print starting game
// can be completely redone using guis and widgets

 while(battle==true){//gameplay loop

	for(int i=0;i<numbofPlayers;i++){//will go throu the nuber of players

		if(battle==false){
		continue; 
		}

	cout<<"Player "<<i+1<<"\nYou have "<<student[i].ShowMoney()<<"Dollars\n"
	<<"Do you want to rolled the dice? \n Y/N:"<<endl;
//need a text line to print out the dialoge to the text block thing

	cin>>PlayerAnswer;
//button will perfor the talk
	int PreviorLoc= student[i].PrintLocation();//get the location fo the player
	string spacedOut=" ";

		if(PlayerAnswer=='Y'||PlayerAnswer=='y'){

		cout<<"Player "<<i+1<<" rolls the dice"<<endl;
		diceNumber= Dice();
		student[i].setNumber(diceNumber);//code to show the movment of a player

		game.ReplacePiece(PreviorLoc, i , spacedOut);
		game.ReplacePiece(student[i].PrintLocation(), i , student[i].printPiece() );
		printBoard( game);

	   	cout<<"Player "<<i+1<<" rolled "<<diceNumber<<" and landed on space "<<student[i].PrintLocation()<<endl;

			if((game.getSpacebool(student[i].PrintLocation())==true)&&(student[i].PrintLocation()!=18)&&(student	  	[i].PrintLocation()!=24)&&(student[i].PrintLocation()!=8)&&(student[i].PrintLocation()!=32)&&(student[i].PrintLocation()!=0)&&(student[i].PrintLocation()!=20)){ 
//the code for the normal property
			cout<<"do you want to distroy the propery? Y/N:\n If you do you will move to the next location\n";
			cin>>PlayerAnswer;
			printBoard( game);

				if((PlayerAnswer=='Y'||PlayerAnswer=='y')){//add and see if the cost is greater or not
	
				WallSt.takeawayth(student, i , game.getSpacePrice( student[i].PrintLocation() ) );
				//get the price of the property to detract from the player 
				game.changeSpace(student[i].PrintLocation(),false);// change the value of the space on the board
	
				PreviorLoc= student[i].PrintLocation();
				student[i].setNumber(1);//will move to the nextblock
				game.ReplacePiece(PreviorLoc, i , spacedOut );
				game.ReplacePiece(student[i].PrintLocation(), i , student[i].printPiece() );

				}else if(PlayerAnswer=='n'||PlayerAnswer=='N'){
				
				WallSt.givethMoney(student, i , 500);
				cout<<"Player "<<i+1<<" desided to destroyed the property"<<endl;
				}
//----
			} else if(game.getSpacebool(student[i].PrintLocation())==false){ //the code for the destroyed property

			cout<<"Do you want to rebuild the propery? Y/N:\n If you dont you will die!\n";
			cin>>PlayerAnswer;
				

				if(PlayerAnswer=='Y'||PlayerAnswer=='y'){//player desides to rebuild property will lose money and stay in the same place
				cout<<"the player has desided to rebuild the property"<<endl; 
				WallSt.takeawayth(student, i ,game.getSpacePrice(student[i].PrintLocation()));//get the price of the property to detract from the player 
				game.changeSpace(student[i].PrintLocation(),true);// change the value of the space on the board

				}else if(PlayerAnswer=='n'||PlayerAnswer=='N'){
				//the player has desides to stop playing 
				//sudent[i].setNumber(0);
				 PreviorLoc= student[i].PrintLocation();
				game.ReplacePiece(PreviorLoc, i , spacedOut );
				cout<<"Player "<<i+1<<" desided to not rolled"<<endl;
				battle=false;
				}
//US inheratace to hisplay the option to blowup or build propert. The propery is build with a true and destoyed by false
//also give the varibles for 'bool' and another 'int' to hold the blown up property
			}
		printBoard( game);
		}else if(PlayerAnswer=='n'||PlayerAnswer=='N'){

			student[i].setNumber(0);//add zero to the number of spaces the player will move
			game.ReplacePiece(student[i].PrintLocation(), i , student[i].printPiece() );
			cout<<"Player "<<i+1<<" desided to not rolled"<<endl;
			WallSt.givethMoney(student,i , 500);//give the player money for doing nothing...almost like anexecutive
		}
		
		if(student[i].ShowMoney()<=0){
		cout<<"Player "<<i+1<<" has lost all his money and is removed from the game.\n\n\nMay their soul rest in piece\n";
		battle=false;
		}
	
		if(student[i].PrintLocation()==18||student[i].PrintLocation()==24)
/*||student[i].PrintLocation()==8||student[i].PrintLocation()==32*/{

		cout<<"You get a card from the Money deck\n\n";
		cout<<"Player "<<i+1<<" has picked the ";
        deck.executeAction( student ,i, numbofPlayers, & WallSt );
		} 

		if(student[i].PrintLocation()==8||student[i].PrintLocation()==32){

		cout<<"You get a card from the Boom deck\n\n";
		cout<<"Player "<<i+1<<" has picked the ";
		game.BOOMdeck(student ,i, numbofPlayers );
		PreviorLoc= student[i].PrintLocation();
		game.ReplacePiece(PreviorLoc, i , spacedOut );
		game.ReplacePiece(student[i].PrintLocation(), i , student[i].printPiece() );
		}
		
		cout<<"Your turn is over. Would like to keep playing the game or quit?\nY/N"<<endl;	
		cin>>PlayerAnswer;
			
		if(PlayerAnswer=='Y'||PlayerAnswer=='y'){//player desides to rebuild property will lose money and stay in the same place
		cout<<"the next players turn"<<endl; 

		}else if(PlayerAnswer=='n'||PlayerAnswer=='N'){//the player has desides to stop playing 
		cout<<"He man it cool that you have to go. thanks for playing\n";
		PreviorLoc= student[i].PrintLocation();
		game.ReplacePiece(PreviorLoc, i , spacedOut );
		cout<<"Player "<<i+1<<" to no longer play the game"<<endl;
		battle=false;
		}
		
		if(student[i].ShowMoney()<=0){
		cout<<"Player "<<i+1<<" has lost all his money and is removed from the game.\n\n\nMay their soul rest in piece\n";
		battle=false;
		}

		
 	printBoard(game);
	}
 }

cout<<"All remaining players have won "<<endl;

 return 0;
}

