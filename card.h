#ifndef CARD_H 
#define CARD_H
#include "bank.h"
#include "Action.h"
#include "Player.h"
#include <string>
#include <vector>

using namespace std;

class card : public Player,public Action{

private:
int position[7];
int placeholder;


public:

card();//constructor


void moneydeck1(Player*, int, int, bank*);

void moneydeck2(Player*, int, int, bank*);

void moneydeck3(Player*, int, int, bank*);

void moneydeck4(Player*, int, int, bank*);

void moneydeck5(Player*, int, int, bank*);

void moneydeck6(Player*, int, int, bank*);

void moneydeck7(Player*, int, int, bank*);

void executeAction(Player *,int, int, bank* );//acces the cards in the deck.

};
#endif
