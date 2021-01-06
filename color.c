#include "color.h"
#include <stdio.h>
#include <windows.h>
#include <stdarg.h>

void green(char *text, ...){
	
	/* save current text color */
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
	
	va_list pointer;
	va_start(pointer, text);
	
	/* set text color to green */
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
	
	vprintf(text, pointer);
	va_end(pointer);
	
	/* restore saved attributes */
	SetConsoleTextAttribute(hConsole, saved_attributes);
	
}

void blue(char *text, ...){
	
	/* save current text color */
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
	
	va_list pointer;
	va_start(pointer, text);
	
	/* set text color to green */
	SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
	
	vprintf(text, pointer);
	va_end(pointer);
	
	/* restore saved attributes */
	SetConsoleTextAttribute(hConsole, saved_attributes);
	
}

void red(char *text, ...){
	
	/* save current text color */
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
    WORD saved_attributes;
    GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
    saved_attributes = consoleInfo.wAttributes;
	
	va_list pointer;
	va_start(pointer, text);
	
	/* set text color to green */
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
	
	vprintf(text, pointer);
	va_end(pointer);
	
	/* restore saved attributes */
	SetConsoleTextAttribute(hConsole, saved_attributes);
	
}