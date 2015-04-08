#ifndef BOAD_H 
#define BOAD_H 
#include <stdlib.h>
#include <stdio.h>
#include "Player.h"
#include "Action.h"
#include "space.h"
#include <string>
using namespace std;


class Board : public  Space// inherates from space
{

private:
 string boader;
 Space* Building[40];
//going to need an anray of 40 widgets
 Action* conditions;

int  position[7];
int placeholder;+


public:
