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
	/// Summary for KlientetForm
	/// </summary>
	public ref class KlientetForm : public System::Windows::Forms::Form
	{
	public:
		KlientetForm(void)
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
		~KlientetForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  buttonafishoklient;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(KlientetForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->buttonafishoklient = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(462, 339);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Exit";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &KlientetForm::button1_Click);
			// 
			// buttonafishoklient
			// 
			this->buttonafishoklient->Location = System::Drawing::Point(221, 290);
			this->buttonafishoklient->Name = L"buttonafishoklient";
			this->buttonafishoklient->Size = System::Drawing::Size(108, 39);
			this->buttonafishoklient->TabIndex = 1;
			this->buttonafishoklient->Text = L"Afisho Klientet";
			this->buttonafishoklient->UseVisualStyleBackColor = true;
			this->buttonafishoklient->Click += gcnew System::EventHandler(this, &KlientetForm::buttonafishoklient_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(37, 31);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(481, 239);
			this->dataGridView1->TabIndex = 2;
			// 
			// KlientetForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(549, 374);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->buttonafishoklient);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"KlientetForm";
			this->Text = L"UAMD Hotel";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
	private: System::Void buttonafishoklient_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ constring = L"datasource=sql4.freemysqlhosting.net;port=3306;username=sql4104800;password=DwQwccFLMP";
		MySqlConnection^ conDataBase = gcnew MySqlConnection(constring);
		MySqlCommand^ cmdDataBase = gcnew MySqlCommand("select * from sql4104800.rregjistri;", conDataBase);
		MySqlDataReader^ myReader;

		try {

			MySqlDataAdapter ^ sda = gcnew MySqlDataAdapter();
			sda->SelectCommand = cmdDataBase;
			DataTable^ dbdataset = gcnew DataTable();
			sda->Fill(dbdataset);
			BindingSource^ bSource = gcnew BindingSource();

			bSource->DataSource = dbdataset;
			dataGridView1->DataSource = bSource;
			sda->Update(dbdataset);

		}

		catch (Exception^ex) {

			MessageBox::Show(ex->Message);
		}

	}
	};
}
