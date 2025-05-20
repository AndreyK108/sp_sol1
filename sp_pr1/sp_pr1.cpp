#include <Windows.h> 
int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nCmdShow)
{
	LPCTSTR lpszHelloText = TEXT("Hello World Win32 GUI Application");
	LPCTSTR lpszHelloWndTitle = TEXT("Окно сообщения");
	MessageBox(NULL, lpszHelloText, lpszHelloWndTitle, MB_OK);
	return 0;
}
