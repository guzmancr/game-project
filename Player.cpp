#include <iostream>
#include "Player.h"
#include <string>

using namespace std;

Player::Player()
 {
 PlayerPiece = "Default";
 spaceNumber=0;
 money=4500;
 }

void Player::setPiece(string n)
 {
 PlayerPiece=n;
 }

void Player::setNumber(int number)
 {
 spaceNumber=spaceNumber+number;
 
 	if(spaceNumber>39){
	spaceNumber=spaceNumber-39;
	cout<<"You have plased START recieved $1000 \n";
	money=money+1000;
 	}
 }

string Player::printPiece()
 {
 return PlayerPiece;
 }

int Player::PrintLocation()
 {
 return spaceNumber;
 }

void Player::GetMoney(int bills)
 {
 money=money+bills;
 }

int Player::ShowMoney()
 {
 return money;
 }

void Player::getNumber(int k)//assign the player number
 {
 playerNumb=k;
 }

 int Player::PrintPlayNumb()
 {
 return playerNumb;
 }

