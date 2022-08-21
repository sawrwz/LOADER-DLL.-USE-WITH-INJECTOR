#include "define/stdafx.h"
#include "api/xor.h"
#include "api/api.h"
#include "driver/driver.h"
#include "inject/injector.h"
#include "api/drvutils.h"

int main()
{
	// driver init
	start_driver();
	cout << endl;

	//for fortnite
	ksinjector(xor_a("\x55\x6E\x72\x65\x61\x6C\x57\x69\x6E\x64\x6F\x77"), xor_w(L"dll path"/*your dll*/));

	cout << endl;
	system("pause");
}