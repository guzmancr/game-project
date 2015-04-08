 #include <iostream>
#include <iomanip>

#include "Player.h"
#include "bank.h"
#include <string>
using namespace std;

bank::bank()
{
 valut=100000;
 }

void bank::givethMoney(Player *  c, int place, int amount)//give the player money from the bank
 {
valut=valut-amount;
c[place].GetMoney(amount);
 }

void bank::takeawayth(Player *  c, int place, int amount)//take money from player and into the bank
{
 int converted;
converted=((-1)*amount);
valut=valut+amount;
c[place].GetMoney(converted);
 }




bool bank::executeAction()
 {
 cout<<"you killed Kenny. You lose you bastard!";
 return false;
 }


