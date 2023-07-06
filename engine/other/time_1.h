//badger
#pragma once

$CS DAY1[]={"Sun","Mon","Tue","Wed","Thu","Fri","Sat"};
$CS DAY2[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
class time2{
public:
	$TYPE(TYPE) $V wait(TYPE second){return Sleep(second*1000);}
	$TYPE(TYPE) $V wait2(TYPE millisecond){return Sleep(millisecond);}
	$S date(){time_t b1=time(0);$S b2=ctime(&b1);return b2;}
	//$S time2(){time_t b1=time(0);tm *b2=localtime(&b1);$I b3=b2->tm_hour;$I b4=b2->tm_min;$I b5=b2->tm_sec;$S b6=to_string(b3)+":"+to_string(b4)+":"+to_string(b5);return b6;}
	$I year(){time_t b1=time(0);tm *b2=localtime(&b1);$I b3=1900+b2->tm_year;return b3;}
	$I month(){time_t b1=time(0);tm *b2=localtime(&b1);$I b3=1+b2->tm_mon;return b3;}
	$I month_day(){time_t b1=time(0);tm *b2=localtime(&b1);$I b3=b2->tm_mday;return b3;}
	$I week_day(){time_t b1=time(0);tm *b2=localtime(&b1);$I b3=b2->tm_wday;return b3;}
	$S week_day2(){time_t b1=time(0);tm *b2=localtime(&b1);$I b3=b2->tm_wday;$S b4=DAY1[b3];return b4;}
	$S week_day3(){time_t b1=time(0);tm *b2=localtime(&b1);$I b3=b2->tm_wday;$S b4=DAY2[b3];return b4;}
	$I hour(){time_t b1=time(0);tm *b2=localtime(&b1);$I b3=b2->tm_hour;return b3;}
	$I minute(){time_t b1=time(0);tm *b2=localtime(&b1);$I b3=b2->tm_min;return b3;}
	$I second(){time_t b1=time(0);tm *b2=localtime(&b1);$I b3=b2->tm_sec;return b3;}
};
//fix time2()