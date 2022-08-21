#pragma once


void start_driver()
{
	tryagain:
	driver().handle_driver();

	if (!driver().is_loaded())


// DEBUG_PRINT
	{
#ifdef DEBUG_PRINT
		cout << xor_a("driver initialize...") << endl;
#endif 		
		mmap_driver();
	}

	driver().handle_driver();

	if (!driver().is_loaded())
	{
		short code = MessageBoxA(0, "Driver Loading error! Error can happen when Valorants Anti Cheat is Active and/or Anti virus is Active. PLease Disable both!", "DRIVER ERROR", MB_ICONERROR | MB_RETRYCANCEL);

		if (code == 4)
		{
			goto tryagain;
		}
		if (code = 2)
		{
			exit(0);
		}
		
	}
#ifdef DEBUG_PRINT
	driver().is_loaded() ? cout << xor_a("driver initialized!") << endl : cout << xor_a("driver initialize error =<") << endl;
	getchar();
#endif 		
}

