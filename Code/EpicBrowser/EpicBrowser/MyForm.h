#pragma once
#include "AboutInfo.h"
#include "MyForm.h"

//#define DEBUG


namespace EpicBrowser {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Net;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ BrowserActions;
	private: System::Windows::Forms::ToolStripMenuItem^ Settings;

	private:
	protected:



	private: System::Windows::Forms::ToolStripMenuItem^ About;



	public: System::Windows::Forms::TextBox^ BrowserAddressInput;
	public: System::Windows::Forms::WebBrowser^ WebBrowser;
	private: System::Windows::Forms::ToolStripMenuItem^ GooglePage;
	private: System::Windows::Forms::ToolStripMenuItem^ BingPage;

	private:


	public:

	public:
	private:

	public:



	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->BrowserActions = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->GooglePage = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->BingPage = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->About = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->Settings = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->BrowserAddressInput = (gcnew System::Windows::Forms::TextBox());
			this->WebBrowser = (gcnew System::Windows::Forms::WebBrowser());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->BrowserActions, this->Settings });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(784, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"BrowserMenu";
			// 
			// BrowserActions
			// 
			this->BrowserActions->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->GooglePage,
					this->BingPage, this->About
			});
			this->BrowserActions->Name = L"BrowserActions";
			this->BrowserActions->Size = System::Drawing::Size(59, 20);
			this->BrowserActions->Text = L"Actions";
			this->BrowserActions->Click += gcnew System::EventHandler(this, &MyForm::actionsToolStripMenuItem_Click);
			// 
			// GooglePage
			// 
			this->GooglePage->Name = L"GooglePage";
			this->GooglePage->Size = System::Drawing::Size(141, 22);
			this->GooglePage->Text = L"Google page";
			this->GooglePage->Click += gcnew System::EventHandler(this, &MyForm::GooglePage_Click);
			// 
			// BingPage
			// 
			this->BingPage->Name = L"BingPage";
			this->BingPage->Size = System::Drawing::Size(141, 22);
			this->BingPage->Text = L"Bing page";
			this->BingPage->Click += gcnew System::EventHandler(this, &MyForm::BingPage_Click);
			// 
			// About
			// 
			this->About->Name = L"About";
			this->About->Size = System::Drawing::Size(141, 22);
			this->About->Text = L"About";
			this->About->Click += gcnew System::EventHandler(this, &MyForm::About_Click);
			// 
			// Settings
			// 
			this->Settings->Name = L"Settings";
			this->Settings->Size = System::Drawing::Size(61, 20);
			this->Settings->Text = L"Settings";
			// 
			// BrowserAddressInput
			// 
			this->BrowserAddressInput->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->BrowserAddressInput->CharacterCasing = System::Windows::Forms::CharacterCasing::Lower;
			this->BrowserAddressInput->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->BrowserAddressInput->HideSelection = false;
			this->BrowserAddressInput->Location = System::Drawing::Point(0, 24);
			this->BrowserAddressInput->Name = L"BrowserAddressInput";
			this->BrowserAddressInput->Size = System::Drawing::Size(784, 20);
			this->BrowserAddressInput->TabIndex = 1;
			this->BrowserAddressInput->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &MyForm::AddressInput_KeyDown);
			// 
			// WebBrowser
			// 
			this->WebBrowser->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->WebBrowser->Location = System::Drawing::Point(0, 50);
			this->WebBrowser->MinimumSize = System::Drawing::Size(20, 20);
			this->WebBrowser->Name = L"WebBrowser";
			this->WebBrowser->Size = System::Drawing::Size(784, 510);
			this->WebBrowser->TabIndex = 2;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->WebBrowser);
			this->Controls->Add(this->BrowserAddressInput);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"EpicBrowser";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void actionsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void GooglePage_Click(System::Object^ sender, System::EventArgs^ e) {
		void Log();
		{
#ifdef DEBUG
			Console::WriteLine("User clicked something...\n");
#endif 
		}

		void GoToPage();
		{
			WebBrowser->Navigate("https://www.google.com");
#ifdef DEBUG
			Console::WriteLine("Google page are now loading!\n");
#endif
		}
	}
	private: System::Void BingPage_Click(System::Object^ sender, System::EventArgs^ e)
	{
		void Log();
		{
#ifdef DEBUG
			Console::WriteLine("User clicked something...\n");
#endif
		}

		void GoToPage();
		{
			WebBrowser->Navigate("https://www.bing.com");
#ifdef DEBUG
			Console::WriteLine("Bing page are now loading!\n");
#endif
		}
	}
	
	private: System::Void About_Click(System::Object^ sender, System::EventArgs^ e)
	{
		void OpenGui();
		{
			AboutInfo^ testDialog = gcnew AboutInfo;

			// Show testDialog as a modal dialog and determine if DialogResult = OK.
			if (testDialog->ShowDialog(this) == System::Windows::Forms::DialogResult::OK)
			{
#ifdef DEBUG
				Console::WriteLine("Dialog is equals OK...");
#endif

			}
			else
			{
#ifdef DEBUG
				Console::WriteLine("Dialog is cancelled!");
#endif
			}

			delete testDialog;
		}
	
	}


			private: System::Void AddressInput_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
			{
				void MakeAction();
				{

#ifdef DEBUG
					Console::WriteLine("User inputting...\n");
#endif 


					if (e->KeyCode == Keys::Enter)
					{
						if ( BrowserAddressInput->Text[7] == '/')
						{
#ifdef DEBUG
							Console::WriteLine("Adding http prefix...");
#endif
							WebBrowser->Text = "https://" + WebBrowser->Text;
						}
						WebBrowser->Navigate(BrowserAddressInput->Text);
					}

				}

			}

		
	};
}
