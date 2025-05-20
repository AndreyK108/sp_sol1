#include <Windows.h> 
#include "sp_pr1.h" 
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
{
	LPCTSTR lpszHelloText = MESSAGE_TEXT;
	LPCTSTR lpszHelloWndTitle = MESSAGE_TITLE;
	MessageBox(NULL, lpszHelloText, lpszHelloWndTitle, MB_OK);
	return 0;
}
