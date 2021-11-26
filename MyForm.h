#pragma once
#include "windows.h"
#include "MyForm1.h"


namespace HotelUAMD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			password_txb->PasswordChar = '*';
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  login_btn;
	protected:
	private: System::Windows::Forms::TextBox^  username_txb;
	private: System::Windows::Forms::TextBox^  password_txb;
	private: System::Windows::Forms::Label^  username_lbl;
	private: System::Windows::Forms::Label^  password_lbl;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->login_btn = (gcnew System::Windows::Forms::Button());
			this->username_txb = (gcnew System::Windows::Forms::TextBox());
			this->password_txb = (gcnew System::Windows::Forms::TextBox());
			this->username_lbl = (gcnew System::Windows::Forms::Label());
			this->password_lbl = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// login_btn
			// 
			this->login_btn->Location = System::Drawing::Point(241, 73);
			this->login_btn->Name = L"login_btn";
			this->login_btn->Size = System::Drawing::Size(75, 23);
			this->login_btn->TabIndex = 0;
			this->login_btn->Text = L"Login";
			this->login_btn->UseVisualStyleBackColor = true;
			this->login_btn->Click += gcnew System::EventHandler(this, &MyForm::login_btn_Click);
			// 
			// username_txb
			// 
			this->username_txb->Location = System::Drawing::Point(124, 51);
			this->username_txb->Name = L"username_txb";
			this->username_txb->Size = System::Drawing::Size(100, 20);
			this->username_txb->TabIndex = 1;
			// 
			// password_txb
			// 
			this->password_txb->Location = System::Drawing::Point(124, 98);
			this->password_txb->Name = L"password_txb";
			this->password_txb->Size = System::Drawing::Size(100, 20);
			this->password_txb->TabIndex = 2;
			// 
			// username_lbl
			// 
			this->username_lbl->AutoSize = true;
			this->username_lbl->Location = System::Drawing::Point(22, 51);
			this->username_lbl->Name = L"username_lbl";
			this->username_lbl->Size = System::Drawing::Size(55, 13);
			this->username_lbl->TabIndex = 3;
			this->username_lbl->Text = L"Username";
			// 
			// password_lbl
			// 
			this->password_lbl->AutoSize = true;
			this->password_lbl->Location = System::Drawing::Point(24, 101);
			this->password_lbl->Name = L"password_lbl";
			this->password_lbl->Size = System::Drawing::Size(53, 13);
			this->password_lbl->TabIndex = 4;
			this->password_lbl->Text = L"Password";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->login_btn);
			this->groupBox1->Controls->Add(this->password_lbl);
			this->groupBox1->Controls->Add(this->username_txb);
			this->groupBox1->Controls->Add(this->username_lbl);
			this->groupBox1->Controls->Add(this->password_txb);
			this->groupBox1->Location = System::Drawing::Point(242, 89);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(321, 146);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Sign In";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 69);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(223, 183);
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(341, 12);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(155, 30);
			this->pictureBox2->TabIndex = 7;
			this->pictureBox2->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(575, 379);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Hotel Uamd";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void login_btn_Click(System::Object^  sender, System::EventArgs^  e) {


		String^ constring = L"datasource=sql4.freemysqlhosting.net;port=3306;username=sql4104531;password=hjurWirqBc";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from sql4104531.paneli where username='"+this->username_txb->Text+"' and password='"+this->password_txb->Text+"' ;", conDataBase);
		MySqlDataReader^ myReader;

		try {

			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();

			int count = 0;

			while (myReader->Read())
			{
				count = count + 1;
			}

			if (count == 1)
			{
				MessageBox::Show("Passwordi eshte i sakte!!!");
				this->Hide();
				MyForm1^ f1 = gcnew MyForm1();
				f1->ShowDialog();
			}
			else if (count > 1) {
				MessageBox::Show("Username eshte dhe password eshte i duplikuar !!!");
			}
			else
			{
				MessageBox::Show("Passwordi eshte i gabuar !!!");
			}
		}

		catch (Exception^ex) {

			MessageBox::Show(ex->Message);
		}




	}
};
}
