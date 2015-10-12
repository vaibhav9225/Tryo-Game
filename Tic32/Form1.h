#pragma once

namespace Tic32 {
	int x=1,y=0,s1=0,s2=0,b1x=1,b2x=1,b3x=1,b4x=1,b5x=1,b6x=1,b7x=1,b8x=1,b9x=1,b10x=1,b11x=1,b12x=1,b13x=1,b14x=1,b15x=1,b16x=1,b1o=1,b2o=1,b3o=1,b4o=1,b5o=1,b6o=1,b7o=1,b8o=1,b9o=1,b10o=1,b11o=1,b12o=1,b13o=1,b14o=1,b15o=1,b16o=1;
	char z;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::MaskedTextBox^  input1;
	private: System::Windows::Forms::MaskedTextBox^  input2;


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Label^  label8;



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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->input1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->input2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			resources->ApplyResources(this->button1, L"button1");
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			resources->ApplyResources(this->button2, L"button2");
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			resources->ApplyResources(this->button3, L"button3");
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			resources->ApplyResources(this->button4, L"button4");
			this->button4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button4->Name = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			resources->ApplyResources(this->button5, L"button5");
			this->button5->Name = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			resources->ApplyResources(this->button6, L"button6");
			this->button6->Name = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			resources->ApplyResources(this->button7, L"button7");
			this->button7->Name = L"button7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			resources->ApplyResources(this->button8, L"button8");
			this->button8->Name = L"button8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			resources->ApplyResources(this->button9, L"button9");
			this->button9->Name = L"button9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			resources->ApplyResources(this->button10, L"button10");
			this->button10->Name = L"button10";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			resources->ApplyResources(this->button11, L"button11");
			this->button11->Name = L"button11";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// button12
			// 
			resources->ApplyResources(this->button12, L"button12");
			this->button12->Name = L"button12";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Form1::button12_Click);
			// 
			// button13
			// 
			resources->ApplyResources(this->button13, L"button13");
			this->button13->Name = L"button13";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Form1::button13_Click);
			// 
			// button14
			// 
			resources->ApplyResources(this->button14, L"button14");
			this->button14->Name = L"button14";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Form1::button14_Click);
			// 
			// button15
			// 
			resources->ApplyResources(this->button15, L"button15");
			this->button15->Name = L"button15";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Click += gcnew System::EventHandler(this, &Form1::button15_Click);
			// 
			// button16
			// 
			resources->ApplyResources(this->button16, L"button16");
			this->button16->Name = L"button16";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Click += gcnew System::EventHandler(this, &Form1::button16_Click);
			// 
			// button17
			// 
			resources->ApplyResources(this->button17, L"button17");
			this->button17->Name = L"button17";
			this->button17->UseVisualStyleBackColor = true;
			// 
			// button18
			// 
			resources->ApplyResources(this->button18, L"button18");
			this->button18->Name = L"button18";
			this->button18->UseVisualStyleBackColor = true;
			// 
			// button19
			// 
			resources->ApplyResources(this->button19, L"button19");
			this->button19->Name = L"button19";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Form1::button19_Click);
			// 
			// button20
			// 
			resources->ApplyResources(this->button20, L"button20");
			this->button20->Name = L"button20";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Form1::button20_Click);
			// 
			// button21
			// 
			resources->ApplyResources(this->button21, L"button21");
			this->button21->Name = L"button21";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Form1::button21_Click);
			// 
			// richTextBox1
			// 
			resources->ApplyResources(this->richTextBox1, L"richTextBox1");
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Name = L"label1";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Name = L"label2";
			this->label2->Click += gcnew System::EventHandler(this, &Form1::label2_Click);
			// 
			// input1
			// 
			resources->ApplyResources(this->input1, L"input1");
			this->input1->Name = L"input1";
			// 
			// input2
			// 
			resources->ApplyResources(this->input2, L"input2");
			this->input2->Name = L"input2";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Name = L"label3";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label4->Name = L"label4";
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label5->Name = L"label5";
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label6->Name = L"label6";
			// 
			// label7
			// 
			resources->ApplyResources(this->label7, L"label7");
			this->label7->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label7->Name = L"label7";
			this->label7->Click += gcnew System::EventHandler(this, &Form1::label7_Click);
			// 
			// button22
			// 
			resources->ApplyResources(this->button22, L"button22");
			this->button22->Name = L"button22";
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Form1::button22_Click);
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label8->Name = L"label8";
			// 
			// Form1
			// 
			resources->ApplyResources(this, L"$this");
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->input2);
			this->Controls->Add(this->input1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->Opacity = 0.9;
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label7_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			if((this->button1->Text!="O")&&(this->button1->Text!="X")&&(x==1)&&(b1x==1))
			{
				if(y==0)
				{
					y=1;
					z='X';
				}
				this->button1->Text="X";
				b1x=1;b2x=0;b3x=1;b4x=1;b5x=0;b6x=0;b7x=1;b8x=1;b9x=1;b10x=1;b11x=1;b12x=1;b13x=1;b14x=1;b15x=1;b16x=1;
				x=(x+1)%2;
				if((this->button2->Text=="X"&&this->button3->Text=="X")||(this->button5->Text=="X"&&this->button9->Text=="X")||(this->button6->Text=="X"&&this->button11->Text=="X"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label4->Text+" Wins!");
				    s1=s1+1;this->label6->Text=System::Convert::ToString(s1);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}

            }
			else if
				((this->button1->Text!="O")&&(this->button1->Text!="X")&&(x==0)&&(b1o==1))
			{
				if(y==0)
				{
					y=1;
					z='O';
				}
				this->button1->Text="O";
				b1o=1;b2o=0;b3o=1;b4o=1;b5o=0;b6o=0;b7o=1;b8o=1;b9o=1;b10o=1;b11o=1;b12o=1;b13o=1;b14o=1;b15o=1;b16o=1;
				x=(x+1)%2;
				if((this->button2->Text=="O"&&this->button3->Text=="O")||(this->button5->Text=="O"&&this->button9->Text=="O")||(this->button6->Text=="O"&&this->button11->Text=="O"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label5->Text+" Wins!");
					s2=s2+1;this->label7->Text=System::Convert::ToString(s2);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}
			}

		 }
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
			 Application::Exit();
		 }
private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(this->input1->Text==""){
				 MessageBox::Show("Please enter the name of Player 1","Notice");
			 }
			 else{ 
				this->label4->Text=this->input1->Text;
			 }
			 if(this->input2->Text==""){
				 MessageBox::Show("Please enter the name of Player 2","Notice");
			 }
			 else{
			    this->label5->Text=this->input2->Text;
			 }
		 }
private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
			 x=1;y=0;z='NULL';s1=s2=0;
			 this->label4->Text="Player X";
			 this->label5->Text="Player O";
			 this->input1->Text="";
			 this->input2->Text="";
			 this->label6->Text="0";
			 this->label7->Text="0";
			 this->button1->Text="";this->button2->Text="";this->button3->Text="";this->button4->Text="";this->button5->Text="";this->button6->Text="";this->button7->Text="";this->button8->Text="";this->button9->Text="";this->button10->Text="";this->button11->Text="";this->button12->Text="";this->button13->Text="";this->button14->Text="";this->button15->Text="";this->button16->Text="";												
			 b1x=1;b2x=1;b3x=1;b4x=1;b5x=1;b6x=1;b7x=1;b8x=1;b9x=1;b10x=1;b11x=1;b12x=1;b13x=1;b14x=1;b15x=1;b16x=1;b1o=1;b2o=1;b3o=1;b4o=1;b5o=1;b6o=1;b7o=1;b8o=1;b9o=1;b10o=1;b11o=1;b12o=1;b13o=1;b14o=1;b15o=1;b16o=1;
		 }
private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
			 MessageBox::Show("Welcome.This game is a modified version of the good old game Tic-Tac-Toe.It basically follows the same set of rules as that if Tic-Tac-Toe.The only exception is that,in your next move,you cannot mark at the position next to the position you marked for your previous move,either diagonally,up,down,right or left.Hope You Enjoy The Game","Gameplay");
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 		if((this->button2->Text!="O")&&(this->button2->Text!="X")&&(x==1)&&(b2x==1))
			{
				if(y==0)
				{
					y=1;
					z='X';
				}
				this->button2->Text="X";
				b1x=0;b2x=1;b3x=3;b4x=1;b5x=0;b6x=0;b7x=0;b8x=1;b9x=1;b10x=1;b11x=1;b12x=1;b13x=1;b14x=1;b15x=1;b16x=1;
				x=(x+1)%2;
				if((this->button1->Text=="X"&&this->button3->Text=="X")||(this->button6->Text=="X"&&this->button10->Text=="X")||(this->button7->Text=="X"&&this->button12->Text=="X")||(this->button3->Text=="X"&&this->button4->Text=="X"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label4->Text+" Wins!");
				    s1=s1+1;this->label6->Text=System::Convert::ToString(s1);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}

            }
			else if
				((this->button2->Text!="O")&&(this->button2->Text!="X")&&(x==0)&&(b2o==1))
			{
				if(y==0)
				{
					y=1;
					z='O';
				}
				this->button2->Text="O";
				b1o=0;b2o=1;b3o=3;b4o=1;b5o=0;b6o=0;b7o=0;b8o=1;b9o=1;b10o=1;b11o=1;b12o=1;b13o=1;b14o=1;b15o=1;b16o=1;
				x=(x+1)%2;
				if((this->button1->Text=="O"&&this->button3->Text=="O")||(this->button6->Text=="O"&&this->button10->Text=="O")||(this->button7->Text=="O"&&this->button12->Text=="O")||(this->button3->Text=="O"&&this->button4->Text=="O"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label5->Text+" Wins!");
					s2=s2+1;this->label7->Text=System::Convert::ToString(s2);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}
			}
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 		if((this->button3->Text!="O")&&(this->button3->Text!="X")&&(x==1)&&(b3x==1))
			{
				if(y==0)
				{
					y=1;
					z='X';
				}
				this->button3->Text="X";
				b1x=1;b2x=0;b3x=1;b4x=0;b5x=1;b6x=0;b7x=0;b8x=0;b9x=1;b10x=1;b11x=1;b12x=1;b13x=1;b14x=1;b15x=1;b16x=1;
				x=(x+1)%2;
				if((this->button1->Text=="X"&&this->button2->Text=="X")||(this->button7->Text=="X"&&this->button11->Text=="X")||(this->button6->Text=="X"&&this->button9->Text=="X")||(this->button2->Text=="X"&&this->button4->Text=="X"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label4->Text+" Wins!");
				    s1=s1+1;this->label6->Text=System::Convert::ToString(s1);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}

            }
			else if
				((this->button3->Text!="O")&&(this->button3->Text!="X")&&(x==0)&&(b3o==1))
			{
				if(y==0)
				{
					y=1;
					z='O';
				}
				this->button3->Text="O";
				b1o=1;b2o=0;b3o=1;b4o=0;b5o=1;b6o=0;b7o=0;b8o=0;b9o=1;b10o=1;b11o=1;b12o=1;b13o=1;b14o=1;b15o=1;b16o=1;
				x=(x+1)%2;
				if((this->button1->Text=="O"&&this->button2->Text=="O")||(this->button7->Text=="O"&&this->button11->Text=="O")||(this->button6->Text=="O"&&this->button9->Text=="O")||(this->button2->Text=="O"&&this->button4->Text=="O"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label5->Text+" Wins!");
					s2=s2+1;this->label7->Text=System::Convert::ToString(s2);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}
			}
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 		if((this->button4->Text!="O")&&(this->button4->Text!="X")&&(x==1)&&(b4x==1))
			{
				if(y==0)
				{
					y=1;
					z='X';
				}
				this->button4->Text="X";
				b1x=1;b2x=1;b3x=0;b4x=1;b5x=1;b6x=1;b7x=0;b8x=0;b9x=1;b10x=1;b11x=1;b12x=1;b13x=1;b14x=1;b15x=1;b16x=1;
				x=(x+1)%2;
				if((this->button2->Text=="X"&&this->button3->Text=="X")||(this->button8->Text=="X"&&this->button12->Text=="X")||(this->button7->Text=="X"&&this->button10->Text=="X"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label4->Text+" Wins!");
				    s1=s1+1;this->label6->Text=System::Convert::ToString(s1);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}

            }
			else if
				((this->button4->Text!="O")&&(this->button4->Text!="X")&&(x==0)&&(b4o==1))
			{
				if(y==0)
				{
					y=1;
					z='O';
				}
				this->button4->Text="O";
				b1o=1;b2o=1;b3o=0;b4o=1;b5o=1;b6o=1;b7o=0;b8o=0;b9o=1;b10o=1;b11o=1;b12o=1;b13o=1;b14o=1;b15o=1;b16o=1;
				x=(x+1)%2;
				if((this->button2->Text=="O"&&this->button3->Text=="O")||(this->button8->Text=="O"&&this->button12->Text=="O")||(this->button7->Text=="O"&&this->button10->Text=="O"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label5->Text+" Wins!");
					s2=s2+1;this->label7->Text=System::Convert::ToString(s2);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}
			}
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
					if((this->button5->Text!="O")&&(this->button5->Text!="X")&&(x==1)&&(b5x==1))
			{
				if(y==0)
				{
					y=1;
					z='X';
				}
				this->button5->Text="X";
				b1x=0;b2x=0;b3x=1;b4x=1;b5x=1;b6x=0;b7x=1;b8x=1;b9x=0;b10x=0;b11x=1;b12x=1;b13x=1;b14x=1;b15x=1;b16x=1;
				x=(x+1)%2;
				if((this->button1->Text=="X"&&this->button9->Text=="X")||(this->button6->Text=="X"&&this->button7->Text=="X")||(this->button10->Text=="X"&&this->button15->Text=="X")||(this->button9->Text=="X"&&this->button13->Text=="X"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label4->Text+" Wins!");
				    s1=s1+1;this->label6->Text=System::Convert::ToString(s1);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}

            }
			else if
				((this->button5->Text!="O")&&(this->button5->Text!="X")&&(x==0)&&(b5o==1))
			{
				if(y==0)
				{
					y=1;
					z='O';
				}
				this->button5->Text="O";
				b1o=0;b2o=0;b3o=1;b4o=1;b5o=1;b6o=0;b7o=1;b8o=1;b9o=0;b10o=0;b11o=1;b12o=1;b13o=1;b14o=1;b15o=1;b16o=1;
				x=(x+1)%2;
				if((this->button1->Text=="O"&&this->button9->Text=="O")||(this->button6->Text=="O"&&this->button7->Text=="O")||(this->button10->Text=="O"&&this->button15->Text=="O")||(this->button9->Text=="O"&&this->button13->Text=="O"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label5->Text+" Wins!");
					s2=s2+1;this->label7->Text=System::Convert::ToString(s2);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}
			}
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
				if((this->button6->Text!="O")&&(this->button6->Text!="X")&&(x==1)&&(b6x==1))
			{
				if(y==0)
				{
					y=1;
					z='X';
				}
				this->button6->Text="X";
				b1x=0;b2x=0;b3x=0;b4x=1;b5x=0;b6x=1;b7x=0;b8x=1;b9x=0;b10x=0;b11x=0;b12x=1;b13x=1;b14x=1;b15x=1;b16x=1;
				x=(x+1)%2;
				if((this->button3->Text=="X"&&this->button9->Text=="X")||(this->button5->Text=="X"&&this->button7->Text=="X")||(this->button10->Text=="X"&&this->button14->Text=="X")||(this->button1->Text=="X"&&this->button11->Text=="X")||(this->button2->Text=="X"&&this->button10->Text=="X")||(this->button11->Text=="X"&&this->button16->Text=="X")||(this->button7->Text=="X"&&this->button8->Text=="X"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label4->Text+" Wins!");
				    s1=s1+1;this->label6->Text=System::Convert::ToString(s1);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}

            }
			else if
				((this->button6->Text!="O")&&(this->button6->Text!="X")&&(x==0)&&(b6o==1))
			{
				if(y==0)
				{
					y=1;
					z='O';
				}
				this->button6->Text="O";
				b1o=0;b2o=0;b3o=0;b4o=1;b5o=0;b6o=1;b7o=0;b8o=1;b9o=0;b10o=0;b11o=0;b12o=1;b13o=1;b14o=1;b15o=1;b16o=1;
				x=(x+1)%2;
				if((this->button1->Text=="O"&&this->button11->Text=="O")||(this->button3->Text=="O"&&this->button9->Text=="O")||(this->button5->Text=="O"&&this->button7->Text=="O")||(this->button10->Text=="O"&&this->button14->Text=="O")||(this->button2->Text=="O"&&this->button10->Text=="O")||(this->button11->Text=="O"&&this->button16->Text=="O")||(this->button7->Text=="O"&&this->button8->Text=="O"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label5->Text+" Wins!");
					s2=s2+1;this->label7->Text=System::Convert::ToString(s2);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}
			}
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			    if((this->button7->Text!="O")&&(this->button7->Text!="X")&&(x==1)&&(b7x==1))
			{
				if(y==0)
				{
					y=1;
					z='X';
				}
				this->button7->Text="X";
				b1x=1;b2x=0;b3x=0;b4x=0;b5x=1;b6x=0;b7x=1;b8x=0;b9x=1;b10x=0;b11x=0;b12x=0;b13x=1;b14x=1;b15x=1;b16x=1;
				x=(x+1)%2;
				if((this->button5->Text=="X"&&this->button6->Text=="X")||(this->button6->Text=="X"&&this->button8->Text=="X")||(this->button3->Text=="X"&&this->button11->Text=="X")||(this->button11->Text=="X"&&this->button15->Text=="X")||(this->button2->Text=="X"&&this->button12->Text=="X")||(this->button4->Text=="X"&&this->button10->Text=="X")||(this->button10->Text=="X"&&this->button13->Text=="X"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label4->Text+" Wins!");
				    s1=s1+1;this->label6->Text=System::Convert::ToString(s1);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}

            }
			else if
				((this->button7->Text!="O")&&(this->button7->Text!="X")&&(x==0)&&(b7o==1))
			{
				if(y==0)
				{
					y=1;
					z='O';
				}
				this->button7->Text="O";
				b1o=1;b2o=0;b3o=0;b4o=0;b5o=1;b6o=0;b7o=1;b8o=0;b9o=1;b10o=0;b11o=0;b12o=0;b13o=1;b14o=1;b15o=1;b16o=1;
				x=(x+1)%2;
				if((this->button5->Text=="O"&&this->button6->Text=="O")||(this->button6->Text=="O"&&this->button8->Text=="O")||(this->button3->Text=="O"&&this->button11->Text=="O")||(this->button11->Text=="O"&&this->button15->Text=="O")||(this->button2->Text=="O"&&this->button12->Text=="O")||(this->button4->Text=="O"&&this->button10->Text=="O")||(this->button10->Text=="O"&&this->button13->Text=="O"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label5->Text+" Wins!");
					s2=s2+1;this->label7->Text=System::Convert::ToString(s2);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}
			}
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if((this->button8->Text!="O")&&(this->button8->Text!="X")&&(x==1)&&(b8x==1))
			{
				if(y==0)
				{
					y=1;
					z='X';
				}
				this->button8->Text="X";
				b1x=1;b2x=1;b3x=0;b4x=0;b5x=1;b6x=1;b7x=0;b8x=1;b9x=1;b10x=1;b11x=0;b12x=0;b13x=1;b14x=1;b15x=1;b16x=1;
				x=(x+1)%2;
				if((this->button4->Text=="X"&&this->button12->Text=="X")||(this->button6->Text=="X"&&this->button7->Text=="X")||(this->button11->Text=="X"&&this->button14->Text=="X")||(this->button12->Text=="X"&&this->button16->Text=="X"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label4->Text+" Wins!");
				    s1=s1+1;this->label6->Text=System::Convert::ToString(s1);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}

            }
			else if
				((this->button8->Text!="O")&&(this->button8->Text!="X")&&(x==0)&&(b8o==1))
			{
				if(y==0)
				{
					y=1;
					z='O';
				}
				this->button8->Text="O";
				b1o=1;b2o=1;b3o=0;b4o=0;b5o=1;b6o=1;b7o=0;b8o=1;b9o=1;b10o=1;b11o=0;b12o=0;b13o=1;b14o=1;b15o=1;b16o=1;
				x=(x+1)%2;
				if((this->button4->Text=="O"&&this->button12->Text=="O")||(this->button6->Text=="O"&&this->button7->Text=="O")||(this->button11->Text=="O"&&this->button14->Text=="O")||(this->button12->Text=="O"&&this->button16->Text=="O"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label5->Text+" Wins!");
					s2=s2+1;this->label7->Text=System::Convert::ToString(s2);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}
			}
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if((this->button9->Text!="O")&&(this->button9->Text!="X")&&(x==1)&&(b9x==1))
			{
				if(y==0)
				{
					y=1;
					z='X';
				}
				this->button9->Text="X";
				b1x=1;b2x=1;b3x=1;b4x=1;b5x=0;b6x=0;b7x=1;b8x=1;b9x=1;b10x=0;b11x=1;b12x=1;b13x=0;b14x=0;b15x=1;b16x=1;
				x=(x+1)%2;
				if((this->button10->Text=="X"&&this->button11->Text=="X")||(this->button1->Text=="X"&&this->button5->Text=="X")||(this->button5->Text=="X"&&this->button13->Text=="X")||(this->button3->Text=="X"&&this->button6->Text=="X"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label4->Text+" Wins!");
				    s1=s1+1;this->label6->Text=System::Convert::ToString(s1);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}

            }
			else if
				((this->button9->Text!="O")&&(this->button9->Text!="X")&&(x==0)&&(b9o==1))
			{
				if(y==0)
				{
					y=1;
					z='O';
				}
				this->button9->Text="O";
				b1o=1;b2o=1;b3o=1;b4o=1;b5o=0;b6o=0;b7o=1;b8o=1;b9o=1;b10o=0;b11o=1;b12o=1;b13o=0;b14o=0;b15o=1;b16o=1;
				x=(x+1)%2;
				if((this->button1->Text=="O"&&this->button5->Text=="O")||(this->button5->Text=="O"&&this->button13->Text=="O")||(this->button10->Text=="O"&&this->button11->Text=="O")||(this->button3->Text=="O"&&this->button6->Text=="O"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label5->Text+" Wins!");
					s2=s2+1;this->label7->Text=System::Convert::ToString(s2);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}
			}
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
			   if((this->button10->Text!="O")&&(this->button10->Text!="X")&&(x==1)&&(b10x==1))
			{
				if(y==0)
				{
					y=1;
					z='X';
				}
				this->button10->Text="X";
				b1x=1;b2x=1;b3x=1;b4x=1;b5x=0;b6x=0;b7x=0;b8x=1;b9x=0;b10x=1;b11x=0;b12x=1;b13x=0;b14x=0;b15x=0;b16x=1;
				x=(x+1)%2;
				if((this->button9->Text=="X"&&this->button11->Text=="X")||(this->button11->Text=="X"&&this->button12->Text=="X")||(this->button2->Text=="X"&&this->button6->Text=="X")||(this->button6->Text=="X"&&this->button14->Text=="X")||(this->button5->Text=="X"&&this->button15->Text=="X")||(this->button4->Text=="X"&&this->button7->Text=="X")||(this->button7->Text=="X"&&this->button13->Text=="X"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label4->Text+" Wins!");
				    s1=s1+1;this->label6->Text=System::Convert::ToString(s1);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}

            }
			else if
				((this->button10->Text!="O")&&(this->button10->Text!="X")&&(x==0)&&(b10o==1))
			{
				if(y==0)
				{
					y=1;
					z='O';
				}
				this->button10->Text="O";
				b1o=1;b2o=1;b3o=1;b4o=1;b5o=0;b6o=0;b7o=0;b8o=1;b9o=0;b10o=1;b11o=0;b12o=1;b13o=0;b14o=0;b15o=0;b16o=1;
				x=(x+1)%2;
				if((this->button9->Text=="O"&&this->button11->Text=="O")||(this->button11->Text=="O"&&this->button12->Text=="O")||(this->button2->Text=="O"&&this->button6->Text=="O")||(this->button6->Text=="O"&&this->button14->Text=="O")||(this->button5->Text=="O"&&this->button15->Text=="O")||(this->button4->Text=="O"&&this->button7->Text=="O")||(this->button7->Text=="O"&&this->button13->Text=="O"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label5->Text+" Wins!");
					s2=s2+1;this->label7->Text=System::Convert::ToString(s2);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}
			}
		 }
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
			 if((this->button11->Text!="O")&&(this->button11->Text!="X")&&(x==1)&&(b11x==1))
			{
				if(y==0)
				{
					y=1;
					z='X';
				}
				this->button11->Text="X";
				b1x=1;b2x=1;b3x=1;b4x=1;b5x=1;b6x=0;b7x=0;b8x=0;b9x=1;b10x=0;b11x=1;b12x=0;b13x=1;b14x=0;b15x=0;b16x=0;
				x=(x+1)%2;
				if((this->button9->Text=="X"&&this->button10->Text=="X")||(this->button10->Text=="X"&&this->button12->Text=="X")||(this->button3->Text=="X"&&this->button7->Text=="X")||(this->button7->Text=="X"&&this->button15->Text=="X")||(this->button8->Text=="X"&&this->button14->Text=="X")||(this->button1->Text=="X"&&this->button6->Text=="X")||(this->button6->Text=="X"&&this->button16->Text=="X"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label4->Text+" Wins!");
				    s1=s1+1;this->label6->Text=System::Convert::ToString(s1);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}

            }
			else if
				((this->button11->Text!="O")&&(this->button11->Text!="X")&&(x==0)&&(b11o==1))
			{
				if(y==0)
				{
					y=1;
					z='O';
				}
				this->button11->Text="O";
				b1o=1;b2o=1;b3o=1;b4o=1;b5o=1;b6o=0;b7o=0;b8o=0;b9o=1;b10o=0;b11o=1;b12o=0;b13o=1;b14o=0;b15o=0;b16o=0;
				x=(x+1)%2;
				if((this->button9->Text=="O"&&this->button10->Text=="O")||(this->button10->Text=="O"&&this->button12->Text=="O")||(this->button3->Text=="O"&&this->button7->Text=="O")||(this->button7->Text=="O"&&this->button15->Text=="O")||(this->button8->Text=="O"&&this->button14->Text=="O")||(this->button1->Text=="O"&&this->button6->Text=="O")||(this->button6->Text=="O"&&this->button16->Text=="O"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label5->Text+" Wins!");
					s2=s2+1;this->label7->Text=System::Convert::ToString(s2);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}
			}
		 }
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
			 if((this->button12->Text!="O")&&(this->button12->Text!="X")&&(x==1)&&(b12x==1))
			{
				if(y==0)
				{
					y=1;
					z='X';
				}
				this->button12->Text="X";
				b1x=1;b2x=1;b3x=1;b4x=1;b5x=1;b6x=1;b7x=0;b8x=0;b9x=1;b10x=1;b11x=0;b12x=1;b13x=1;b14x=1;b15x=0;b16x=0;
				x=(x+1)%2;
				if((this->button10->Text=="X"&&this->button11->Text=="X")||(this->button4->Text=="X"&&this->button8->Text=="X")||(this->button8->Text=="X"&&this->button16->Text=="X")||(this->button2->Text=="X"&&this->button7->Text=="X"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label4->Text+" Wins!");
				    s1=s1+1;this->label6->Text=System::Convert::ToString(s1);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}

            }
			else if
				((this->button12->Text!="O")&&(this->button12->Text!="X")&&(x==0)&&(b12o==1))
			{
				if(y==0)
				{
					y=1;
					z='O';
				}
				this->button12->Text="O";
				b1o=1;b2o=1;b3o=1;b4o=1;b5o=1;b6o=1;b7o=0;b8o=0;b9o=1;b10o=1;b11o=0;b12o=1;b13o=1;b14o=1;b15o=0;b16o=0;
				x=(x+1)%2;
				if((this->button4->Text=="O"&&this->button8->Text=="O")||(this->button8->Text=="O"&&this->button16->Text=="O")||(this->button10->Text=="O"&&this->button11->Text=="O")||(this->button2->Text=="O"&&this->button7->Text=="O"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label5->Text+" Wins!");
					s2=s2+1;this->label7->Text=System::Convert::ToString(s2);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}
			}
		 }
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
			 if((this->button13->Text!="O")&&(this->button13->Text!="X")&&(x==1)&&(b13x==1))
			{
				if(y==0)
				{
					y=1;
					z='X';
				}
				this->button13->Text="X";
				b1x=1;b2x=1;b3x=1;b4x=1;b5x=1;b6x=1;b7x=1;b8x=1;b9x=0;b10x=0;b11x=1;b12x=1;b13x=1;b14x=0;b15x=1;b16x=1;
				x=(x+1)%2;
				if((this->button14->Text=="X"&&this->button15->Text=="X")||(this->button5->Text=="X"&&this->button9->Text=="X")||(this->button7->Text=="X"&&this->button10->Text=="X"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label4->Text+" Wins!");
				    s1=s1+1;this->label6->Text=System::Convert::ToString(s1);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}

            }
			else if
				((this->button13->Text!="O")&&(this->button13->Text!="X")&&(x==0)&&(b13o==1))
			{
				if(y==0)
				{
					y=1;
					z='O';
				}
				this->button13->Text="O";
				b1o=1;b2o=1;b3o=1;b4o=1;b5o=1;b6o=1;b7o=1;b8o=1;b9o=0;b10o=0;b11o=1;b12o=1;b13o=1;b14o=0;b15o=1;b16o=1;
				x=(x+1)%2;
				if((this->button14->Text=="O"&&this->button15->Text=="O")||(this->button5->Text=="O"&&this->button9->Text=="O")||(this->button7->Text=="O"&&this->button10->Text=="O"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label5->Text+" Wins!");
					s2=s2+1;this->label7->Text=System::Convert::ToString(s2);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}
			}
		 }
private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) {
			 if((this->button14->Text!="O")&&(this->button14->Text!="X")&&(x==1)&&(b14x==1))
			{
				if(y==0)
				{
					y=1;
					z='X';
				}
				this->button14->Text="X";
				b1x=1;b2x=1;b3x=1;b4x=1;b5x=1;b6x=1;b7x=1;b8x=1;b9x=0;b10x=0;b11x=0;b12x=1;b13x=0;b14x=1;b15x=0;b16x=1;
				x=(x+1)%2;
				if((this->button13->Text=="X"&&this->button15->Text=="X")||(this->button15->Text=="X"&&this->button16->Text=="X")||(this->button6->Text=="X"&&this->button10->Text=="X")||(this->button8->Text=="X"&&this->button11->Text=="X"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label4->Text+" Wins!");
				    s1=s1+1;this->label6->Text=System::Convert::ToString(s1);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}

            }
			else if
				((this->button14->Text!="O")&&(this->button14->Text!="X")&&(x==0)&&(b14o==1))
			{
				if(y==0)
				{
					y=1;
					z='O';
				}
				this->button14->Text="O";
				b1o=1;b2o=1;b3o=1;b4o=1;b5o=1;b6o=1;b7o=1;b8o=1;b9o=0;b10o=0;b11o=0;b12o=1;b13o=0;b14o=1;b15o=0;b16o=1;
				x=(x+1)%2;
				if((this->button13->Text=="O"&&this->button15->Text=="O")||(this->button15->Text=="O"&&this->button16->Text=="O")||(this->button6->Text=="O"&&this->button10->Text=="O")||(this->button8->Text=="O"&&this->button11->Text=="O"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label5->Text+" Wins!");
					s2=s2+1;this->label7->Text=System::Convert::ToString(s2);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}
			}
		 }
private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) {
			 if((this->button15->Text!="O")&&(this->button15->Text!="X")&&(x==1)&&(b15x==1))
			{
				if(y==0)
				{
					y=1;
					z='X';
				}
				this->button15->Text="X";
				b1x=1;b2x=1;b3x=1;b4x=1;b5x=1;b6x=1;b7x=1;b8x=1;b9x=1;b10x=0;b11x=0;b12x=0;b13x=1;b14x=0;b15x=1;b16x=0;
				x=(x+1)%2;
				if((this->button13->Text=="X"&&this->button14->Text=="X")||(this->button14->Text=="X"&&this->button16->Text=="X")||(this->button7->Text=="X"&&this->button11->Text=="X")||(this->button5->Text=="X"&&this->button10->Text=="X"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label4->Text+" Wins!");
				    s1=s1+1;this->label6->Text=System::Convert::ToString(s1);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}

            }
			else if
				((this->button15->Text!="O")&&(this->button15->Text!="X")&&(x==0)&&(b15o==1))
			{
				if(y==0)
				{
					y=1;
					z='O';
				}
				this->button15->Text="O";
				b1o=1;b2o=1;b3o=1;b4o=1;b5o=1;b6o=1;b7o=1;b8o=1;b9o=1;b10o=0;b11o=0;b12o=0;b13o=1;b14o=0;b15o=1;b16o=0;
				x=(x+1)%2;
				if((this->button13->Text=="O"&&this->button14->Text=="O")||(this->button14->Text=="O"&&this->button16->Text=="O")||(this->button7->Text=="O"&&this->button11->Text=="O")||(this->button5->Text=="O"&&this->button10->Text=="O"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label5->Text+" Wins!");
					s2=s2+1;this->label7->Text=System::Convert::ToString(s2);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}
			}
		 }
private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
			 if((this->button16->Text!="O")&&(this->button16->Text!="X")&&(x==1)&&(b16x==1))
			{
				if(y==0)
				{
					y=1;
					z='X';
				}
				this->button16->Text="X";
				b1x=1;b2x=1;b3x=1;b4x=1;b5x=1;b6x=1;b7x=1;b8x=1;b9x=1;b10x=1;b11x=0;b12x=0;b13x=1;b14x=1;b15x=0;b16x=1;
				x=(x+1)%2;
				if((this->button14->Text=="X"&&this->button15->Text=="X")||(this->button8->Text=="X"&&this->button12->Text=="X")||(this->button6->Text=="X"&&this->button11->Text=="X"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label4->Text+" Wins!");
				    s1=s1+1;this->label6->Text=System::Convert::ToString(s1);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}

            }
			else if
				((this->button16->Text!="O")&&(this->button16->Text!="X")&&(x==0)&&(b16o==1))
			{
				if(y==0)
				{
					y=1;
					z='O';
				}
				this->button16->Text="O";
				b1o=1;b2o=1;b3o=1;b4o=1;b5o=1;b6o=1;b7o=1;b8o=1;b9o=1;b10o=1;b11o=0;b12o=0;b13o=1;b14o=1;b15o=0;b16o=1;
				x=(x+1)%2;
				if((this->button14->Text=="O"&&this->button15->Text=="O")||(this->button8->Text=="O"&&this->button12->Text=="O")||(this->button6->Text=="O"&&this->button11->Text=="O"))
				{
					if(z=='X')
					{
						x=0;
						z='NULL';
						y=0;
					}
					else if(z=='O')
					{
						x=1;
						z='NULL';
						y=0;
					}
					MessageBox::Show(this->label5->Text+" Wins!");
					s2=s2+1;this->label7->Text=System::Convert::ToString(s2);
					if (MessageBox::Show("Do you want to play another round", "User Opinion", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == ::System::Windows::Forms::DialogResult::Yes)
					{
					this->button1->Text="";
					this->button2->Text="";
					this->button3->Text="";
					this->button4->Text="";
					this->button5->Text="";
					this->button6->Text="";
					this->button7->Text="";
					this->button8->Text="";
				    this->button9->Text="";
					this->button10->Text="";
					this->button11->Text="";
					this->button12->Text="";
					this->button13->Text="";
					this->button14->Text="";
					this->button15->Text="";
					this->button16->Text="";
				    }
					else
					{
						Application::Exit();
					}
				}
			}
		 }
};
}

