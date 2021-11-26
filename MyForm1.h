#pragma once
#include "windows.h"
#include "rezervo_form.h"
#include "CmimetForm.h"
#include "KlientetForm.h"
#include "aboutForm.h"

namespace HotelUAMD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  exit_btn;
	protected:
	private: System::Windows::Forms::Button^  rezervo_btn;
	private: System::Windows::Forms::Button^  cmim_btn;
	private: System::Windows::Forms::Button^  klient_btn;
	private: System::Windows::Forms::Button^  about_btn;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->exit_btn = (gcnew System::Windows::Forms::Button());
			this->rezervo_btn = (gcnew System::Windows::Forms::Button());
			this->cmim_btn = (gcnew System::Windows::Forms::Button());
			this->klient_btn = (gcnew System::Windows::Forms::Button());
			this->about_btn = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// exit_btn
			// 
			this->exit_btn->Location = System::Drawing::Point(525, 357);
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(75, 23);
			this->exit_btn->TabIndex = 0;
			this->exit_btn->Text = L"Exit";
			this->exit_btn->UseVisualStyleBackColor = true;
			this->exit_btn->Click += gcnew System::EventHandler(this, &MyForm1::exit_btn_Click);
			// 
			// rezervo_btn
			// 
			this->rezervo_btn->Location = System::Drawing::Point(40, 50);
			this->rezervo_btn->Name = L"rezervo_btn";
			this->rezervo_btn->Size = System::Drawing::Size(99, 42);
			this->rezervo_btn->TabIndex = 1;
			this->rezervo_btn->Text = L"Rezervo";
			this->rezervo_btn->UseVisualStyleBackColor = true;
			this->rezervo_btn->Click += gcnew System::EventHandler(this, &MyForm1::rezervo_btn_Click);
			// 
			// cmim_btn
			// 
			this->cmim_btn->Location = System::Drawing::Point(199, 51);
			this->cmim_btn->Name = L"cmim_btn";
			this->cmim_btn->Size = System::Drawing::Size(99, 41);
			this->cmim_btn->TabIndex = 2;
			this->cmim_btn->Text = L"Cmimet";
			this->cmim_btn->UseVisualStyleBackColor = true;
			this->cmim_btn->Click += gcnew System::EventHandler(this, &MyForm1::cmim_btn_Click);
			// 
			// klient_btn
			// 
			this->klient_btn->Location = System::Drawing::Point(351, 51);
			this->klient_btn->Name = L"klient_btn";
			this->klient_btn->Size = System::Drawing::Size(99, 42);
			this->klient_btn->TabIndex = 3;
			this->klient_btn->Text = L"Klientet";
			this->klient_btn->UseVisualStyleBackColor = true;
			this->klient_btn->Click += gcnew System::EventHandler(this, &MyForm1::klient_btn_Click);
			// 
			// about_btn
			// 
			this->about_btn->Location = System::Drawing::Point(501, 51);
			this->about_btn->Name = L"about_btn";
			this->about_btn->Size = System::Drawing::Size(99, 42);
			this->about_btn->TabIndex = 4;
			this->about_btn->Text = L"About";
			this->about_btn->UseVisualStyleBackColor = true;
			this->about_btn->Click += gcnew System::EventHandler(this, &MyForm1::about_btn_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(40, 124);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(234, 227);
			this->pictureBox1->TabIndex = 5;
			this->pictureBox1->TabStop = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(306, 203);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(183, 103);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"L.1, Rruga e Currilave, Durrës\n\nTel: 00355 52 239161\n\nFax: 00355 52 239163\n\nEmail"
				L": info@uamd.edu.al";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(634, 406);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->about_btn);
			this->Controls->Add(this->klient_btn);
			this->Controls->Add(this->cmim_btn);
			this->Controls->Add(this->rezervo_btn);
			this->Controls->Add(this->exit_btn);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm1";
			this->Text = L"UAMD Hotel";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void exit_btn_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
private: System::Void rezervo_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	rezervo_form^ rf = gcnew rezervo_form();
	rf->ShowDialog();
}
private: System::Void cmim_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	CmimetForm^ cf = gcnew CmimetForm();
	cf->ShowDialog();
}
private: System::Void klient_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	KlientetForm^ kf = gcnew KlientetForm();
	kf->ShowDialog();
}
private: System::Void about_btn_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	aboutForm^ af = gcnew aboutForm();
	af->ShowDialog();
}
};
}
