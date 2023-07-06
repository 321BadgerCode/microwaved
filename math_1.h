//badger
#pragma once

#include ".\\time_1.h"

my_time convert_wattage_time(double user_wattage,double wattage,double time){
double b1=(wattage/user_wattage)*time;
my_time* t=new my_time(b1);
return *t;
}
$D degree($CD wattage){$D b1=wattage/2;return b1;}