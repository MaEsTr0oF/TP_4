#include "Main.h"
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm3.h"
#include "Educt.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^) {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	TP4::Main form;
	Application::Run(% form);
	
}