#include <iostream>

#include <conio.h>
#include "SharedMemory.h"

using namespace std;

// TODO 
/*
	1. Exceptions                                           Done (10%)
	2. Mechanisms of (Mutex - Semaphore - Critical Section) Done (30%)
	3. Mechanisms of (Read / WRITE)                         Done (50%)
	4. Dynamic resizing the shared memory
*/


int main()
{
	SharedMemory SM_Object(ShMemType::Server);
	uint8_t calulationBuffer[BUF_SIZE];
	while (true)
	{
		 // SM_Object.ReadMemory(calulationBuffer, BUF_SIZE);

		 // Do some calculation with the memory (calulationBuffer) then write it back to the shared memory 
		 
		 // SM_Object.WriteMemory(calulationBuffer, BUF_SIZE);
	}
	_getch();
	return 0;
}