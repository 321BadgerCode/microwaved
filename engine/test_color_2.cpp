//badger
#include ".\main_1.h"

using namespace microwaved;

$CD wait=.05;

$V print($CS a1){
$I a=1;
$I b=0;

while(b<=a1.size()){
	if(a>COLOR.white){a=1;}
	CONSOLE.echo(new console::text{.fore=a,.str=string(1,a1[b])});
	TIME.wait(wait);
	a++;
	b++;
}

CONSOLE.print("");
}

int main(){
CONSOLE.set_title("TEST_COLOR_2!");
CONSOLE.scroll(false);

print("hello world!");
$S a1=CONSOLE.input(new console::text{.fore=COLOR.red,.str="how are you doing today?"});
print("oh, ok then.");
print("you're "+a1+".");
print("i'm "+a1+" as well :)");

CONSOLE.pause();

return 0;
}