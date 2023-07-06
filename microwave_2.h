//badger
#pragma once

#include "microwave_1.h"

//private
microwave::type microwave::get_type(){
	$I low=700;
	$I medium=1300;
	$I high=2000;
	if(wattage<medium&&wattage>=low){t=type.low;}
	else if(wattage<high&&wattage>=medium){t=type.medium;}
	else if(wattage>=high){t=type.medium;}
	else{t=type.none;}
}
$V microwave::init(int wattage1){wattage=wattage1;degree1=degree(wattage);t=get_type();}

//public
microwave::microwave(int wattage1){init(wattage1);}

/*struct microwave{
	//microwave(){if(f.read().length()>0){wattage=stoi(f.read());}else{wattage=0;}}
	//void save(){f.write(to_string(wattage));}
	//bool set(){return f.exist();}
};*/