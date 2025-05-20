#define MESSAGE_TITLE TEXT ("���� ���������")
#define MAX_BUFFER_SIZE 256

// ������� ��� ��������� ��������������� ������ ���������
LPCTSTR GetMessageText()
{
	static TCHAR buffer[MAX_BUFFER_SIZE];

	// �������� ���������� � ������� ����������
	TCHAR buildInfo[MAX_BUFFER_SIZE];
	wsprintf(buildInfo, TEXT("Design time = %s, %s"),
		TEXT(__DATE__), TEXT(__TIME__));

	// �������� ������� ����� ����������
	SYSTEMTIME st;
	GetLocalTime(&st);
	TCHAR runTimeInfo[MAX_BUFFER_SIZE];
	wsprintf(runTimeInfo, TEXT("Run time = %02d.%02d.%d, %02d:%02d:%02d"),
		st.wDay, st.wMonth, st.wYear, st.wHour, st.wMinute, st.wSecond);

	// ��������� �������� ���������
	wsprintf(buffer,
		TEXT("������ �� Win32 ���������� � ����������� �����������. \n")
		TEXT("����� <���������, ��.40322>,\n")
		TEXT("%s\n")
		TEXT("%s"),
		buildInfo, runTimeInfo);
return buffer;
}