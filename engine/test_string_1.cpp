//badger
#include ".\main_1.h"

using namespace microwaved;

string1* s1=new string1("booooo!");

int main(){
CONSOLE.set_title("TEST_STRING_1!");
CONSOLE.scroll(false);

CONSOLE.print(s1->replace("oo"));

CONSOLE.pause();

return 0;
}