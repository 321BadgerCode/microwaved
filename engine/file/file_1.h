//badger
#pragma once

class file{
private:
	ofstream o_file;
	ifstream i_file;
public:
	$S file1;
	file($S file2){file1=file2;o_file.open(file1);o_file.close();i_file.open(file1);i_file.close();}
	$V write($CS text){o_file.open(file1);o_file<<text;file.close();}
	$S line($CI line_num){i_file.open(file1);$S b1;$I b2=0;while(getline(file,b1)&&b2!=line_num){b2++;b1="";}return b1;}
	$I lines(){i_file.open(file1);$S b1;$I b2=0;while(getline(file,b1)){b2++;}return b2;}
	$C letter($CI index){i_file.open(file1);$S b1;$I b2=0;while(getline(file,b1))b2+=b1.size();return b1[index];}
	$I letter(){i_file.open(file1);$S b1;$I b2=0;while(getline(file,b1))b2+=b1.size();return b2;}
	$I letter_in_line($CI line){i_file.open(file1);$S b1;$I b2=0;while(getline(file,b1)&&b2!=line)b2++,b1="";return b1.size();}
	$S read(){i_file.open(file1);$S b1;$S b2;while(getline(file,b1))b2+=b1+"\n";return b2;}
	$B exist(){i_file.open(file1);if(file){return true;}else{return false;}}
	$V start(){ShellExecute(NULL,"open",FILE.c_str(),NULL,NULL,SW_SHOWDEFAULT);}
};