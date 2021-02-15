#include <stdio.h>
#include <windows.h>
#include <stdarg.h>

#include "color.h"

int ColorPrint(int color, char *text, ...){
	
	/* save current text color */
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	WORD saved_attributes;
	GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	saved_attributes = consoleInfo.wAttributes;
	
	va_list pointer;
	va_start(pointer, text);
	
	switch (color){

		case 0: SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN); break;

		case 1: SetConsoleTextAttribute(hConsole, FOREGROUND_RED); break;

		case 2: SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE); break;
	}

	vprintf(text, pointer);
	va_end(pointer);
	
	/* restore saved attributes */
	SetConsoleTextAttribute(hConsole, saved_attributes);
	
}