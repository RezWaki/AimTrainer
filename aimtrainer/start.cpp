#include <Windows.h>
#include "start.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace aimtrainer;

BOOL WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, BOOL){
	Application::EnableVisualStyles();
	Application::Run(gcnew start);
	return TRUE;
}