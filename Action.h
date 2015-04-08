

#include <string>
using namespace std;


class Player;
class bank;

class Action{

 private://hold the text in the boxes
 string OK;

 public:
 Action();

 void writeAction(string, string, string);//write text
 
 virtual void executeAction(Player *,int, int, bank * ) = 0;//will be the virtual function to access the cards in the money and BOOM decks 
 
 };

#endif
