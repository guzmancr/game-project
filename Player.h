#ifndef PLAYER_H 
#define PLAYER_H 

#include "space.h"
#include <string>
using namespace std;

class Player : public Space
{
private:
int spaceNumber;
string PlayerPiece;//players piece
int money;
int playerNumb;
public:
 Player();

 void setPiece(string );// set the piec for the player


 void setNumber(int );// set the number of place on the board

 string printPiece();//return the piece


 int PrintLocation(); //return the index number to where the plyer is
 
 void GetMoney(int);

 int ShowMoney();//return then amont of money the player has

 void getNumber(int);//assign the player number

 int PrintPlayNumb();//return the number of the player


};

#endif
