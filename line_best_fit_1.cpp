//badger
//engine
#include ".\\engine\\main_1.h"

using namespace microwaved;

float get_time_number(float time){//:30->.3(30 seconds)=>.5
	float b1=(time*100)/60;
	return b1;
}

string get_time(float time){//.5=>.3
	float b1=(time*60)/100;
	return b1;
}

float data[5][2]={{800,.5},{1000,.42},{1200,.33},{1800,.2},{2100,.17}};

float x[5]={0};
float y[5]={0};

template<typename a> int get_length(a a1){return sizeof(a1)+1;}

template<typename a> string get_list(a a1[]){
	string b1="";

	for(int b=0;b<get_length(a1)-1;b++){b1+=to_string(a1[b])+",";}
	b1+=to_string(a1[get_length(a1)-1]);

	return b1;
}

string get_number(float a1){
	string b1="";

	for(int a=0;a<get_length(a1)+1;a++){
		b1+=to_string(a1)[a];
		if(a>1&&(a+1)%3==0&&a<get_length(a1)-1){b1+=",";}
	}

	return b1;
}

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
CONSOLE.set_title("LINE_BEST_FIT_1!");
//console::size().set(console::size::default);
CONSOLE.scroll(false);

for(int a=0;a<5;a++){
	x[a]=data[a][0];
	y[a]=data[a][1];
}

cout<<"info./given/data:"<<endl;
cout<<"x: "<<get_list(x)<<endl;
cout<<"y: "<<get_list(y)<<endl;
cout<<endl;

cout<<"microwave wattage: ";
float x1=0;
cin>>x1;

float m=get_slope();
float b=get_y_intercept();
float y=get_y(x1);
cout<<"y=("+to_string(m)+"*"+to_string(x1)+")+"+to_string(b)<<endl;
cout<<"y="+to_string(y)<<endl;

CONSOLE.pause();

return 0;
}