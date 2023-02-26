#include<stdio.h>
#include<Windows.h>

DWORD WINAPI function(LPVOID Parameter)
{
	while (1) {
		printf("Xin chao\r\n");
		Sleep(1000);
	}
}

void main()
{
	DWORD threadID = 0;
	HANDLE thread_a = CreateThread(NULL, 1024, function, NULL, 0, &threadID);
	while (1) {
		printf("Say hello\r\n");
		Sleep(1000);
	}
}