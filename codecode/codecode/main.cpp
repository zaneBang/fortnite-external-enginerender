
#include "includes.h"
#include "enginerender.h"
#include "misc.h"

int main() {
	//external engine render base 
	int engineHud;
	int engineDraw;
	int alHud = 44;
	int allDraw = 45;
	int array69_x[] = { alHud };
	int n_x = sizeof(array69_x) / sizeof(array69_x[0]);
	int array69_y[] = { allDraw };
	int n_y = sizeof(array69_y) / sizeof(array69_y[0]);
	const char* c;
	const size_t cSize = strlen(c) + 1;
	wchar_t* wc = new wchar_t[cSize];
	mbstowcs(wc, c, cSize);
	int targetEngineHud = cSize;
	int targetEngineDraw = cSize;


	engineHud = hookEngineExternaly(array69_x, n_x, targetEngineHud);
	engineDraw = hookEngineExternaly(array69_y, n_y, targetEngineDraw);
	

}