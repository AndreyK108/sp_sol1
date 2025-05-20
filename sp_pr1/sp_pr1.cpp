#include <Windows.h>
#include "sp_pr1.h"

void StudyMessageBoxValues()
{
    int iRetValue1, iRetValue2;
    LPCTSTR lpszMesBoxTitle = TEXT("Изучаем MessageBox");
    LPCTSTR lpszResponse;

    do {
        // Первое окно с кнопками Abort/Retry/Ignore
        iRetValue1 = MessageBox(NULL,
            TEXT("Нажмите одну из кнопок."),
            lpszMesBoxTitle,
            MB_ABORTRETRYIGNORE | MB_ICONEXCLAMATION | MB_SETFOREGROUND);

        // Обработка результата
        switch (iRetValue1)
        {
        case IDABORT:
            lpszResponse = TEXT("Нажата кнопка Прервать (ABORT)");
            break;
        case IDRETRY:
            lpszResponse = TEXT("Нажата кнопка Повторить (RETRY)");
            break;
        case IDIGNORE:
            lpszResponse = TEXT("Нажата кнопка Пропустить (IGNORE)");
            break;
        default:
            lpszResponse = TEXT("Ответ мне не понятен.");
        }

        // Формируем сообщение для второго окна
        TCHAR buf[200] = TEXT("");
        lstrcat(buf, lpszResponse);
        lstrcat(buf, TEXT("\n\nПродолжить изучение возвращаемых значений?"));

        // Второе окно с вопросом о продолжении
        iRetValue2 = MessageBox(NULL, buf, lpszMesBoxTitle,
            MB_YESNO | MB_ICONQUESTION | MB_SETFOREGROUND);
    } while (iRetValue2 != IDNO);
}

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpszCmdLine, int nCmdShow)
{
    // Показываем информационное сообщение
    LPCTSTR lpszHelloText = GetMessageText();
    LPCTSTR lpszHelloWndTitle = MESSAGE_TITLE;
    MessageBox(NULL, lpszHelloText, lpszHelloWndTitle, MB_OK | MB_ICONINFORMATION);

    // Запускаем изучение возвращаемых значений
    StudyMessageBoxValues();

    return 0;
}