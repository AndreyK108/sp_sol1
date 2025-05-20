#define MESSAGE_TITLE TEXT ("Окно сообщения")
#define MAX_BUFFER_SIZE 256

// Функция для получения форматированной строки сообщения
LPCTSTR GetMessageText()
{
	static TCHAR buffer[MAX_BUFFER_SIZE];

	// Получаем информацию о времени компиляции
	TCHAR buildInfo[MAX_BUFFER_SIZE];
	wsprintf(buildInfo, TEXT("Design time = %s, %s"),
		TEXT(__DATE__), TEXT(__TIME__));

	// Получаем текущее время выполнения
	SYSTEMTIME st;
	GetLocalTime(&st);
	TCHAR runTimeInfo[MAX_BUFFER_SIZE];
	wsprintf(runTimeInfo, TEXT("Run time = %02d.%02d.%d, %02d:%02d:%02d"),
		st.wDay, st.wMonth, st.wYear, st.wHour, st.wMinute, st.wSecond);

	// Формируем итоговое сообщение
	wsprintf(buffer,
		TEXT("Привет из Win32 приложения с графическим интерфейсом. \n")
		TEXT("Автор <Храмцевич, гр.40322>,\n")
		TEXT("%s\n")
		TEXT("%s"),
		buildInfo, runTimeInfo);
return buffer;
}