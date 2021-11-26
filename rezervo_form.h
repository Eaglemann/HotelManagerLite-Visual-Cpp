#pragma once

namespace HotelUAMD {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	/// <summary>
	/// Summary for rezervo_form
	/// </summary>
	public ref class rezervo_form : public System::Windows::Forms::Form
	{
	public:
		rezervo_form(void)
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
		~rezervo_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::Label^  emerlbl;
	private: System::Windows::Forms::Label^  mbiemrilbl;
	private: System::Windows::Forms::Label^  moshalbl;
	private: System::Windows::Forms::Label^  adreslbl;
	private: System::Windows::Forms::TextBox^  emertextBox1;
	private: System::Windows::Forms::TextBox^  mbiemertextBox1;
	private: System::Windows::Forms::TextBox^  moshatextBox1;
	private: System::Windows::Forms::TextBox^  adresatextBox1;
	private: System::Windows::Forms::GroupBox^  rregjistroBox1;
	private: System::Windows::Forms::Label^  dhomalabel1;
	private: System::Windows::Forms::Button^  rregjistroklient;

	private: System::Windows::Forms::GroupBox^  fshijgroupBox1;
	private: System::Windows::Forms::Button^  buttonfshijklient;




	private: System::Windows::Forms::TextBox^  textBox1;






	private: System::Windows::Forms::Button^  updateklient;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(rezervo_form::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->emerlbl = (gcnew System::Windows::Forms::Label());
			this->mbiemrilbl = (gcnew System::Windows::Forms::Label());
			this->moshalbl = (gcnew System::Windows::Forms::Label());
			this->adreslbl = (gcnew System::Windows::Forms::Label());
			this->emertextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->mbiemertextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->moshatextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->adresatextBox1 = (gcnew System::Windows::Forms::TextBox());
			this->rregjistroBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->updateklient = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dhomalabel1 = (gcnew System::Windows::Forms::Label());
			this->rregjistroklient = (gcnew System::Windows::Forms::Button());
			this->fshijgroupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonfshijklient = (gcnew System::Windows::Forms::Button());
			this->rregjistroBox1->SuspendLayout();
			this->fshijgroupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(651, 372);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &rezervo_form::button1_Click);
			// 
			// emerlbl
			// 
			this->emerlbl->AutoSize = true;
			this->emerlbl->Location = System::Drawing::Point(41, 42);
			this->emerlbl->Name = L"emerlbl";
			this->emerlbl->Size = System::Drawing::Size(27, 13);
			this->emerlbl->TabIndex = 2;
			this->emerlbl->Text = L"Emri";
			// 
			// mbiemrilbl
			// 
			this->mbiemrilbl->AutoSize = true;
			this->mbiemrilbl->Location = System::Drawing::Point(41, 86);
			this->mbiemrilbl->Name = L"mbiemrilbl";
			this->mbiemrilbl->Size = System::Drawing::Size(43, 13);
			this->mbiemrilbl->TabIndex = 3;
			this->mbiemrilbl->Text = L"Mbiemri";
			// 
			// moshalbl
			// 
			this->moshalbl->AutoSize = true;
			this->moshalbl->Location = System::Drawing::Point(41, 127);
			this->moshalbl->Name = L"moshalbl";
			this->moshalbl->Size = System::Drawing::Size(39, 13);
			this->moshalbl->TabIndex = 4;
			this->moshalbl->Text = L"Mosha";
			// 
			// adreslbl
			// 
			this->adreslbl->AutoSize = true;
			this->adreslbl->Location = System::Drawing::Point(41, 162);
			this->adreslbl->Name = L"adreslbl";
			this->adreslbl->Size = System::Drawing::Size(40, 13);
			this->adreslbl->TabIndex = 5;
			this->adreslbl->Text = L"Adresa";
			// 
			// emertextBox1
			// 
			this->emertextBox1->Location = System::Drawing::Point(114, 39);
			this->emertextBox1->Name = L"emertextBox1";
			this->emertextBox1->Size = System::Drawing::Size(100, 20);
			this->emertextBox1->TabIndex = 6;
			// 
			// mbiemertextBox1
			// 
			this->mbiemertextBox1->Location = System::Drawing::Point(114, 79);
			this->mbiemertextBox1->Name = L"mbiemertextBox1";
			this->mbiemertextBox1->Size = System::Drawing::Size(100, 20);
			this->mbiemertextBox1->TabIndex = 7;
			// 
			// moshatextBox1
			// 
			this->moshatextBox1->Location = System::Drawing::Point(114, 120);
			this->moshatextBox1->Name = L"moshatextBox1";
			this->moshatextBox1->Size = System::Drawing::Size(100, 20);
			this->moshatextBox1->TabIndex = 8;
			// 
			// adresatextBox1
			// 
			this->adresatextBox1->Location = System::Drawing::Point(114, 155);
			this->adresatextBox1->Name = L"adresatextBox1";
			this->adresatextBox1->Size = System::Drawing::Size(100, 20);
			this->adresatextBox1->TabIndex = 9;
			// 
			// rregjistroBox1
			// 
			this->rregjistroBox1->Controls->Add(this->updateklient);
			this->rregjistroBox1->Controls->Add(this->textBox1);
			this->rregjistroBox1->Controls->Add(this->dhomalabel1);
			this->rregjistroBox1->Controls->Add(this->rregjistroklient);
			this->rregjistroBox1->Controls->Add(this->emertextBox1);
			this->rregjistroBox1->Controls->Add(this->adreslbl);
			this->rregjistroBox1->Controls->Add(this->adresatextBox1);
			this->rregjistroBox1->Controls->Add(this->moshalbl);
			this->rregjistroBox1->Controls->Add(this->emerlbl);
			this->rregjistroBox1->Controls->Add(this->moshatextBox1);
			this->rregjistroBox1->Controls->Add(this->mbiemertextBox1);
			this->rregjistroBox1->Controls->Add(this->mbiemrilbl);
			this->rregjistroBox1->Location = System::Drawing::Point(31, 31);
			this->rregjistroBox1->Name = L"rregjistroBox1";
			this->rregjistroBox1->Size = System::Drawing::Size(341, 310);
			this->rregjistroBox1->TabIndex = 10;
			this->rregjistroBox1->TabStop = false;
			this->rregjistroBox1->Text = L"Regjistro Klientin";
			// 
			// updateklient
			// 
			this->updateklient->Location = System::Drawing::Point(165, 259);
			this->updateklient->Name = L"updateklient";
			this->updateklient->Size = System::Drawing::Size(133, 45);
			this->updateklient->TabIndex = 13;
			this->updateklient->Text = L"Update";
			this->updateklient->UseVisualStyleBackColor = true;
			this->updateklient->Click += gcnew System::EventHandler(this, &rezervo_form::updateklient_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(114, 195);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 12;
			// 
			// dhomalabel1
			// 
			this->dhomalabel1->AutoSize = true;
			this->dhomalabel1->Location = System::Drawing::Point(41, 195);
			this->dhomalabel1->Name = L"dhomalabel1";
			this->dhomalabel1->Size = System::Drawing::Size(63, 13);
			this->dhomalabel1->TabIndex = 11;
			this->dhomalabel1->Text = L"Nr. Dhomes";
			// 
			// rregjistroklient
			// 
			this->rregjistroklient->Location = System::Drawing::Point(6, 259);
			this->rregjistroklient->Name = L"rregjistroklient";
			this->rregjistroklient->Size = System::Drawing::Size(133, 45);
			this->rregjistroklient->TabIndex = 10;
			this->rregjistroklient->Text = L"Regjistro klientin";
			this->rregjistroklient->UseVisualStyleBackColor = true;
			this->rregjistroklient->Click += gcnew System::EventHandler(this, &rezervo_form::rregjistroklient_Click);
			// 
			// fshijgroupBox1
			// 
			this->fshijgroupBox1->Controls->Add(this->textBox2);
			this->fshijgroupBox1->Controls->Add(this->label1);
			this->fshijgroupBox1->Controls->Add(this->buttonfshijklient);
			this->fshijgroupBox1->Location = System::Drawing::Point(434, 31);
			this->fshijgroupBox1->Name = L"fshijgroupBox1";
			this->fshijgroupBox1->Size = System::Drawing::Size(292, 310);
			this->fshijgroupBox1->TabIndex = 12;
			this->fshijgroupBox1->TabStop = false;
			this->fshijgroupBox1->Text = L"Fshij Klientin";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(55, 52);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(20, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(18, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"ID";
			// 
			// buttonfshijklient
			// 
			this->buttonfshijklient->Location = System::Drawing::Point(55, 259);
			this->buttonfshijklient->Name = L"buttonfshijklient";
			this->buttonfshijklient->Size = System::Drawing::Size(135, 45);
			this->buttonfshijklient->TabIndex = 4;
			this->buttonfshijklient->Text = L"Fshij Klientin";
			this->buttonfshijklient->UseVisualStyleBackColor = true;
			this->buttonfshijklient->Click += gcnew System::EventHandler(this, &rezervo_form::buttonfshijklient_Click);
			// 
			// rezervo_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(752, 432);
			this->Controls->Add(this->fshijgroupBox1);
			this->Controls->Add(this->rregjistroBox1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"rezervo_form";
			this->Text = L"UAMD Hotel";
			this->rregjistroBox1->ResumeLayout(false);
			this->rregjistroBox1->PerformLayout();
			this->fshijgroupBox1->ResumeLayout(false);
			this->fshijgroupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void rregjistroklient_Click(System::Object^  sender, System::EventArgs^  e) {

		String^ constring = L"datasource=sql4.freemysqlhosting.net;port=3306;username=sql4104800;password=DwQwccFLMP";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("insert into sql4104800.rregjistri (Emri,Mbiemri,Mosha,Adresa,Dhoma) values('"+this->emertextBox1->Text+"', '"+this->mbiemertextBox1->Text+"', '"+this->moshatextBox1->Text+"', '"+this->adresatextBox1->Text+"', '"+this->textBox1->Text+"'  ) ;", conDataBase);
		MySqlDataReader^ myReader;

		try {

			conDataBase->Open();
			myReader = cmdDataBase->ExecuteReader();
			MessageBox::Show("U Regjistrua!!!");

		}

		catch (Exception^ex) {

			MessageBox::Show(ex->Message);
		}


	}
private: System::Void buttonfshijklient_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring = L"datasource=sql4.freemysqlhosting.net;port=3306;username=sql4104800;password=DwQwccFLMP";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Delete from sql4104800.rregjistri where id='" + this->textBox2->Text + "' ;", conDataBase);
	MySqlDataReader^ myReader;

	try {

		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("U Fshi!!!");

	}

	catch (Exception^ex) {

		MessageBox::Show(ex->Message);
	}


}
private: System::Void updateklient_Click(System::Object^  sender, System::EventArgs^  e) {

	String^ constring = L"datasource=sql4.freemysqlhosting.net;port=3306;username=sql4104800;password=DwQwccFLMP";
	MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
	MySqlCommand^ cmdDataBase = gcnew MySqlCommand("Update sql4104800.rregjistri set Emri='" + this->emertextBox1->Text + "',Mbiemri= '" + this->mbiemertextBox1->Text + "',Mosha= '" + this->moshatextBox1->Text + "',Adresa= '" + this->adresatextBox1->Text + "',Dhoma= '" + this->textBox1->Text + "' where Emri='"+this->emertextBox1->Text+"'  ;", conDataBase);
	MySqlDataReader^ myReader;

	try {

		conDataBase->Open();
		myReader = cmdDataBase->ExecuteReader();
		MessageBox::Show("Updated!!!");

	}

	catch (Exception^ex) {

		MessageBox::Show(ex->Message);
	}

}
};
}
