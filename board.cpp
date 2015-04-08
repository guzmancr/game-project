#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
#include "Player.h"
#include "boad.h"
#include "space.h"
using namespace std;



 Board::Board()
{
position[0]=2;// the order of the deck
position[1]=6;
position[2]=2;
position[3]=3;
position[4]=1;
position[5]=0;
position[6]=5;//controle the deck
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++possible place for QT interaction
placeholder=0;//controle place in the deck

boader="----------";//boarder for the print board

	for(int i=0; i< 40; i++){
	Building[i]= new Space(); 
	}

Building[0]->enterName("Start");
Building[0]->ActionConditon("get $2000","when pass"," ");//bottom of the board


Building[1]->enterName("bum row");
//Building[1].ActionConditon("standing","blowup 4"," $200");
Building[1]->setPrice(200,500);

Building[2]->enterName("Box depo");
//Building[2].ActionConditon("standing","blowup 4"," $100");
Building[2]->setPrice(100,600);

Building[3]->enterName("Da Roof");
//Building[3].ActionConditon("standing","blowup 4"," $250");
Building[3]->setPrice(250,700);

Building[4]->enterName("Da Basmet");
//Building[4].ActionConditon("standing","blowup 4"," $200");
Building[4]->setPrice(200,800);

Building[5]->enterName("the Room");
//Building[5].ActionConditon("standing","blowup 4"," $350");
Building[5]->setPrice(350,900);

Building[6]->enterName("LosSantos");
//Building[6].ActionConditon("standing","blowup 4"," $750");
Building[6]->setPrice(750,1000);

Building[7]->enterName("Tank r Us");
//Building[7].ActionConditon("standing","blowup 4"," $350");
Building[7]->setPrice(350,1100);

Building[8]->enterName("DEMO Sale");
Building[8]->ActionConditon("Get Card","from BOOM","Deck ");

Building[9]->enterName("Metal hal");
//Building[9].ActionConditon("standing","blowup 4"," $550");
Building[9]->setPrice(550,1200);


Building[10]->enterName("Jail?");// possibly make it a jail class
//Building[10].ActionConditon("standing","blowup 4"," $650");//left of the board
Building[10]->setPrice(650,1000);

Building[11]->enterName("Babelon");
//Building[11].ActionConditon("standing","blowup 4"," $600");
Building[11]->setPrice(600,1100);

Building[12]->enterName("hollywood");
//Building[12].ActionConditon("standing","blowup 4"," $699");
Building[12]->setPrice(699,1200);

Building[13]->enterName("mob land");
//Building[13].ActionConditon("standing","blowup 4"," $675");
Building[13]->setPrice(675,1300);

Building[14]->enterName("AdamSndlr");
//Building[14].ActionConditon("standing","blowup 4"," $750");
Building[14]->setPrice(750,1400);

Building[15]->enterName("house");
//Building[15].ActionConditon("standing","blowup 4"," $950");
Building[15]->setPrice(950,1500);

Building[16]->enterName("fightCub");
//Building[16].ActionConditon("standing","blowup 4"," $900");
Building[16]->setPrice(900,1600);

Building[17]->enterName("DeathStar");
//Building[17].ActionConditon("standing","blowup 4"," $850");
Building[17]->setPrice(850,1700);

Building[18]->enterName("Bank");
Building[18]->ActionConditon("get card","from  ","MoneyDeck");

Building[19]->enterName("AdamWest");
//Building[19].ActionConditon("standing","blowup 4"," $1050");
Building[19]->setPrice(1050,1800);

/*
 Building[20].enterName("Westaros");
//Building[20].ActionConditon("standing","blowup 4"," $1350");//top of board
Building[20].setPrice(1350,1600);
*/
Building[20]->enterName("safezone");
Building[20]->ActionConditon("Nothing","Happens","here");

Building[21]->enterName("SF");
//Building[21].ActionConditon("standing","blowup 4"," $1550");
Building[21]->setPrice(1550,1700);

Building[22]->enterName("LegoLand");
//Building[22].ActionConditon("standing","blowup 4"," $1450");
Building[22]->setPrice(1450,1800);

Building[23]->enterName("DangerZon");
//Building[23].ActionConditon("standing","blowup 4"," $1300");
Building[23]->setPrice(1300,1900);

Building[24]->enterName("Bank");
Building[24]->ActionConditon("get card","from  ","MoneyDeck");


Building[25]->enterName("WWE Mania");
//Building[25].ActionConditon("standing","blowup 4"," $1650");
Building[25]->setPrice(1650,2100);

Building[26]->enterName("STD land");
//Building[26].ActionConditon("standing","blowup 4"," $1700");
Building[26]->setPrice(1700,2200);

Building[27]->enterName("LosVegas");
//Building[27].ActionConditon("standing","blowup 4"," $1950");
Building[27]->setPrice(1950,2300);

Building[28]->enterName("AustinTX");
//Building[28].ActionConditon("standing","blowup 4"," $1800");
Building[28]->setPrice(1800,2400);

 Building[29]->enterName("Freedom ");
 //Building[29].ActionConditon("standing","blowup 4"," $1766");
Building[29]->setPrice(1766,2500);

//right side
Building[30]->enterName("shinytoy");
//Building[30].ActionConditon("standing","blowup 4"," $2050");
Building[30]->setPrice(2050,2600);

Building[31]->enterName("daSuburbs");
//Building[31].ActionConditon("standing","blowup 4"," $2000");
Building[31]->setPrice(2000,2700);

Building[32]->enterName("DEMOSsale");
Building[32]->ActionConditon("Get Card","from BOOM","Deck ");


Building[33]->enterName("Magic Mt");
//Building[33].ActionConditon("standing","blowup 4"," $1350");
Building[33]->setPrice(1350,2800);

Building[34]->enterName("Alaska");
//Building[34].ActionConditon("standing","blowup 4"," $1550");
Building[34]->setPrice(1550,2900);

Building[35]->enterName("Bullworth");
//Building[35].ActionConditon("standing","blowup 4"," $1400");
Building[35]->setPrice(1400,3000);

Building[36]->enterName("Bat Cave");
//Building[36].ActionConditon("standing","blowup 4"," $2800");
Building[36]->setPrice(2800,3100);

Building[37]->enterName("DisneyLd");
//Building[37].ActionConditon("standing","blowup 4"," $2600");
Building[37]->setPrice(2600,3200);

Building[38]->enterName("Westaros");
//Building[38].ActionConditon("standing","blowup 4"," $2780");
Building[38]->setPrice(2780,3300);

Building[39]->enterName("mystery");
//Building[39].ActionConditon("standing","blowup 4"," $5500");
Building[39]->setPrice(10,10000);


	for(int i=0;i<40;i++){
	Building[i]->enterPieces("      ");

	}	

}

void Board::printOut1(int k, int l)
{		

int Khold=k;
				// change the placment of the top line
//print the fist line 
 for(int i=0; i<11; i++){
	cout<<boader;
 }	
 cout<<"-"<<endl<<"|";
 if(k<l){
 //print the second line
	 for(int i=0;i<11;i++){
		cout<<setw(9)<<Building[k++]->PrintName()<<"|"; 		
	 }
	k=Khold;
 }else{
	 for(int i=0;i<11;i++){
		cout<<setw(9)<<Building[k--]->PrintName()<<"|"; 		
	 }
	k=Khold;
}


cout<<endl<<"|";
//print the 3rd line
for(int i=0;i<11;i++){
cout<<"---------|"; 		
 }
cout<<endl<<"|";

 if(k<l){
 //print the 4rd line
	 for(int i=0;i<11;i++){
		cout<<setw(9)<<Building[k++]->Spitout(1)<<"|"; 		
	 }
	k=Khold;
 }else{
	 for(int i=0;i<11;i++){
		cout<<setw(9)<<Building[k--]->Spitout(1)<<"|"; 		
	 }
	k=Khold;
}
cout<<endl<<"|";
/*
cout<<endl<<"|";
//print the 4the line
 for(int i=0;i<11;i++){
	cout<<"---------|"; 		
 }*/
 if(k<l){
 //print the 5th line
	 for(int i=0;i<11;i++){
		cout<<setw(9)<<Building[k++]->Spitout(2)<<"|"; 		
	 }
	k=Khold;
 }else{
	 for(int i=0;i<11;i++){
		cout<<setw(9)<<Building[k--]->Spitout(2)<<"|"; 		
	 }
	k=Khold;
}
cout<<endl<<"|";
/*
cout<<endl<<"|";
cout<<endl<<"|";
//print the 5the line
 for(int i=0;i<11;i++){
	cout<<"---------|"; 		
 }
*/
 if(k<l){
 //print the 6th line
	 for(int i=0;i<11;i++){
		if(k==8||k==18||k==32||k==20||k==24)
		{
		cout<<setw(9)<<Building[k++]->Spitout(3)<<"|";
		}else{
		cout<<setw(9)<<Building[k++]->getCost()<<"|"; 
		}		
	 }
	k=Khold;
 }else{
	 for(int i=0;i<11;i++){
		if(k==8||k==18||k==32||k==20||k==24)
		{
		cout<<setw(9)<<Building[k--]->Spitout(3)<<"|";
		}else{
		cout<<setw(9)<<Building[k--]->getCost()<<"|"; 
		}		
	 }
	k=Khold;
}
cout<<endl<<"|";
//print the 6the line
 for(int i=0;i<11;i++){
	cout<<"         |"; 		
 }
 cout<<endl<<"|";

 if(k<l){
 //print the 7th line with game pieces
	 for(int i=0;i<11;i++){
		cout<<setw(9)<<Building[k++]->printPieces()<<"|"; 		
	 }
	k=Khold;
 }else{
	 for(int i=0;i<11;i++){
		cout<<setw(9)<<Building[k--]->printPieces()<<"|"; 		
	 }
	k=Khold;
}

cout<<endl;
//print the 8th line
 for(int i=0; i<11; i++){
	cout<<boader;
 }	
cout<<"-"<<endl;
}




void Board::printOut2(int k,int l)
{


 for(int i=0; i<9;i++ ){


 //print out the 1st line
	cout<<"|";
	cout<<setw(9)<<Building[k]->PrintName()<<"|";
	for(int j=0;j<9;j++){
		if(j==8){
		cout<<"         ";
		}else{	
		cout<<"          ";
		}
	}
	cout<<"|";
	cout<<setw(9)<<Building[l]->PrintName()<<"|";
	cout<<endl;

	//k=Khold;
	//l=Lhold;
//print out the 2nd line
	cout<<"|---------|";
	for(int j=0;j<9;j++){
		if(j==8){
		cout<<"         ";
		}else{	
		cout<<"          ";
		}
	}
	cout<<"|---------|";
	cout<<endl;

// Print out the 3rd line

	cout<<"|";
	cout<<setw(9)<<Building[k]->Spitout(1)<<"|";
	for(int j=0;j<9;j++){
		if(j==8){
		cout<<"         ";
		}else{	
		cout<<"          ";
		}
	}
	cout<<"|";
	cout<<setw(9)<<Building[l]->Spitout(1)<<"|";
	cout<<endl;

//print out the 4th line
	cout<<"|";
	cout<<setw(9)<<Building[k]->Spitout(2)<<"|";
	for(int j=0;j<9;j++){
		if(j==8){
		cout<<"         ";
		}else{	
		cout<<"          ";
		}
	}
	cout<<"|";
	cout<<setw(9)<<Building[l]->Spitout(2)<<"|";
	cout<<endl;

//print out the 5th line
/*	cout<<"|---------|";
	for(int j=0;j<9;j++){
		if(j==8){
		cout<<"         ";
		}else{	
		cout<<"          ";
		}
	}
	cout<<"|---------|";
	cout<<endl;
*/
//print out the 5th line
	cout<<"|";
if( ((k==8)||(k==18)) ||(k==32)){
	cout<<setw(9)<<Building[k]->Spitout(3)<<"|";
}else{
	cout<<setw(9)<<Building[k]->getCost() <<"|";
}

	for(int j=0;j<9;j++){
		if(j==8){
		cout<<"         ";
		}else{	
		cout<<"          ";
		}
	}
	cout<<"|";
if( ((l==8)||(l==18)) ||(l==32)){
	cout<<setw(9)<<Building[l]->Spitout(3)<<"|";
}else{
	cout<<setw(9)<<Building[l]->getCost() <<"|";
}
	cout<<endl;

	cout<<"|         |";
	for(int j=0;j<9;j++){
		if(j==8){
		cout<<"         ";
		}else{	
		cout<<"          ";
		}
	}
	cout<<"|         |";
	cout<<endl;

//print out the 7the line

	cout<<"|";
	cout<<setw(9)<<Building[k]->printPieces()<<"|";
	for(int j=0;j<9;j++){
		if(j==8){
		cout<<"         ";
		}else{	
		cout<<"          ";
		}
	}
	cout<<"|";
	cout<<setw(9)<<Building[l]->printPieces()<<"|";
	cout<<endl;

	k=k-1;
	l=l+1;

	//print out the 8th line
	if(i<8){
		cout<<boader<<"-";
		for(int j=0;j<9;j++){
			if(j==8){
			cout<<"         ";
			}else{	
			cout<<"          ";
			}
		}
		cout<<boader<<"-"<<endl;
	}

 }

}

void Board::emptyPieces(int location)//deleate the previor location for the piece
 {
  Building[location]->enterPieces( "      ");
 }

void Board::ReplacePiece(int location, int player , string w)
 {
 Building[location]->rePiece( player,  w);
 }

bool Board::getSpacebool(int k) //returns thebool of the space 
 {
 return Building[k]->GetStateProp();
 }

int Board::getSpacePrice(int k)
 {
 return Building[k]->getCost();
 }

void Board::theSpaces()//uesed for a test to fix and error
 {
  for(int i=0; i<40; i++)
  {
  cout<< i <<" "<<Building[i]->printPieces()<<endl;
  }
 }
void Board::changeSpace(int l,bool b)
 {
  Building[l]->stateofProperty(b);
 }
//___________________________-----------------------------__________________________________------------------------------______________





 void Board::Boomdeck1( Player *Playa ,int k , int playsize){
cout<<"Going Long Card\n The bomb store is has given you a free bomb to be thrown ahead \nProperty ahead 8 or 15 spaces is turned to false."<<endl;
// get the place of the player and then randomly changing the space to false.

Building[(Playa[k].PrintLocation()+(rand() % 7 + 8))]->stateofProperty(false);

}
 
 void Board::Boomdeck2( Player *Playa ,int k , int playsize){
cout<<"Spring Cleaning Card\n In an attempt to clean the filth on the game board the poperty 'WWE Mania', 'STD land', and 'LosVegas' are distroyed \n Bomb detinated on WWE Mania STD land and LosVegas."<<endl;
// property is turning to future

Building[25]->stateofProperty(false);
Building[26]->stateofProperty(false);
Building[27]->stateofProperty(false);
}

 void Board::Boomdeck3( Player *Playa ,int k , int playsize){
cout<<"Kick-Them When They're Down Card\n The Shop Owner cant see very well and realy hates slackes and wants them to lose \nPlayer that is last in futhers behind the board get 3 bombs placed ahead of him."<<endl;
int c=40;
int holdVictim;
for(int i=0; i< playsize; i++){
	if(c>Playa[i].PrintLocation()){
	c=Playa[i].PrintLocation();
	holdVictim=i;
	}
}

if(holdVictim>36){
holdVictim=36;
}

//find the lowes player put bombs ahead of him

Building[(Playa[holdVictim].PrintLocation()+1)]->stateofProperty(false);
Building[(Playa[holdVictim].PrintLocation()+2)]->stateofProperty(false);
Building[(Playa[holdVictim].PrintLocation()+3)]->stateofProperty(false);
/*
changeSpace( Playa[holdVictim].PrintLocation()+1,bool false);
changeSpace( Playa[holdVictim].PrintLocation()+2,bool false);
changeSpace( Playa[holdVictim].PrintLocation()+3,bool false);*/
}

 void Board::Boomdeck4( Player *Playa ,int k , int playsize){
cout<<"Speed Boost Card\n The bomb store owner has given you experimental rocke boots that propell you forward and  fall apart from in the air. \nplayer is proppelled foward 3  spaces ."<<endl;

Playa[k].setNumber(3 );
}

 void Board::Boomdeck5( Player *Playa ,int k , int playsize){
cout<<"Dance Off Card\n After beating the DemoShop owner in an intence dance off he give you a ride\n Property ahead 7 spaces."<<endl;
Playa[k].setNumber(7 );
}

 void Board::Boomdeck6( Player *Playa ,int k , int playsize){
cout<<"Disrespcting Athority Card\n After looking at the DemoShop owner the wrong way he knocks you out and send you back \nmove back 5 spaces."<<endl;
Playa[k].setNumber(-5 );
}

 void Board::Boomdeck7( Player *Playa ,int k , int playsize){
cout<<"Bombtest Card\n A experimental bomb went off and you got cought in the blast. \n Instead of giveing you hulk powers or killingyou and ending you suffering once and for all you get gent back 7 spaces"<<endl;
Playa[k].setNumber(-7 );

}



void Board::BOOMdeck(Player *Playa ,int k , int playsize)//acces the cards in the deck.
{
	if(position[placeholder]==0)
	{
	Boomdeck1(Playa,k, playsize);

	}else if(position[placeholder]==2){

	Boomdeck2(Playa,k, playsize);

	}else if(position[placeholder]==1){

	Boomdeck3(Playa,k, playsize);

	}else if(position[placeholder]==3){

	Boomdeck4(Playa,k, playsize);

	}else if(position[placeholder]==4){

	Boomdeck5(Playa,k, playsize);

	}else if(position[placeholder]==5){

	Boomdeck6(Playa,k, playsize);

	}else if(position[placeholder]==6){

	Boomdeck7(Playa,k, playsize);
	}
	placeholder++;

	if (placeholder>6){
	placeholder=0;
	}
}

