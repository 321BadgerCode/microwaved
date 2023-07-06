//badger
#pragma once

class folder{
public:
	$S folder1;
	$V create(){mkdir(folder1.c_str());}
	//$V READ(){DIR *b1;struct dirent *b2;b1=opendir(FOLDER.c_str());while((b2=readdir(b1))!=NULL){printf("%s\n",b2->d_name);}closedir(b1);}
	$B exist(){struct stat b1;return stat(folder1.c_str(),&b1)==0;}
};