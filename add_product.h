#pragma once

namespace SupermarketInventoryandBillingSystem {

	using namespace System::Globalization;
	using namespace MySql::Data::MySqlClient;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for add_product
	/// </summary>
	public ref class add_product : public System::Windows::Forms::Form
	{
	public:
		add_product(void)
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
		~add_product()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ save_btn;
	protected:

	private: System::Windows::Forms::TextBox^ id_textbox;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ name_textbox;





	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ price_textbox;

	private: System::Windows::Forms::TextBox^ qty_textbox;


	private: System::Windows::Forms::Label^ label5;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ description_label;
	private: System::Windows::Forms::TextBox^ description_textBox;
	private: System::Windows::Forms::TextBox^ sell_price_textbox;


	private: System::Windows::Forms::Label^ sell_price_label;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->save_btn = (gcnew System::Windows::Forms::Button());
			this->id_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->name_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->price_textbox = (gcnew System::Windows::Forms::TextBox());
			this->qty_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->description_label = (gcnew System::Windows::Forms::Label());
			this->description_textBox = (gcnew System::Windows::Forms::TextBox());
			this->sell_price_textbox = (gcnew System::Windows::Forms::TextBox());
			this->sell_price_label = (gcnew System::Windows::Forms::Label());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// save_btn
			// 
			this->save_btn->Cursor = System::Windows::Forms::Cursors::Default;
			this->save_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->save_btn->Location = System::Drawing::Point(223, 427);
			this->save_btn->Name = L"save_btn";
			this->save_btn->Size = System::Drawing::Size(383, 23);
			this->save_btn->TabIndex = 8;
			this->save_btn->Text = L"Save";
			this->save_btn->UseVisualStyleBackColor = true;
			this->save_btn->Click += gcnew System::EventHandler(this, &add_product::button1_Click);
			// 
			// id_textbox
			// 
			this->id_textbox->Location = System::Drawing::Point(323, 84);
			this->id_textbox->Name = L"id_textbox";
			this->id_textbox->Size = System::Drawing::Size(283, 20);
			this->id_textbox->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(220, 88);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 15);
			this->label1->TabIndex = 9;
			this->label1->Text = L"ID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(220, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 15);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Name";
			// 
			// name_textbox
			// 
			this->name_textbox->Location = System::Drawing::Point(323, 127);
			this->name_textbox->Name = L"name_textbox";
			this->name_textbox->Size = System::Drawing::Size(283, 20);
			this->name_textbox->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(220, 321);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(55, 15);
			this->label3->TabIndex = 14;
			this->label3->Text = L"Category";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(220, 227);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 15);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Purchase Price";
			this->label4->Click += gcnew System::EventHandler(this, &add_product::label4_Click);
			// 
			// price_textbox
			// 
			this->price_textbox->Location = System::Drawing::Point(323, 224);
			this->price_textbox->Name = L"price_textbox";
			this->price_textbox->Size = System::Drawing::Size(283, 20);
			this->price_textbox->TabIndex = 4;
			// 
			// qty_textbox
			// 
			this->qty_textbox->Location = System::Drawing::Point(323, 371);
			this->qty_textbox->Name = L"qty_textbox";
			this->qty_textbox->Size = System::Drawing::Size(283, 20);
			this->qty_textbox->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(220, 375);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(51, 15);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Quantity";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(329, 39);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(145, 20);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Add new Product";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"Convenience goods", L"Shopping goods", L"Speciality goods",
					L"Impulse goods", L"Emergancy goods", L"Raw materials", L"Installations", L"Accessory Equipments", L"Supplies", L"Services"
			});
			this->comboBox1->Location = System::Drawing::Point(323, 318);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(283, 21);
			this->comboBox1->TabIndex = 6;
			// 
			// description_label
			// 
			this->description_label->AutoSize = true;
			this->description_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->description_label->Location = System::Drawing::Point(220, 178);
			this->description_label->Name = L"description_label";
			this->description_label->Size = System::Drawing::Size(69, 15);
			this->description_label->TabIndex = 11;
			this->description_label->Text = L"Description";
			// 
			// description_textBox
			// 
			this->description_textBox->Location = System::Drawing::Point(323, 175);
			this->description_textBox->Name = L"description_textBox";
			this->description_textBox->Size = System::Drawing::Size(283, 20);
			this->description_textBox->TabIndex = 3;
			// 
			// sell_price_textbox
			// 
			this->sell_price_textbox->Location = System::Drawing::Point(323, 272);
			this->sell_price_textbox->Name = L"sell_price_textbox";
			this->sell_price_textbox->Size = System::Drawing::Size(283, 20);
			this->sell_price_textbox->TabIndex = 5;
			// 
			// sell_price_label
			// 
			this->sell_price_label->AutoSize = true;
			this->sell_price_label->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sell_price_label->Location = System::Drawing::Point(220, 273);
			this->sell_price_label->Name = L"sell_price_label";
			this->sell_price_label->Size = System::Drawing::Size(76, 15);
			this->sell_price_label->TabIndex = 13;
			this->sell_price_label->Text = L"Selling Price";
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::DeepSkyBlue;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(27, 504);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(843, 158);
			this->dataGridView1->TabIndex = 16;
			// 
			// add_product
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DeepSkyBlue;
			this->ClientSize = System::Drawing::Size(912, 749);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->sell_price_label);
			this->Controls->Add(this->sell_price_textbox);
			this->Controls->Add(this->description_textBox);
			this->Controls->Add(this->description_label);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->qty_textbox);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->price_textbox);
			this->Controls->Add(this->name_textbox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->id_textbox);
			this->Controls->Add(this->save_btn);
			this->Name = L"add_product";
			this->Text = L"add_product";
			this->Load += gcnew System::EventHandler(this, &add_product::add_product_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		float gst_array[10] = { 1.2,2.0,2.1,2.5,1.5,4.2,4.5,5,4.7,5.0 };
		try
		{
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=;Database=inventory";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			//extracting input
			double product_id = double::Parse(id_textbox->Text);
			String^ product_name = name_textbox->Text;
			String^ description = description_textBox->Text;
			float product_purchase_price = float::Parse(price_textbox->Text);
			float product_sell_price = float::Parse(sell_price_textbox->Text);
			String^ product_category = (comboBox1->SelectedItem)->ToString();
			//float product_gst = float::Parse(gst_txtbox->Text);
			float product_gst = gst_array[comboBox1->SelectedIndex];
			int product_qty = Int32::Parse(qty_textbox->Text);
			MySqlDataAdapter^ cmd = gcnew MySqlDataAdapter("insert into stock values(" + product_id + ",'" + product_name + "', '"+ description +"'," + product_purchase_price +","+product_sell_price+ ",'" + product_category + "'," + product_gst + "," + product_qty + ");select * from stock where product_id="+product_id+"", con);
			DataTable^ dt = gcnew DataTable();
			cmd->Fill(dt);
			bindingSource1->DataSource = dt;
			dataGridView1->DataSource = bindingSource1;
			MessageBox::Show("Product Added sucessfully");
			con->Close();
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);
		}
	}

private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void add_product_Load(System::Object^ sender, System::EventArgs^ e) {
}
};


}
