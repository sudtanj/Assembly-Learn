#include <stdio.h>

int main(){
	int a = 2;
	int b = 2;
	char hi[6] = "Hello";
	char earth[] = "World";
	char text[] = "%d";
	__asm
	{ // Remember Inst dest,src
		mov eax,a
		cmp eax,b
		jne sala
		add eax,b
		push eax
		lea eax, text
		push eax
		call DWORD ptr printf
		// or the indierct call
		// mov eax, printf
		// call eax
		pop ebx // clean up the stack
		pop ebx
		sala:
	}
	getchar();// wait for any key
}
