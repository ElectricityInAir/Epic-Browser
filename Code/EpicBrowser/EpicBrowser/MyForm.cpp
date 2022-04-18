#include "MyForm.h"
//#define DEBUG 

using namespace System;
using namespace System::Web;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Threading::Tasks;
using namespace System::Net;
using namespace std;



[STAThread]
int main(array<String^>^ arg)
{
#ifdef DEBUG
    Console::WriteLine("Application is running...\n");
    Console::Title = "Debug Console";

#endif 

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    EpicBrowser::MyForm form;
    Application::Run(% form);

#ifdef DEBUG
    Threading::Thread::Sleep(60);
    Console::WriteLine("Application ran successfully, awaiting for closing...");
#endif
    return 0;
}