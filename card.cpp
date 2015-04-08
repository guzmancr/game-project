#include <iostream>
#include <iomanip>
//#include "Action.h"
#include "Player.h"
#include "bank.h"
#include "card.h"
#include <string>
using namespace std;

card::card()
{
position[0]=2;
position[1]=6;
position[2]=2;
position[3]=3;
position[4]=1;
position[5]=0;
position[6]=5;

placeholder=0;
}



void card::moneydeck1(Player* playa, int k, int playsize, bank* bank)
{
cout<<"Family Values Card\nYour great aunt Lias has passes away and has given you all of he money.\n recieve 1000 dollars"<<endl;

bank->givethMoney( playa, k ,1000 );

}

void card::moneydeck2(Player* playa, int k, int playsize, bank* bank)
{
cout<<"Blind Justice Card\nYou won you lawsuit against the lego corperation for spting on won of their legos.\n Recieve 700 dollars"<<endl;

bank->givethMoney( playa, k ,700 );
}

void card::moneydeck3(Player* playa, int k, int playsize, bank* bank)
{
cout<<"Favorit Parent Card\nYou have to pay Child suport.\n lose 500"<<endl;
bank->takeawayth( playa, k ,500 );
}

void card::moneydeck4(Player* playa, int k, int playsize, bank* bank)
{
cout<<" Fido's Revenge Card.\nGet attaked by dog and crazy owners.\n pay 800 in medical bills"<<endl;
bank->takeawayth( playa, k ,800 );
}

void card::moneydeck5(Player* playa, int k, int playsize, bank* bank)
{
cout<<"Charaty Case Card\nYou give 400 to all the player with less money"<<endl;

for(int i=0; i< playsize; i++)
	if(i==k){
	continue;
	}else if(playa[k].PrintPlayNumb()>playa[i].PrintPlayNumb()){
	bank->takeawayth( playa, k ,400 );
	bank->givethMoney( playa, i ,400 );
	}
}

void card::moneydeck6(Player* playa, int k, int playsize, bank* bank)
{
cout<<"Big Winnings Card\n You won it big in you las trip to Vegae\n get 1500 dollars"<<endl;
bank->givethMoney( playa, k ,1500 );
}

void card::moneydeck7(Player* playa, int k, int playsize, bank* bank)
{
cout<<"Slight of Hand Card\n A pick pocket stolf you walet\n lose 50 dollars"<<endl;
bank->takeawayth( playa, k ,800 );
}

void card::executeAction(Player *Playa ,int k , int playsize, bank* bank )//acces the cards in the deck.
{
	if(position[placeholder]==0)
	{
	moneydeck1(Playa,k, playsize,bank);

	}else if(position[placeholder]==1){

	moneydeck2(Playa,k, playsize,bank);

	}else if(position[placeholder]==2){

	moneydeck3(Playa,k, playsize,bank);

	}else if(position[placeholder]==3){

	moneydeck4(Playa,k, playsize,bank);

	}else if(position[placeholder]==4){

	moneydeck5(Playa,k, playsize,bank);

	}else if(position[placeholder]==5){

	moneydeck6(Playa,k, playsize,bank);

	}else if(position[placeholder]==6){

	moneydeck7(Playa,k, playsize,bank);
	}
placeholder++;

	if (placeholder>6){
	placeholder=0;
	}
}
