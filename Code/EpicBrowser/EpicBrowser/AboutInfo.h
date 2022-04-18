#pragma once

namespace EpicBrowser {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ AboutInfo
	/// </summary>
	public ref class AboutInfo : public System::Windows::Forms::Form
	{
	public:
		AboutInfo(void)
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
		~AboutInfo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ OK_Button;
	private: System::Windows::Forms::Label^ Info_Part1;
	private: System::Windows::Forms::Label^ Info_Part2;
	private: System::Windows::Forms::PictureBox^ Image;





	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AboutInfo::typeid));
			this->OK_Button = (gcnew System::Windows::Forms::Button());
			this->Info_Part1 = (gcnew System::Windows::Forms::Label());
			this->Info_Part2 = (gcnew System::Windows::Forms::Label());
			this->Image = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Image))->BeginInit();
			this->SuspendLayout();
			// 
			// OK_Button
			// 
			this->OK_Button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->OK_Button->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->OK_Button->Location = System::Drawing::Point(205, 224);
			this->OK_Button->Name = L"OK_Button";
			this->OK_Button->Size = System::Drawing::Size(75, 25);
			this->OK_Button->TabIndex = 0;
			this->OK_Button->Text = L"OK";
			this->OK_Button->UseVisualStyleBackColor = true;
			// 
			// Info_Part1
			// 
			this->Info_Part1->AutoSize = true;
			this->Info_Part1->Location = System::Drawing::Point(44, 149);
			this->Info_Part1->Name = L"Info_Part1";
			this->Info_Part1->Size = System::Drawing::Size(404, 13);
			this->Info_Part1->TabIndex = 1;
			this->Info_Part1->Text = L"This is a test project, not recommended for everyday use. Based on Internet Explo"
				L"rer";
			// 
			// Info_Part2
			// 
			this->Info_Part2->AutoSize = true;
			this->Info_Part2->Location = System::Drawing::Point(184, 172);
			this->Info_Part2->Name = L"Info_Part2";
			this->Info_Part2->Size = System::Drawing::Size(138, 13);
			this->Info_Part2->TabIndex = 2;
			this->Info_Part2->Text = L"and .NET Framework 4.7.2.";
			this->Info_Part2->Click += gcnew System::EventHandler(this, &AboutInfo::Info_Part2_Click);
			// 
			// Image
			// 
			this->Image->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Image->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Image.Image")));
			this->Image->Location = System::Drawing::Point(195, 37);
			this->Image->Name = L"Image";
			this->Image->Size = System::Drawing::Size(100, 100);
			this->Image->TabIndex = 3;
			this->Image->TabStop = false;
			// 
			// AboutInfo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 261);
			this->Controls->Add(this->Image);
			this->Controls->Add(this->Info_Part2);
			this->Controls->Add(this->Info_Part1);
			this->Controls->Add(this->OK_Button);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(500, 300);
			this->MinimumSize = System::Drawing::Size(500, 300);
			this->Name = L"AboutInfo";
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"About";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Image))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Info_Part2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
