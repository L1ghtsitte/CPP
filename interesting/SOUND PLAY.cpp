#include <iostream>
#include <Windows.h>
#include <thread>
#pragma comment (lib, "winmm.lib")

int main()
{
	int num1;

	std::cin >> num1;

	if (num1 == 1)
	{

		mciSendString(L" play armatura_P29FH2w.mp3", NULL, 0, 0);
		system("pause");
		PlaySound(TEXT("armatura_P29FH2w.mp3"), NULL, SND_FILENAME | SND_ASYNC);
		system("pause");
	}

}
