//badger
#pragma once

#include ".\\math_1.h"

class math::random{
public:
	$I random($CI min,$CI max){srand(time(0));$I b1=((double)rand()/RAND_MAX)*(max-min)+min;return b1;}
	$I random($CI max){$I b1=rand()%max+1;return b1;}
};