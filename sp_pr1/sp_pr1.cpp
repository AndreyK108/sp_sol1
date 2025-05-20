#include <Windows.h>
#include "sp_pr1.h"

void StudyMessageBoxValues()
{
    int iRetValue1, iRetValue2;
    LPCTSTR lpszMessageBoxTitle = TEXT("Вариант 12");
    LPCTSTR lpszResponse;

    do {
        // Окно с кнопками Abort/Retry/Ignore, иконкой STOP и 3-й кнопкой по умолчанию
        iRetValue1 = MessageBox(NULL,
            TEXT("The message box contains three push buttons: Abort, Retry, Ignore"),
            lpszMessageBoxTitle,
            MB_ABORTRETRYIGNORE | MB_ICONSTOP | MB_DEFBUTTON3 | MB_SETFOREGROUND);

        // Обработка результата
        switch (iRetValue1)
        {
        case IDABORT:
            lpszResponse = TEXT("You pressed Abort");
            break;
        case IDRETRY:
            lpszResponse = TEXT("You pressed Retry");
            break;
        case IDIGNORE:
            lpszResponse = TEXT("You pressed Ignore");
            break;
        default:
            lpszResponse = TEXT("Unknown response");
        }

        // Формируем сообщение для второго окна
        TCHAR buf[200] = TEXT("");
        lstrcat(buf, lpszResponse);
        lstrcat(buf, TEXT("\nContinue testing message boxes?"));

        // Второе окно с вопросом о продолжении
        iRetValue2 = MessageBox(NULL, buf, lpszMessageBoxTitle,
            MB_YESNO | MB_ICONQUESTION | MB_SETFOREGROUND);
    } while (iRetValue2 != IDNO);
}

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpszCmdLine, int nCmdShow)
{
    StudyMessageBoxValues();
    return 0;
}