//badger
#pragma once

class console{
private:
	HANDLE handle=GetStdHandle(STD_OUTPUT_HANDLE);
	HWND hwnd=GetConsoleWindow();
public:
	$V set_text($CI color1){SetConsoleTextAttribute(handle,color1);}
	$V color($CI fore,$CI back){$I b1=fore+(back*16);set_text(b1);}
	struct text{
	public:
		$I fore=7;
		$I back=0;
		$S str="";
		$V print(){$I b1=fore+(back*16);SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),b1);cout<<str;SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),7);}
	};
	$TYPE(TYPE) $V print(TYPE text){cout<<text<<endl;}
	$V print(text* a1){a1->str+="\n";a1->print();}
	$TYPE(TYPE) $V echo(TYPE text){cout<<text;}
	$V echo(text* a1){a1->print();}
	$TYPE(TYPE) $V error(TYPE text){cerr<<text<<endl;}
	$S input($CS text){$S b1;cout<<text;cin>>b1;return b1;}
	$S input(text* a1){$S b1;a1->print();cin>>b1;return b1;}
	$V set_title($CCT text){SetConsoleTitle(text);}
	$V scroll($CB a1){ShowScrollBar(hwnd,SB_BOTH,a1);}
	/*class size{
	public:
		$SI small;
		$SI medium;
		$SI large;
		$SI default;
		size(){small={30,20};medium={80,30};large={100,50};default={50,20};}
		$V set($CSI width,$CSI height){SMALL_RECT window_size={0,0,width,height};SetConsoleWindowInfo(handle,true,&window_size);}
		$V set($CSI size1[]){size(size1[0],size1[1]);}
	};*/
	$V pause(){system("PAUSE");}
	$V clear(){system("CLS");}
	$V wait(){cin.get();}
	$V leave(){exit(0);}
	$B key($CC key1){return _getch()==key1;}
	$V start($CS name){system(name.c_str());}
};