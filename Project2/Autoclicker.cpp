#include "Autoclicker.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
    Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project2::Autoclicker form; //WinFormsTest - имя вашего проекта
	Application::Run(%form);
}