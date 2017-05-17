// WhySleep.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Windows.h"
#include "Winsvc.h"

int main(int argc, char * argv[])
{
	EXECUTION_STATE ex =
		ES_CONTINUOUS |
		ES_SYSTEM_REQUIRED |
		ES_AWAYMODE_REQUIRED |
		ES_DISPLAY_REQUIRED;

	//DWORD  dwArgc = 0;
	//LPTSTR *lpszArgv = nullptr;
	//
	//ServiceMain(
	//	dwArgc,
	//	lpszArgv
	//	);


	if (argc > 1) {
		ex = atoi(argv[1]);
	}
	auto res = SetThreadExecutionState(ex);

	if (res == NULL) {
		printf("Call failed! code %u", res);
	}
	while (true) {
		::Sleep(60000);
	}
    return 0;
}

