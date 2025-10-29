#include <iostream>
#include <iomanip>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()
{
	int seconds = 0;
	int minutes = 0;
	int hours = 0;
	bool run = false;
	char tombol;

	while (true)
	{
		tombol = _getch();

		if (tombol == 'c' || tombol == 'c')
		{
			run = true;
		}
		else if (tombol == 's' || tombol == 's')
		{
			run = false;
		}
		else if (tombol == 'x' || tombol == 'x')
		{
			run = false;
			seconds = 0;
			minutes = 0;
			hours = 0;
		}

		if (run)
		{
			Sleep(1000);
			seconds++;
			// if seconds reach 60, increment minutes and reset seconds
			if (seconds >= 60)
			{
				seconds = 0;
				minutes++;
			}
			// if minutes reach 60, increment hours and reset minutes
			if (minutes >= 60)
			{
				minutes = 0;
				hours++;
			}
			// if hours reach 24, reset hours
			if (hours >= 24)
			{
				hours = 0;
			}

		}
	}	
	return 0;
}
	

