//badger
#include ".\main_1.h"

using namespace microwaved;

float data[5][2]={{1000,150000},{2000,400000},{3000,550000},{4000,625000},{5000,825000}};

float x[5]={0};
float y[5]={0};

template<typename a> int get_length(a a1){return sizeof(a1)+1;}

template<typename a> string get_list(a a1[]){
	string b1="";

	for(int b=0;b<get_length(a1)-1;b++){b1+=to_string(a1[b])+",";}
	b1+=to_string(a1[get_length(a1)-1]);

	return b1;
}

/*string get_number(float a1){
	string b1="";

	if(get_length(a1)>3){
		for(int a=0;a<get_length(a1);a+=3){b1+=to_string(a1)[a]+to_string(a1)[a+1]+to_string(a1)[a+2]+",";}
	}

	return b1;
}*/

float get_sum(float a1[]){
	float b1=0;

	for(int a=0;a<get_length(a1);a++){b1+=a1[a];}

	return b1;
}

float get_average(float a1[]){return get_sum(a1)/get_length(a1);}

float get_slope(){
	float numerator=0;
	float denominator=0;

	for(int a=0;a<get_length(x);a++){
		numerator+=(x[a]-get_average(x))*(y[a]-get_average(y));
		denominator+=pow(x[a]-get_average(x),2);
	}

	return numerator/denominator;
}

float get_y_intercept(){return get_average(y)-(get_slope()*get_average(x));}

float get_y(float x1){return get_slope()*x1+get_y_intercept();}//least sq. method

int main(){
	CONSOLE.set_title("TEST_PREDICT_1!");

	for(int a=0;a<5;a++){
		x[a]=data[a][0]/1000;
		y[a]=data[a][1]/100000;
	}

	CONSOLE.print(new console::text{.fore=COLOR.red,.str="info./given/data:"});
	CONSOLE.print("x: "+get_list(x));
	CONSOLE.print("y: "+get_list(y));

	CONSOLE.print("");

	float x1=stof(CONSOLE.input(new console::text{.fore=COLOR.orange,.str="sq. ft. house: "}))/1000;

	CONSOLE.print("");

	float y1=get_y(x1);
	CONSOLE.print("price house: $"+to_string(y1*100000));

	CONSOLE.pause();

	return 0;
}
//fix 'get_number()'