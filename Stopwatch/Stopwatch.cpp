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

cout << "tekan s untuk start \n";
cout << "tekan p untuk pause \n";
cout << "tekan t untuk restart \n";
cout << "tekan b untuk menghentikan program \n";

	while (true)
	{
if (_kbhit())
{
		tombol = _getch();

		if (tombol == 's' || tombol == 'S')
		{
			run = true;
		}
		else if (tombol == 'p' || tombol == 'P')
		{
			run = false;
		}
		else if (tombol == 't' || tombol == 'T')
		{
			run = false;
			seconds = 0;
			minutes = 0;
			hours = 0;
		}
else if (tombol == 'b' || tombol == 'B')
{
break;
}
}

		if (run)
		{
			Sleep(1000);
   system("cls");
			seconds++;
			// if seconds reach 60, increment minutes and reset seconds
			if (seconds >= 60)
			{
    system("cls");
				seconds = 0;
				minutes++;
			}
   
			// if minutes reach 60, increment hours and reset minutes
			if (minutes >= 60)
			{
    system("cls");
				minutes = 0;
				hours++;
			}
			// if hours reach 24, reset hours
			if (hours >= 24)
			{
				hours = 0;
			}

		}


cout << "tekan s untuk start \n";
cout << "tekan p untuk pause \n";
cout << "tekan t untuk restart \n";
cout << "tekan b untuk menghentikan program \n";
cout << setfill('0') << setw(2) << hours << ":"
     << setw(2) << minutes << ":"
     << setw(2) << seconds << endl;


	}	
	return 0;
}
	

