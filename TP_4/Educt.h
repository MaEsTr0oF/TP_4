#include "MyForm1.h"
#include "Settings.h"
#pragma once

namespace TP4 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Educt
	/// </summary>
	public ref class Educt : public System::Windows::Forms::Form
	{
	public:
		Educt(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Educt()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Educt::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Narrow", 19.2F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(59, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(569, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Какое образование у вашего оппонента\?";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->BackColor = System::Drawing::Color::Transparent;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->radioButton1->Location = System::Drawing::Point(75, 254);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(233, 33);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"нет образования";
			this->radioButton1->UseVisualStyleBackColor = false;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->BackColor = System::Drawing::Color::Transparent;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->radioButton2->Location = System::Drawing::Point(460, 363);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(124, 33);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"высшее";
			this->radioButton2->UseVisualStyleBackColor = false;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->BackColor = System::Drawing::Color::Transparent;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->radioButton3->Location = System::Drawing::Point(460, 254);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(145, 33);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"основное";
			this->radioButton3->UseVisualStyleBackColor = false;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->BackColor = System::Drawing::Color::Transparent;
			this->radioButton4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->radioButton4->Location = System::Drawing::Point(75, 363);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(364, 33);
			this->radioButton4->TabIndex = 4;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"среднее профессиональное";
			this->radioButton4->UseVisualStyleBackColor = false;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Info;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button1->Location = System::Drawing::Point(194, 485);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(301, 59);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Сохранить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Educt::button1_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(18, 568);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(676, 36);
			this->progressBar1->TabIndex = 6;
			// 
			// Educt
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(706, 600);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label1);
			this->DoubleBuffered = true;
			this->Name = L"Educt";
			this->Text = L"Образование";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
		
	private: 
		int education;
		System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked) {
			// Записываем результат выбора первого RadioButton
			education += 1;
		}
		else if (radioButton2->Checked) {
			// Записываем результат выбора второго RadioButton
			education += 2;
		}
		else if (radioButton3->Checked) {
			// Записываем результат выбора третьего RadioButton
			education += 3;
		}
		else if (radioButton4->Checked) {
			// Записываем результат выбора четвёртого RadioButton
			education += 4;
		}
		for (int i = 0; i <= 100; ++i) {
			progressBar1->Value = i;
			System::Threading::Thread::Sleep(30);
		}
		Settings^ MyObject = gcnew Settings();
		MyObject->MyProperty = education;
		this->Hide();
		MyForm1^ form3 = gcnew MyForm1();
		form3->ShowDialog();
		
	}
};
}
