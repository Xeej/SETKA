#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main1(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project2::MyForm1 form; //WinFormsTest - ��� ������ �������
	Application::Run(%form);
}