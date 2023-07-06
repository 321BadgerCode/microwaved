//badger
#pragma once

struct microwave{
private:
	$V init(int wattage1){wattage=wattage1;degree1=degree(wattage);}
public:
	$I wattage=0;
	$I degree1=0;
	microwave(int wattage1){init(wattage1);}
	//enum type{none,low,medium,high};
	//type t=type::none;
	//file f=new file("microwave_1.b_save");
	//microwave(){if(f.read().length()>0){wattage=stoi(f.read());}else{wattage=0;}}
	//void save(){f.write(to_string(wattage));}
	//bool set(){return f.exist();}
};