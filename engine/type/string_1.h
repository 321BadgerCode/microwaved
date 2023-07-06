//badger
#pragma once

class string1{
public:
	$S text="";
	string1($S text1){text=text1;}
	$S for_do($CI a1,$CS a2){$S b1="";for($I a=0;a<a1;a++)b1+=a2;return b1;}
	$S for_do($CS a1){$S b1=for_do(text.size(),a1);return b1;}
	$S for_do2($CS a1){$S b1=text+"\n"+for_do(a1);return b1;}
	$S upper(){locale loc;$S b1="";for($I a=0;a<text.length();a++)b1+=toupper(text[a],loc);return b1;}
	$S lower(){locale loc;$S b1="";for($I a=0;a<text.length();a++)b1+=tolower(text[a],loc);return b1;}
	$S binary(){$S b1="";for($I a=0;a<text.size();a++)b1+=bitset<8>(text[a]).to_string();return b1;}
	//$S binary($CC a1){$S b1=bitset<8>(a1).to_string();return b1;}
	$I length(){$I b1=text.size();return b1;}
	/*$S replace($CS a1){
		$S b1="";

		for($I a=0;a<text.size();a++){
			for($I b=0;b<a1.size();b++){
				if(text[a]!=a1[b]){b1+=text[a];}
			}
		}

		return b1;
	}*/
	$S replace($CS a1){
		$S b1="";

		for($I a=0;a<text.size();a++){
			for($I b=0;b<a1.size();b++){
				if(text[a]!=a1[b]){b1+=text[a];}
			}
		}

		return b1;
	}
};