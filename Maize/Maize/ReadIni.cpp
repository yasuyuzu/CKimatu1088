#include "ReadIni.h"
#include <stdio.h>
#include <Windows.h>
#define CHARBUFF 124

void getGurrentDirectory(char* currentDirectory)
{
	GetCurrentDirectory(CHARBUFF, currentDirectory);
}

int getPlayer() {
	char currentDirectory[CHARBUFF];
	getGurrentDirectory(currentDirectory);
	char section[CHARBUFF];
	sprintf_s(section, "section1");
	char keyWord[CHARBUFF];
	sprintf_s(keyWord, "keyword1");
	char settingFile[CHARBUFF];
	sprintf_s(settingFile, "%s\\setting.ini", currentDirectory);
	if (GetPrivateProfileString(section, keyWord, "none", keyValue, CHARBUFF, settingFile) != 0) {
		fprintf(stdout, "%s , %s\n", settingFile, keyValue);
	}
	else {
		fprintf(stdout, "%s doesn't contain [$s] %s\n", settingFile, section, keyWord);
	}
	return 0;
}
