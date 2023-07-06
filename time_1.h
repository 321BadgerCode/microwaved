//badger
#pragma once

struct my_time{
public:
int minute=0;
int second=0;
int total_second=0;
string text="";
int get_second(){
	int b1=(minute*60);
	return b1;
}
int get_minute(){
	int b1=round(total_second/60);
	return b1;
}
string toString(){text=to_string(minute)+" : "+to_string(second);return text;}
//int toInt(){char* b1=strtok(text,find);int b2=stoi(b1[0]);int b3=stoi(b1[1]);int b4=(b2*60)+b3;return b4;}
//operator string() const{return "test";}
//ostream& operator<<(ostream& str,Object const & v){return str;}
my_time(int second1){total_second=second1;minute=get_minute();second=total_second-get_second();}
my_time(string text1){text=text1;}
};