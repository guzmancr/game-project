#ifndef BANK_H 
#define BANK_H

#include "Player.h"
#include <string>
#include <vector>

using namespace std;

class bank : public Player
{

 private: 
int valut;

 public:

bank();

void givethMoney( Player *,int ,int );//give the player money from the bank

void takeawayth(Player *, int, int );//take money from player and into the bank



bool executeAction();




};
#endif 
