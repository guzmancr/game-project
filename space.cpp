#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
//#include "Action.h"
#include "space.h"
#include <string>

using namespace std;

Space::Space()
 {
 conditions1="Standing";
 conditions2="Blowup 4";
 conditions3="Destroyed";
 conditions4="rebuild";

 name=" ";

 pieces ="     ";
 distroyORbuild=true;

 cost1=0;
 cost2=0;

 }

void Space::enterName(string l)
 {
 name=l;
 }

string Space::PrintName()
 {
 return name;
 }

void Space::enterPieces(string l)//enter the emplty part of the piece
 {
 pieces=l;
 }

void Space::rePiece(int m, string in)//enter the piece of the player
 {

//char stuff;
//stringstream ss;

//ss<<in;

//ss>>stuff;

pieces[m]=in[0];
}

string Space::printPieces()// Print Out the piece of hte player
 {
 return pieces;
 }

void Space::ActionConditon(string aa, string bb, string cc)
 { 
 conditions1 = aa;

 conditions2 = bb;

 conditions3 = cc;
//MyAction.writeAction( aa,  bb,  cc );
 }

string Space::Spitout(int line )
 {
	if(distroyORbuild==true)
	{
	 	if(line==1){
	  		return conditions1;
	
	 	}else if(line==2){
	 		return conditions2;
		}else if(line==3){
			return conditions3;
		}
 	/*}else if(line==3){

 	return conditions3;
	}*/
	}else if(distroyORbuild==false)
	 {
		if (line==1){
			return conditions3;

		}else if(line==2){
			return conditions4;
		}
     }
 //return MyAction.PrintAction( line );
}
 

void Space::setPrice(int juan,int tao)
 {
 cost1= juan;
 cost2= tao;
 }

int Space::getCost() //return the cost of the poperty based on true of false
{
 if(distroyORbuild==true){
 return cost1;
 }else if(distroyORbuild==false){
 return cost2;
 }
}

void Space::stateofProperty(bool state)//ster the bool value of a bool
 {
 distroyORbuild= state;
 }

bool Space::GetStateProp() //returns the bool value of the space
 {
 return distroyORbuild;
 }
/*
 bool Space::executeAction()
 {
 cout<<"YOU win!!! go have a party";
 return false;
 }
*/
