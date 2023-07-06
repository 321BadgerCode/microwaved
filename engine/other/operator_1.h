//badger
#pragma once

$DEF_CS $OPERATOR(add,$I,$I a1,$I a2){$I b1=a1+a2;return b1;}
$DEF_CS $OPERATOR(subtract,$I,$I a1,$I a2){$I b1=a1-a2;return b1;}
$DEF_CS $OPERATOR(multiply,$I,$I a1,$I a2){$I b1=a1*a2;return b1;}
$DEF_CS $OPERATOR(divide,$I,$I a1,$I a2){$I b1=a1/a2;return b1;}

$DEF_CS $OPERATOR(average,int,int a1,int a2){int x=(a1+a2)/2;return x;}
$DEF_CS $OPERATOR(percent,$I,$I a1,$I a2){$I b1=(a1*100)/a2;return b1;}
$DEF_CS $OPERATOR(power,$I,$I a1,$I exp){$I b1=pow(a1,exp);return b1;}

//$DEF_CS $KEYWORD(sine,$I a1){$I b1=1;b1*=a1;b1*=-1;return b1;}
//loop through array 'a1', add up, divide by length of array/'a'(loop range var.)
//$DEF_CS $KEYWORD(average_2,null,$I[] a1){$I b1=1;b1*=a1;b1*=-1;return b1;}

//#define sin <sine>