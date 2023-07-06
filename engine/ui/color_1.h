//badger
#pragma once

class color{
public:
	//special
	$CI black=0;
	$CI dark_blue=1;
	$CI green=2;
	$CI aqua=3;
	$CI red=4;
	$CI dark_purple=5;
	$CI yellow=6;
	$CI gray=7;
	$CI dark_gray=8;
	$CI blue=9;
	$CI light_green=10;
	$CI light_blue=11;
	$CI orange=12;
	$CI purple=13;
	$CI tan=14;
	$CI white=15;
	$CI indigo=dark_purple;
	$CI violet=purple;
	$CI light_tan=red|light_green;
	$CI turqoise=light_blue|light_green;
	//unicode
	$CS black2="\x1B[30m";
	$CS red2="\x1B[30m";
	$CS yellow2="\x1B[30m";
	$CS dark_blue2="\x1B[30m";
	$CS purple2="\x1B[30m";
	$CS blue2="\x1B[30m";
	$CS end2="\x1B[30m";
	//function
	$S set($CS color,$CS text){$S b1=color+text+end2;return b1;}
};