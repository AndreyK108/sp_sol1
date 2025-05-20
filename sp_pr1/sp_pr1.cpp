#include <Windows.h>
#include "sp_pr1.h"

void ShowDifferentMessageBoxes()
{
    LPCTSTR lpszHelloText = GetMessageText();
    LPCTSTR lpszHelloWndTitle = MESSAGE_TITLE;

    // 1. Стандартное окно с кнопкой OK
    MessageBox(NULL, lpszHelloText, lpszHelloWndTitle, MB_OK);

    // 2. Окно с кнопками Да/Нет и иконкой вопроса
    MessageBox(NULL, lpszHelloText, lpszHelloWndTitle,
        MB_YESNO | MB_ICONQUESTION);

    // 3. Окно с кнопками ОК/Отмена и иконкой предупреждения
    MessageBox(NULL, lpszHelloText, lpszHelloWndTitle,
        MB_OKCANCEL | MB_ICONWARNING);

    // 4. Окно с кнопками Повтор/Отмена/Пропустить и иконкой ошибки
    MessageBox(NULL, lpszHelloText, lpszHelloWndTitle,
        MB_ABORTRETRYIGNORE | MB_ICONERROR);

    // 5. Окно с кнопками Да/Нет/Отмена и иконкой информации
    MessageBox(NULL, lpszHelloText, lpszHelloWndTitle,
        MB_YESNOCANCEL | MB_ICONINFORMATION);
}

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpszCmdLine, int nCmdShow)
{
    ShowDifferentMessageBoxes();
    return 0;
}