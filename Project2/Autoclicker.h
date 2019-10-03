#pragma once
#include "windows.h"
#include <iostream>
#include <WinUser.h>
#include <stdio.h>
#include <fstream>
#include <string>
#include "MyForm.h"
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	////////////
	const int VerViz = 15;//кол итераций выздаравливание
	struct Node
	{
		int x, y, Viz = VerViz;
		bool su = true, z = false;
		int Color = 0;
	};
	Node Nodes1[900];
	Node Nodes2[900];
	int tmpzd[10000],tmpzar[10000];
	int lengthx, lengthy, n,ColIter=0;
	int **Sv1;
	int **Sv2;
	int VerZar;
	int r;
	////////////
	/// <summary>
	/// Сводка для Autoclicker
	/// </summary>
	public ref class Autoclicker : public System::Windows::Forms::Form
	{
	public:
		Autoclicker(void)
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
		~Autoclicker()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  picture;
	protected:

	protected:
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button6;
	private: System::ComponentModel::IContainer^  components;




	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->picture = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// picture
			// 
			this->picture->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->picture->Dock = System::Windows::Forms::DockStyle::Fill;
			this->picture->Location = System::Drawing::Point(0, 0);
			this->picture->Name = L"picture";
			this->picture->Size = System::Drawing::Size(909, 438);
			this->picture->TabIndex = 0;
			this->picture->TabStop = false;
			this->picture->Click += gcnew System::EventHandler(this, &Autoclicker::picture_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel1->Location = System::Drawing::Point(611, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(298, 438);
			this->panel1->TabIndex = 1;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(230, 403);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(56, 23);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Default";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Autoclicker::button6_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(30, 416);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(128, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Количество итераций: 0";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(42, 368);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(87, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Сохранить слои";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(42, 304);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Загрузить слои";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(218, 130);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 13);
			this->label3->TabIndex = 10;
			this->label3->Text = L"В процентах";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(14, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 13);
			this->label2->TabIndex = 9;
			this->label2->Text = L"Вероятность заражения";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(49, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(98, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Количество узлов";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(164, 363);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"...";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Autoclicker::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(164, 299);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"...";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Autoclicker::button3_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(33, 161);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Статистика";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Autoclicker::button5_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(66, 63);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(92, 17);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"Смена пояса";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Autoclicker::checkBox1_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(164, 59);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(112, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Рандом узлы";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Autoclicker::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(216, 161);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Начать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Autoclicker::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(153, 107);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->Text = L"45";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(153, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"25";
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &Autoclicker::timer1_Tick);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Autoclicker
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(909, 438);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->picture);
			this->Name = L"Autoclicker";
			this->Text = L"Иммитация заражения";
			this->Load += gcnew System::EventHandler(this, &Autoclicker::Autoclicker_Load);
			this->ResizeEnd += gcnew System::EventHandler(this, &Autoclicker::Autoclicker_ResizeEnd);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->picture))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		void SchetUzl(Node Nodes[])
		{
			lengthy = ((picture->Width - (picture->Width - panel1->Location.X)) - 40) / (n - 1);
			lengthx = (picture->Height - 40) / (n - 1);
			if (lengthx > lengthy) r = lengthy / 2; else r = lengthx / 2;
			lengthy = ((picture->Width - (picture->Width - panel1->Location.X) - r) - 40) / (n - 1);
			lengthx = (picture->Height - 40 - r) / (n - 1);
			for (int i = 0; i <= n * n - 1; i++)
			{
				if (Nodes != Nodes1)
				{
					Nodes[i].x = lengthy * (i % n) + 13;
					Nodes[i].y = lengthx * (i / n) + 13;
				}
				else
				{
					Nodes[i].x = lengthy * (i % n) + 13 + r / 2;
					Nodes[i].y = lengthx * (i / n) + 13 + r / 2;
				}
			}
		}
		void Draw()
		{
			SchetUzl(Nodes1);
			SchetUzl(Nodes2);
			picture->Image = gcnew Bitmap(picture->Width, picture->Height);
			Graphics ^g = Graphics::FromImage(picture->Image);
			SolidBrush ^br = gcnew SolidBrush(Color::White);
			SolidBrush ^wh = gcnew SolidBrush(Color::White);
			SolidBrush ^red = gcnew SolidBrush(Color::Red);
			//button1->Text = lengthx.ToString();
			if ((!checkBox1->Checked) || (timer1->Enabled))
			{
				for (int i = 0; i <= n * n - 1; i++)
				{
					br = wh;
					if (Sv1[i][i + 1] == 1)
						g->FillRectangle(br, Nodes1[i].x + r, Nodes1[i].y + r / 2, Nodes1[i + 1].x - Nodes1[i].x - r, 4);
					if (Sv1[i][i + n])
						g->FillRectangle(br, Nodes1[i].x + r / 2, Nodes1[i].y + r, 4, Nodes1[i + n].y - Nodes1[i].y - r);
				}
				for (int i = 0; i <= n * n - 1; i++)
					if (Nodes1[i].su)
					{
						switch (Nodes1[i].Color)
						{
						case 0:br = wh; break;
						case 1:br = red; break;
						}
						g->FillEllipse(br, Nodes1[i].x, Nodes1[i].y, r, r);
					}
			}
			if ((checkBox1->Checked) || (timer1->Enabled))
			{
				for (int i = 0; i <= n * n - 1; i++)
				{
					br = wh;
					if (Sv2[i][i + 1])
						g->FillRectangle(br, Nodes2[i].x + r, Nodes2[i].y + r / 2, Nodes2[i + 1].x - Nodes2[i].x - r, 4);
					if (Sv2[i][i + n])
						g->FillRectangle(br, Nodes2[i].x + r / 2, Nodes2[i].y + r, 4, Nodes2[i + n].y - Nodes2[i].y - r);
				}
				for (int i = 0; i <= n * n - 1; i++)
					if (Nodes2[i].su)
					{
						switch (Nodes2[i].Color)
						{
						case 0:br = wh; break;
						case 1:br = red; break;
						}
						g->FillEllipse(br, Nodes2[i].x, Nodes2[i].y, r, r);
					}
			}
		}
		void randomZap(Node Nodes[], int ** &Sv)
		{


			if (!Sv)
			{
				Sv = new int*[10000];                //Выделяем новую память
				for (int i = 0; i < 10000; i++)
					Sv[i] = new int[10000];
				for (int i = 0; i < 10000; i++)
					for (int j = 0; j < 10000; j++)
						Sv[i][j] = 0;
			}
			for (int i = 0; i <= n * n - 1; i++)
			{
				Nodes[i].su = rand() % 2;
				if (Nodes[i].su) Nodes[i].Color = rand() % 2; else { Nodes[i].su = false; Nodes[i].Color = 2; Nodes[i].z = false; }
				if (Nodes[i].Color == 1) Nodes[i].z = true; else Nodes[i].z = false;
			}
			/*	if ((Nodes[1].su) && (Nodes[2].su))
					Sv[1][2] = 1; else Sv[1][2] = 0;
				if ((Nodes[3].su) && (Nodes[7].su))
					Sv[3][7] = 1; else Sv[3][7] = 0;
				*/

			for (int i = 0; i <= n * n - 1; i++)
				if ((Nodes[i].su) && (Nodes[i + 1].su) && (i / n != 0))
				{
					Sv[i][i + 1] = rand() % 2;
					Sv[i + 1][i] = Sv[i][i + 1];
				}
				else
				{
					Sv[i][i + 1] = 0;
					Sv[i + 1][i] = Sv[i][i + 1];
				}
			for (int i = 0; i <= n * n - n - 1; i++)
				if ((Nodes[i].su) && (Nodes[i + n].su))
				{
					Sv[i][i + n] = rand() % 2;
					Sv[i + n][i] = Sv[i][i + n];
				}
				else
				{
					Sv[i][i + n] = 0;
					Sv[i + n][i] = Sv[i][i + n];
				}

		}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			n = Convert::ToInt16(textBox1->Text);
			if ((!checkBox1->Checked) || (timer1->Enabled)) randomZap(Nodes1, Sv1);
			if ((checkBox1->Checked) || (timer1->Enabled)) randomZap(Nodes2, Sv2);
			Draw();
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			if (button1->Text == "Начать")
			{
				n = Convert::ToInt16(textBox1->Text);
				VerZar = Convert::ToInt16(textBox2->Text);
				//	VerViz = Convert::ToInt16(textBox3->Text);
				Draw();
				timer1->Enabled = true;
				button1->Text = "Стоп";
				button5->Visible = false;
			}
			else
			{
				timer1->Enabled = false;
				button1->Text = "Начать";
				button5->Visible = true;
			}
		}
	private: System::Void Autoclicker_ResizeEnd(System::Object^  sender, System::EventArgs^  e) 
		{
			Draw();
		}
			 bool ChekElipce(int &k, int x, int y, Node Nodes[])
			 {
				 for (int i = 0; i <= n * n - 1; i++)
				 {
					 int X = (Nodes[i].x + r / 2 - x + 8) *(Nodes[i].x + r / 2 - x + 8);//центр окр по Х
					 int Y = (Nodes[i].y + r / 2 - y + 31) *(Nodes[i].y + r / 2 - y + 31);//Центр окр по У
					 if ((X + Y <= ((r / 2)*(r / 2))))
					 {
						 k = i;
						 return true;
						 break;
					 }
				 }

				 return false;
			 }
			 void ChekReb(int x, int y, Node Nodes[], int **Sv)
			 {
				 for (int i = 0; i <= n * n - 1; i++)
					 if ((Nodes[i].su) && (Nodes[i + 1].su) && (x - 8 >= Nodes[i].x + r) && (x - 8 <= Nodes[i + 1].x) && (y - 31 >= Nodes[i].y + r / 2) && (y - 31 <= Nodes[i].y + r / 2 + 4))
					 {
						 if (Sv[i][i + 1] == 1)
						 {
							 Sv[i][i + 1] = 0;
							 Sv[i + 1][i] = 0;
						 }
						 else
						 {
							 Sv[i][i + 1] = 1;
							 Sv[i + 1][i] = 1;
						 }
						 break;
					 }
				 for (int i = 0; i <= n * n - n - 1; i++)
					 if ((Nodes[i].su) && (Nodes[i + n].su) && (x - 8 >= Nodes[i].x + r / 2) && (x - 8 <= Nodes[i].x + r / 2 + 4) && (y - 31 >= Nodes[i].y + r) && (y - 31 <= Nodes[i + n].y))
					 {
						 if (Sv[i][i + n] == 1)
						 {
							 Sv[i][i + n] = 0;
							 Sv[i + n][i] = 0;
						 }
						 else
						 {
							 Sv[i][i + n] = 1;
							 Sv[i + n][i] = 1;
						 }
						 break;
					 }
			 }
			 void Klick(int x, int y, Node Nodes[], int ** &Sv)
			 {
				 int i;
				 if (ChekElipce(i, x, y, Nodes))
				 {
					 Nodes[i].Color++;
					 if (Nodes[i].Color == 1) Nodes[i].z = true; else Nodes[i].z = false;
					 if (Nodes[i].Color == 2)
					 {
						 Nodes[i].su = false;
						 if ((n*n - i) > n)
						 {
							 Sv[i][i + 1] = false;
							 Sv[i][i + n] = false;
							 Sv[i + 1][i] = false;
							 Sv[i + n][i] = false;
						 }
						 if (i / n != 0)
						 {
							 Sv[i - n][i] = false;
							 Sv[i - 1][i] = false;
							 Sv[i][i - n] = false;
							 Sv[i][i - 1] = false;
						 }
					 }
					 if (Nodes[i].Color == 3)
					 {
						 Nodes[i].Color = 0; Nodes[i].su = true; Nodes[i].z = false;
					 }

				 }
				 ChekReb(x, y, Nodes, Sv);
			 }
	private: System::Void picture_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			int x = this->MousePosition.X - this->Location.X;
			int y = this->MousePosition.Y - this->Location.Y;
			if (!checkBox1->Checked) Klick(x, y, Nodes1, Sv1);
			if (checkBox1->Checked) Klick(x, y, Nodes2, Sv2);
			Draw();
		}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) 
		{
		//пеовый слой
		int ran;
		for (int i = 0; i <= n * n - 1; i++)
		{
			bool f = false;
			if ((Nodes1[i].su) && (!Nodes1[i].z))
			{
				if ((n*n - i) > n)
					if (((Sv1[i][i + 1]) && (Nodes1[i + 1].z)) || ((Sv1[i][i + n]) && (Nodes1[i + n].z)) || (Nodes2[i].z)) f = true;
				if (i / n != 0)
					if (((Sv1[i][i - 1]) && (Nodes1[i - 1].z)) || ((Sv1[i][i - n]) && (Nodes1[i - n].z)) || (Nodes2[i].z)) f = true;
				if (f)
				{
					ran = rand() % 101;
					if (ran <= VerZar)
					{
						Nodes1[i].Color = 1;
						Nodes1[i].z = true;
						Nodes1[i].Viz = VerViz;
					}
				}
			}
			else
				if ((Nodes1[i].su) && (Nodes1[i].Color == 1))
				{
					Nodes1[i].Viz--;
					if ((Nodes1[i].Viz == 0))
					{
						Nodes1[i].Color = 0;
						Nodes1[i].z = false;
					}
				}
			f = false;
			if ((Nodes2[i].su) && (!Nodes2[i].z))
			{
				if ((n*n - i) > n)
					if (((Sv2[i][i + 1]) && (Nodes2[i + 1].z)) || ((Sv2[i][i + n]) && (Nodes2[i + n].z)) || (Nodes1[i].z)) f = true;
				if (i / n != 0)
					if (((Sv2[i][i - 1]) && (Nodes2[i - 1].z)) || ((Sv2[i][i - n]) && (Nodes2[i - n].z)) || (Nodes1[i].z)) f = true;
				if (f)
				{
					ran = rand() % 101;
					if (ran <= VerZar)
					{
						Nodes2[i].Color = 1;
						Nodes2[i].z = true;
						Nodes2[i].Viz = VerViz;
					}
				}
			}
			else
				if ((Nodes2[i].su) && (Nodes2[i].Color == 1))
				{
					Nodes2[i].Viz--;
					if ((Nodes2[i].Viz == 0))
					{
						Nodes2[i].Color = 0;
						Nodes2[i].z = false;
					}
				}


		}
		int vsego = 0, zar = 0;
		for (int i = 0; i <= n * n - 1; i++)
		{
			if (Nodes1[i].su) vsego++;
			if (Nodes2[i].su) vsego++;
			if ((Nodes1[i].z) && (Nodes1[i].su)) zar++;
			if ((Nodes2[i].z) && (Nodes2[i].su)) zar++;
		}
		ColIter++;
		tmpzd[ColIter] = vsego - zar;
		tmpzar[ColIter] = zar;
		label6->Text = "Количество итераций: " + ColIter.ToString();
		Draw();
		}
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e)
		{
			Draw();
		}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
		{
		openFileDialog1->Filter = "*(*.txt)|*.txt";
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{


			String^ str = openFileDialog1->FileName;
			int i = 0;
			int k = str->Length;
			char c[100];
			while (k != i)
			{
				c[i] = str[i];
				i++;
			}
			c[i] = NULL;

			std::ifstream out;
			out.open(c);

			int l = 0;
			out >> n;
			textBox1->Text = n.ToString();
			for (int i = 0; i <= n * n - 1; i++)
			{
				int k = 0;
				if (i != 0) k = (i - 1) % n;
				int m;
				out >> m;
				if (m == 0) { Nodes1[i].su = 0; Nodes1[i].z = 0; Nodes1[i].Color = 0; };
				if (m == 1) { Nodes1[i].su = 1; Nodes1[i].z = 0; Nodes1[i].Color = 0; }
				if (m == 2) { Nodes1[i].su = 1; Nodes1[i].z = 1; Nodes1[i].Color = 1; };
			}

			for (int i = 0; i <= n * n - 1; i++)
			{
				int k = 0;
				if (i != 0) k = (i - 1) % n;
				int m;
				out >> m;
				if (m == 0) { Nodes2[i].su = 0; Nodes2[i].z = 0; Nodes2[i].Color = 0; };
				if (m == 1) { Nodes2[i].su = 1; Nodes2[i].z = 0; Nodes2[i].Color = 0; }
				if (m == 2) { Nodes2[i].su = 1; Nodes2[i].z = 1; Nodes2[i].Color = 1; };

			}

			for (int i = 0; i <= n * n - 1; i++)
			{
				for (int j = 0; j <= n * n - 1; j++)
				{
					int m;
					out >> m;
					Sv1[i][j] = m;

				}

			}

			for (int i = 0; i <= n * n - 1; i++)
			{
				for (int j = 0; j <= n * n - 1; j++)
				{
					int m;
					out >> m;
					Sv2[i][j] = m;
				}
			}
			out.close();

		}
		Draw();
		}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
		{
		saveFileDialog1->Filter = "(*.txt) | *.txt";

		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{


			String^ str = saveFileDialog1->FileName;
			int i = 0;
			int k = str->Length;
			char c[100];
			while (k != i)
			{
				c[i] = str[i];
				i++;
			}
			c[i] = NULL;
			remove(c);
			std::ofstream out;
			out.open(c);
			out << n << '\n';
			int l = 0;
			for (int i = 0; i <= n * n - 1; i++)
			{
				int k = 0;
				if (i != 0) k = (i - 1) % n;
				if (!Nodes1[i].su) out << 0 << " ";
				if ((Nodes1[i].su) && (!Nodes1[i].z)) out << 1 << " ";
				if ((Nodes1[i].su) && (Nodes1[i].z)) out << 2 << " ";
				l++;
				if (l >= 45)
				{
					l = 0; out << "\n";
				}
			}
			out << "\n";
			l = 0;
			for (int i = 0; i <= n * n - 1; i++)
			{
				int k = 0;
				if (i != 0) k = (i - 1) % n;
				if (!Nodes2[i].su) out << 0 << " ";
				if ((Nodes2[i].su) && (!Nodes2[i].z)) out << 1 << " ";
				if ((Nodes2[i].su) && (Nodes2[i].z)) out << 2 << " ";
				l++;
				if (l == 45)
				{
					l = 0; out << "\n";
				}
			}
			out << "\n";
			l = 0;
			for (int i = 0; i <= n * n - 1; i++)
			{
				for (int j = 0; j <= n * n - 1; j++)
				{
					out << Sv1[i][j] << " ";
					l++;
					if (l == 45)
					{
						l = 0; out << "\n";
					}
				}

			}
			out << "\n";
			l = 0;
			for (int i = 0; i <= n * n - 1; i++)
			{
				for (int j = 0; j <= n * n - 1; j++)
				{
					out << Sv2[i][j] << " ";
					l++;
					if (l == 45)
					{
						l = 0; out << "\n";
					}
				}


			}
			out.close();

		}
		}
	private: System::Void Autoclicker_Load(System::Object^  sender, System::EventArgs^  e)
		{
		randomZap(Nodes1, Sv1);
		randomZap(Nodes2, Sv2);

		}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) 
		{
		int vsego = 0, zar = 0;
			for (int i = 0; i <= n * n - 1; i++)
			{
				if (Nodes1[i].su) vsego++;
				if (Nodes2[i].su) vsego++;
				if ((Nodes1[i].z) && (Nodes1[i].su)) zar++;
				if ((Nodes2[i].z) && (Nodes2[i].su)) zar++;
			}
			MyForm1^ sd = gcnew MyForm1();
		sd->chart1->Series[0]->Points->AddXY(vsego - zar, vsego - zar);
		sd->chart1->Series[0]->Points->AddXY(zar,zar);
		sd->chart2->Series->Clear();
		sd->chart2->Series->Add("Здоровые");
		sd->chart2->Series->Add("Зараженные");
		for (int i = 1; i <= ColIter; i++)
		{
			sd->chart2->Series[0]->Points->AddXY(i,tmpzd[i]);
			sd->chart2->Series[1]->Points->AddXY(i, tmpzar[i]);
		}
			sd->Show();
		//nform->chart1.Series.Add(new Series("ColumnSeries");
		//nform->chart1->Series->Add("colum");
		}
		private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e)
		{
			n = Convert::ToInt16(textBox1->Text);
				for (int i = 0; i <= n * n - 1; i++)
				{
					Nodes1[i].su = true;
					Nodes1[i].Color = 0;
					Nodes2[i].su = true;
					Nodes2[i].Color = 0;
					if ((i+1)%n != 0)
					{
						Sv1[i][i + 1] = 1;
						Sv1[i + 1][i] = 1;
						Sv2[i][i + 1] = 1;
						Sv2[i + 1][i] = 1;
					}
					if (i <= n*n - n - 1)
					{
						Sv1[i][i + n] = 1;
						Sv1[i + n][i] = 1;
						Sv2[i][i + n] = 1;
						Sv2[i + n][i] = 1;
					}
				}

				Draw();
		}
	};
} 
