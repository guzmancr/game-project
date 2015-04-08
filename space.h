#ifndef SPACE_H 
#define SPACE_H

#include "Action.h"
#include <string>


using namespace std;

class Space{


 private: 
 string name;

 string conditions1;
 string conditions2;
 string conditions3;
 string conditions4;

 //Action MyAction;
 int NextSpace[3];
 string pieces;
 int cost1;
 int cost2;

 bool distroyORbuild;

 public:
 Space();

 void enterName(string );//enter the name of the location

 string PrintName();//return the name of the space

 void enterPieces(string );//enter the emplty part of the piece

 void rePiece(int , string );//enter the piece of the player

 string printPieces();// Print Out the piece of hte player

 void ActionConditon(string, string, string );//chane the strings

 string Spitout(int);//ditermins what texted is preinted out

 void setPrice(int,int);// set the pric for a build  property and a distroyed property

 int getCost();// return the cost bases on the state of the bool

 void stateofProperty(bool);//set the value of boolian

 bool GetStateProp();//return the state of the boolian

void executeAction(Player *,int, int, bank * );
//bool executeAction();

};
#endif
