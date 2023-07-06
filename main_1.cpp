//badger
//engine
#include ".\\engine\\main_1.h"
//other
#include ".\\math_1.h"
#include ".\\microwave_3.h"
#include ".\\time_1.h"

using namespace microwaved;

int main(){
CONSOLE.set_title("MICROWAVED!");
//console::size().set(console::size::default);
CONSOLE.scroll(false);

//test
CONSOLE.print(to_string((5 <average> 100)));
CONSOLE.print(to_string((1 <percent> 5))+"%");
CONSOLE.print(to_string((2 <power> 2)));
//CONSOLE.print(to_string((sin 2)));
//test

//microwave* m=new microwave();

//if(m.set()==false){
	$S user_wattage=CONSOLE.input(new console::text{.fore=COLOR.red,.str="Wattage of your microwave: "});
	//m.wattage=stoi(user_wattage);
	//m.save();
//}
$S wattage=CONSOLE.input(new console::text{.fore=COLOR.orange,.str="Wattage specified on the food package: "});
$S time=CONSOLE.input(new console::text{.fore=COLOR.yellow,.str="Time(in seconds) specified on the food package: "});

microwave* m=new microwave(stoi(user_wattage));

my_time* mt=new my_time(time);
my_time new_time=convert_wattage_time(stoi(user_wattage),stoi(wattage),stoi(time)/*mt->toInt()*/);

$S ms[]={"Wattage: "+to_string(m->wattage),
//"\nDegree: "+to_string(MATH.celsius(m->degree1))+" C.°",
"\nDegree: "+to_string(m->degree1)+" F.°"};
//CONSOLE.print(new console::text{.fore=COLOR.green,.str=ms[0]+ms[1]+ms[2]});
CONSOLE.print(new console::text{.fore=COLOR.green,.str=ms[0]+ms[1]});

//CONSOLE.print(new console::text{.fore=COLOR.orange,.str="\n"+string1(ms[2]).for_do("_")+"\n"});
CONSOLE.print(new console::text{.fore=COLOR.orange,.str="\n"+string1(ms[1]).for_do("_")+"\n"});

$S nt="New time: '"+new_time.toString()+"'"+
"\nMinute: "+to_string(new_time.minute)+
"\nSecond: "+to_string(new_time.second)+
"\nTotal second: "+to_string(new_time.total_second);
CONSOLE.print(new console::text{.fore=COLOR.green,.str=nt});

CONSOLE.pause();

return 0;
}
//add logo(microwave in text(ascii) format)(C:\Users\Badger\Documents\text\microwave_1.txt)
//fix my_time.toInt()
//fix saving
//fix enum for high(2,000), medium(other), and low(700) powered microwaves based off of wattage
//add pre-specified food times to cook(ex. boil-water/ramen='3:00')
//https://stackoverflow.com/questions/39470213/how-to-store-ini-files-using-qsettings-on-os-x