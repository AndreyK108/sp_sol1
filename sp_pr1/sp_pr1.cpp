#include <Windows.h>
#include "sp_pr1.h"

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE PrevInstance, LPSTR IpszCmdLine, int nCmdShow)
{
	LPCTSTR LpszHelloText = GetMessageText();
	LPCTSTR LpszHelloWndTitle = MESSAGE_TITLE;
	MessageBox(NULL, LpszHelloText, LpszHelloWndTitle, MB_OK);
	return 0;
}