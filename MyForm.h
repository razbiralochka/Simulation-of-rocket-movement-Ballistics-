#pragma once
#include<cmath>
#include <stdlib.h>
namespace EulerMethod {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ информацияToolStripMenuItem;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;






	private: System::Windows::Forms::Label^ label27;





	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;






	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		
		

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ ThrustForce_TB;
	private: System::Windows::Forms::TextBox^ CF_TB;




		   
private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

		   
		
	
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->информацияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->ThrustForce_TB = (gcnew System::Windows::Forms::TextBox());
			this->CF_TB = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->информацияToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1484, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// информацияToolStripMenuItem
			// 
			this->информацияToolStripMenuItem->Name = L"информацияToolStripMenuItem";
			this->информацияToolStripMenuItem->Size = System::Drawing::Size(93, 20);
			this->информацияToolStripMenuItem->Text = L"Информация";
			this->информацияToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::информацияToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(44, 322);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(495, 148);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"GOST type B", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(44, 476);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(495, 61);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Моделировать движение";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(34, 56);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(143, 15);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Стартовая масса ракеты";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(34, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 15);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Начальная масса топлива";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(180, 49);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"50000";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(180, 77);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 7;
			this->textBox3->Text = L"40000";
			this->textBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->Location = System::Drawing::Point(113, 112);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(62, 15);
			this->label27->TabIndex = 34;
			this->label27->Text = L"Сила тяги";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(287, 57);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 15);
			this->label6->TabIndex = 39;
			this->label6->Text = L"кг.";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(286, 83);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(22, 15);
			this->label5->TabIndex = 40;
			this->label5->Text = L"кг.";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(284, 112);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(23, 15);
			this->label7->TabIndex = 41;
			this->label7->Text = L"кН.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(287, 196);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 15);
			this->label3->TabIndex = 52;
			this->label3->Text = L"м.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(284, 168);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(17, 15);
			this->label4->TabIndex = 51;
			this->label4->Text = L"Н.";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(284, 140);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(30, 15);
			this->label8->TabIndex = 50;
			this->label8->Text = L"м/с.";
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(180, 133);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(100, 22);
			this->textBox5->TabIndex = 49;
			this->textBox5->Text = L"2700";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(91, 196);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(83, 15);
			this->label9->TabIndex = 48;
			this->label9->Text = L"Длина ракеты";
			// 
			// textBox7
			// 
			this->textBox7->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox7->Location = System::Drawing::Point(180, 189);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 22);
			this->textBox7->TabIndex = 46;
			this->textBox7->Text = L"15";
			this->textBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(68, 168);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(106, 15);
			this->label10->TabIndex = 45;
			this->label10->Text = L"Управляющая сила";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(73, 140);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(104, 15);
			this->label11->TabIndex = 44;
			this->label11->Text = L"Удельный импульс";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(286, 252);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(17, 15);
			this->label12->TabIndex = 58;
			this->label12->Text = L"Н.";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(286, 224);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(17, 15);
			this->label13->TabIndex = 57;
			this->label13->Text = L"м.";
			// 
			// textBox8
			// 
			this->textBox8->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox8->Location = System::Drawing::Point(180, 217);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(100, 22);
			this->textBox8->TabIndex = 56;
			this->textBox8->Text = L"1";
			this->textBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(9, 252);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(168, 15);
			this->label14->TabIndex = 55;
			this->label14->Text = L"Сила лобового сопротивления";
			// 
			// textBox9
			// 
			this->textBox9->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox9->Location = System::Drawing::Point(180, 245);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(100, 22);
			this->textBox9->TabIndex = 54;
			this->textBox9->Text = L"100";
			this->textBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(79, 224);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(98, 15);
			this->label15->TabIndex = 53;
			this->label15->Text = L"Диаметр ракеты";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(287, 276);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(15, 15);
			this->label16->TabIndex = 61;
			this->label16->Text = L"с.";
			// 
			// textBox10
			// 
			this->textBox10->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox10->Location = System::Drawing::Point(180, 273);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 22);
			this->textBox10->TabIndex = 60;
			this->textBox10->Text = L"1";
			this->textBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->Location = System::Drawing::Point(104, 280);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(71, 15);
			this->label17->TabIndex = 59;
			this->label17->Text = L"Приращение";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			this->chart1->Location = System::Drawing::Point(568, 49);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(886, 609);
			this->chart1->TabIndex = 62;
			this->chart1->Text = L"chart1";
			// 
			// ThrustForce_TB
			// 
			this->ThrustForce_TB->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ThrustForce_TB->Location = System::Drawing::Point(181, 105);
			this->ThrustForce_TB->Name = L"ThrustForce_TB";
			this->ThrustForce_TB->Size = System::Drawing::Size(100, 22);
			this->ThrustForce_TB->TabIndex = 63;
			this->ThrustForce_TB->Text = L"700";
			this->ThrustForce_TB->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// CF_TB
			// 
			this->CF_TB->Font = (gcnew System::Drawing::Font(L"GOST type B", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CF_TB->Location = System::Drawing::Point(180, 161);
			this->CF_TB->Name = L"CF_TB";
			this->CF_TB->Size = System::Drawing::Size(100, 22);
			this->CF_TB->TabIndex = 64;
			this->CF_TB->Text = L"5";
			this->CF_TB->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1484, 670);
			this->Controls->Add(this->CF_TB);
			this->Controls->Add(this->ThrustForce_TB);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"BallisticMissileCalc";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void информацияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
	{
		MessageBox::Show("Программа моделирует полёт ракеты по баллистической траектории " + "\r\n"
			+ "Разработал: Филимонов И.А." + "\r\n" +
			"Проверил: Волоцуев В.В.", "Информация", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		double Time;
		double Rocket_M0;
		double Mf_0;
		double ThrustForce;
		double SpecificImpulse;
		double ControlForce;
		double Rocket_L;
		double Rocket_D;
		double Rocket_M;
		double DragForce;
		double dTime;
		double Mf;
		double RMoment;
		double inertia;
		double g;
		double Vx, Vy;
		double X, Y;
		double omega;
		double angle;
		int i;
		double *k = new double[4];
		
		chart1->Series[0]->Points->Clear();
		
		
		//Считаем данные с textBox-ов
		
		Rocket_M0 = Convert::ToDouble(textBox2->Text);
		Mf_0 = Convert::ToDouble(textBox3->Text);
		ThrustForce = Convert::ToDouble(ThrustForce_TB->Text)*1000;
		SpecificImpulse = Convert::ToDouble(textBox5->Text);
		ControlForce = Convert::ToDouble(CF_TB->Text);
		Rocket_L = Convert::ToDouble(textBox7->Text);
		Rocket_D = Convert::ToDouble(textBox8->Text);
		DragForce = Convert::ToDouble(textBox9->Text);
		dTime = Convert::ToDouble(textBox10->Text);
		g = 9.81;
		Time = 0;
		X = 0; Y = 0;
		Vx = 0; Vy = 0;
		omega = 0; angle = 0;
		Mf = Mf_0;
		
		while (Y >= 0)
		{
			
			chart1->Refresh();
			textBox1->Refresh();
			//Добавление позиции ИСЗ на график
			chart1->Series[0]->Points->AddXY(X, Y);




			//Вывод текущей информации
			textBox1->Text = //textBox1->Text + "\r\n" +
				"Время полёта: " + Convert::ToString(round(Time * 1000) / 1000) + "с."
				"\r\nСкорость: " + Convert::ToString(round(sqrt(Vx * Vx + Vy * Vy) * 1000) / 1000) + " м/с."
				"\r\nВысота:" + Convert::ToString(round(Y * 100) / 100) + " м."
				"\r\nУголовая скорость: " + Convert::ToString(round(omega * 1000) / 1000) + " рад/с."
				"\r\nУгол тангажа: " + Convert::ToString(round(angle * 1000) / 1000) + " рад."
				"\r\nМасса: " + Convert::ToString(round(Rocket_M * 1000) / 1000) + " кг."
				"\r\nТяга двигателей: " + Convert::ToString(ThrustForce) + " Н."
				"\r\nРули: " + Convert::ToString(ControlForce) + " Н."
				"\r\nОстаток топлива: " + Convert::ToString(Mf) + " кг.";
				
			
			
			
			
		

			//Текущая масса ракеты
			Rocket_M = (Rocket_M0 - Mf_0) + Mf;
			
					
				 
				 
		
			//Текущая тяга
			if (Mf <= 0) ThrustForce = 0;
			
		
			//Текущая управляющая сила
			if (Mf <= 0) ControlForce = 0;
			
			
			//Текущее количество топлива
			if (Mf > 0) Mf = Mf_0 - ((ThrustForce + ControlForce) / SpecificImpulse) * Time; else Mf = 0;

			//Момент действующий на ракету
			RMoment = ControlForce * (Rocket_L / 2);

			//Момент инерции ракеты
			inertia = (Rocket_M*pow(Rocket_D,2))/16+(Rocket_M * pow(Rocket_L, 2))/12; 

			
			//Угловая скорость
			for(i = 0; i<5; i++) k[i] = dTime * RMoment/inertia;
			omega = omega + (k[0] + 2 * k[1] + 2 * k[2] + k[3]) / 6;
			
			//Угол тангажа
			for (i = 0; i < 5; i++) k[i] = dTime * omega;
			angle = angle + (k[0] + 2 * k[1] + 2 * k[2] + k[3]) / 6;
			
			//Горизонтальная скорость
			for (i = 0; i < 5; i++) 
				k[i] = dTime * ((ThrustForce - DragForce) * sin( angle) - ControlForce * cos( angle)) / Rocket_M;
			Vx = Vx + (k[0] + 2 * k[1] + 2 * k[2] + k[3]) / 6;
			
			//Вертикальная скорость
			for (i = 0; i < 5; i++)
				k[i] = dTime * ((ThrustForce - DragForce) * cos(angle) + ControlForce * sin(angle) - Rocket_M * g) / Rocket_M;
			Vy = Vy + (k[0] + 2 * k[1] + 2 * k[2] + k[3]) / 6;
			
			//Дальность
			for (i = 0; i < 5; i++)
				k[i] = dTime * Vx;
			X = X + (k[0] + 2 * k[1] + 2 * k[2] + k[3]) / 6;
			
			//Высота
			for (i = 0; i < 5; i++)
				k[i] = dTime * Vy;
			Y = Y + (k[0] + 2 * k[1] + 2 * k[2] + k[3]) / 6;
			
			//Время
			Time += dTime;
		
			
			
		
			
			
			
			
			

			

			//System:Threading::Thread::Sleep(10);
		}
			
			
		
		delete[] k;
		
		



		






		




	}
	private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if (e->KeyChar == '.') e->KeyChar = ',';
	}
	private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		if (e->KeyChar == '.') e->KeyChar = ',';
	}
	};
}
