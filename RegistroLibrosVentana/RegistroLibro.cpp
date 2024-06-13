#include "RegistroLibro.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	RegistroLibroVentana::RegistroLibro form;
	Application::Run(% form);
}