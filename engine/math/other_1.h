//badger
#pragma once

#include ".\\math_1.h"

class math::other{
public:
	$F inverse_square_root($CF a1){
		$LI b1;
		$F b2,b3;
		b2=a1*.5f;
		b3=a1;
		b1=*($LI*)&b3;
		b1=0x5f3759df-(b1>>1);
		b3=*($F*)&b1;
		b3=b3*(1.5f-(b2*b3*b3));
		return b3;
	}
};