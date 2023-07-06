//badger
#include ".\main_1.h"

using namespace microwaved;

int main(){
CONSOLE.set_title("TEST_COLOR_1!");
CONSOLE.scroll(false);

for(int a=0;a<=COLOR.white;a++){
	console::text* ct1=new console::text{.fore=a,.str=to_string(a)+": hello world!"};
	if(a==COLOR.black){ct1->back=COLOR.white;}
	CONSOLE.print(ct1);
}

CONSOLE.echo(new console::text{.fore=COLOR.orange,.back=COLOR.blue,.str="hello world"});
CONSOLE.print(new console::text{.fore=COLOR.red,.back=COLOR.blue,.str="!"});

CONSOLE.pause();

return 0;
}