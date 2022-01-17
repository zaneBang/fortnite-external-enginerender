#include "includes.h"


static void decrypt_fname_entry(char* buf, int len)
{
	char* v2 = buf;
	unsigned __int16* v3 = 0;
	int v4 = len;
	__int16 result = 0;
	int v6 = 0;
	int v7 = 0;
	int v8 = 0;
	unsigned int v9 = 0;

	static DWORD_PTR decryptOffset = NULL;

	if (!decryptOffset)
		decryptOffset = ((DWORD_PTR)GetModuleHandleW(NULL) + 0xB672850);
	result = *(unsigned int*)decryptOffset;
	v6 = 0;
	v7 = 24;
	if (v4)
	{
		do
		{
			v8 = v6++;
			v9 = (v8 | 0xB000) + v7;
			result = v9 ^ ~*v2;
			v7 = v9 >> 2;
			*v2 = result;
			++v2;
		} while (v6 < v4);
	}
	return;
}