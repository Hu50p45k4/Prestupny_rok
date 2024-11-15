// prestupnyRok.cpp: Definuje vstupní bod pro aplikaci.
//

#include "prestupnyRok.h"

using namespace std;
int a;

int jePrestupny(int rok)
{
	

	if (rok % 4 == 0 && rok % 100 != 0)
	{	
		a = 1;
		return 0;
	}
	else
	{
		if (rok % 400 == 0)
		{
			a = 1;
			return 0;
		}
		a = 0;
		return 0;
	}


}




int main()
{
	
	jePrestupny(1000);
	printf_s("1000    %i \n", a);

	jePrestupny(2000);
	printf_s("2000    %i \n", a);

	jePrestupny(2002);
	printf_s("2002    %i \n", a);

	jePrestupny(2012);
	printf_s("2012    %i \n", a);

	jePrestupny(2022);
	printf_s("2022    %i \n", a);

	jePrestupny(2200);
	printf_s("2200    %i /n", a);





	return 0;
}
