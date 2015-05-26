// Copyright [2015] <Filatov Kirill>
#pragma once

#include "Cat.h"
#include <memory>

using namespace System::Runtime::InteropServices;

//Cat a;
//Cat a;
std::auto_ptr<Cat> a;
File f;
std::vector <File> Fx;

// System::String^ to char*  
char * and_SysStringToChar(System::String^ string) {
return (char*)(void*)Marshal::StringToHGlobalAnsi(string);
}

// char* to System::String^
System::String^ /* * */ and_CharToSysString(char* ch) {
char * chr=new char[]=ch;
System::String^ str;
for(int i=0;chr[i]!='\0';i++) {
     str+=wchar_t(ch[i]);
}
return str;
}

namespace trdz {

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
    private: System::Windows::Forms::MenuStrip^  menuStrip1;
    protected: 
    private: System::Windows::Forms::ToolStripMenuItem^  Í‡Ú‡ÎÓ„ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  Í‡Ú‡ÎÓ„ËToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  ‰Ó·‡‚ËÚ¸ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  Â‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  Ù‡ÈÎ˚ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^  ‰Ó·‡‚ËÚ¸ToolStripMenuItem1;
    private: System::Windows::Forms::ToolStripMenuItem^  Â‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem1;
    private: System::Windows::Forms::Label^  label1;
    private: System::Windows::Forms::Label^  label2;
    private: System::Windows::Forms::Label^  label3;
    private: System::Windows::Forms::Label^  label4;
    private: System::Windows::Forms::TextBox^  textBox1;
    private: System::Windows::Forms::TextBox^  textBox2;
    private: System::Windows::Forms::TextBox^  textBox3;
    private: System::Windows::Forms::TextBox^  textBox4;
    private: System::Windows::Forms::Label^  label5;
    private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
    private: System::Windows::Forms::Button^  button1;
    private: System::Windows::Forms::Label^  label6;
    private: System::Windows::Forms::TextBox^  textBox5;
    private: System::Windows::Forms::Label^  label7;
    private: System::Windows::Forms::TextBox^  textBox6;
    private: System::Windows::Forms::Label^  label8;
    private: System::Windows::Forms::TextBox^  textBox7;
    private: System::Windows::Forms::Label^  label9;
    private: System::Windows::Forms::Button^  button2;





    protected: 
    private: System::ComponentModel::IContainer^  components;

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
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->Í‡Ú‡ÎÓ„ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->Í‡Ú‡ÎÓ„ËToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->‰Ó·‡‚ËÚ¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->Â‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->Ù‡ÈÎ˚ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->‰Ó·‡‚ËÚ¸ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->Â‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->textBox4 = (gcnew System::Windows::Forms::TextBox());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->textBox5 = (gcnew System::Windows::Forms::TextBox());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->textBox6 = (gcnew System::Windows::Forms::TextBox());
            this->label8 = (gcnew System::Windows::Forms::Label());
            this->textBox7 = (gcnew System::Windows::Forms::TextBox());
            this->label9 = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->menuStrip1->SuspendLayout();
            this->SuspendLayout();
            // 
            // menuStrip1
            // 
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->Í‡Ú‡ÎÓ„ToolStripMenuItem});
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(406, 24);
            this->menuStrip1->TabIndex = 0;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // Í‡Ú‡ÎÓ„ToolStripMenuItem
            // 
            this->Í‡Ú‡ÎÓ„ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->Í‡Ú‡ÎÓ„ËToolStripMenuItem, 
                this->Ù‡ÈÎ˚ToolStripMenuItem});
            this->Í‡Ú‡ÎÓ„ToolStripMenuItem->Name = L"Í‡Ú‡ÎÓ„ToolStripMenuItem";
            this->Í‡Ú‡ÎÓ„ToolStripMenuItem->Size = System::Drawing::Size(54, 20);
            this->Í‡Ú‡ÎÓ„ToolStripMenuItem->Text = L"Œ·ÁÓ";
            // 
            // Í‡Ú‡ÎÓ„ËToolStripMenuItem
            // 
            this->Í‡Ú‡ÎÓ„ËToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->‰Ó·‡‚ËÚ¸ToolStripMenuItem, 
                this->Â‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem});
            this->Í‡Ú‡ÎÓ„ËToolStripMenuItem->Name = L"Í‡Ú‡ÎÓ„ËToolStripMenuItem";
            this->Í‡Ú‡ÎÓ„ËToolStripMenuItem->Size = System::Drawing::Size(124, 22);
            this->Í‡Ú‡ÎÓ„ËToolStripMenuItem->Text = L" ‡Ú‡ÎÓ„Ë";
            // 
            // ‰Ó·‡‚ËÚ¸ToolStripMenuItem
            // 
            this->‰Ó·‡‚ËÚ¸ToolStripMenuItem->Name = L"‰Ó·‡‚ËÚ¸ToolStripMenuItem";
            this->‰Ó·‡‚ËÚ¸ToolStripMenuItem->Size = System::Drawing::Size(154, 22);
            this->‰Ó·‡‚ËÚ¸ToolStripMenuItem->Text = L"ƒÓ·‡‚ËÚ¸";
            this->‰Ó·‡‚ËÚ¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::‰Ó·‡‚ËÚ¸ToolStripMenuItem_Click);
            // 
            // Â‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem
            // 
            this->Â‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem->Name = L"Â‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem";
            this->Â‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem->Size = System::Drawing::Size(154, 22);
            this->Â‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem->Text = L"–Â‰‡ÍÚËÓ‚‡Ú¸";
            this->Â‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::Â‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem_Click);
            // 
            // Ù‡ÈÎ˚ToolStripMenuItem
            // 
            this->Ù‡ÈÎ˚ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->‰Ó·‡‚ËÚ¸ToolStripMenuItem1, 
                this->Â‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem1});
            this->Ù‡ÈÎ˚ToolStripMenuItem->Name = L"Ù‡ÈÎ˚ToolStripMenuItem";
            this->Ù‡ÈÎ˚ToolStripMenuItem->Size = System::Drawing::Size(124, 22);
            this->Ù‡ÈÎ˚ToolStripMenuItem->Text = L"‘‡ÈÎ˚";
            // 
            // ‰Ó·‡‚ËÚ¸ToolStripMenuItem1
            // 
            this->‰Ó·‡‚ËÚ¸ToolStripMenuItem1->Name = L"‰Ó·‡‚ËÚ¸ToolStripMenuItem1";
            this->‰Ó·‡‚ËÚ¸ToolStripMenuItem1->Size = System::Drawing::Size(154, 22);
            this->‰Ó·‡‚ËÚ¸ToolStripMenuItem1->Text = L"ƒÓ·‡‚ËÚ¸";
            this->‰Ó·‡‚ËÚ¸ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::‰Ó·‡‚ËÚ¸ToolStripMenuItem1_Click_1);
            // 
            // Â‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem1
            // 
            this->Â‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem1->Name = L"Â‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem1";
            this->Â‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem1->Size = System::Drawing::Size(154, 22);
            this->Â‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem1->Text = L"–Â‰‡ÍÚËÓ‚‡Ú¸";
            // 
            // label1
            // 
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(16, 50);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(57, 13);
            this->label1->TabIndex = 1;
            this->label1->Text = L"Õ‡Á‚‡ÌËÂ";
            this->label1->Visible = false;
            // 
            // label2
            // 
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(47, 75);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(26, 13);
            this->label2->TabIndex = 2;
            this->label2->Text = L"“ËÔ";
            this->label2->Visible = false;
            // 
            // label3
            // 
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(7, 101);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(66, 13);
            this->label3->TabIndex = 3;
            this->label3->Text = L" ÓÎË˜ÂÒÚ‚Ó";
            this->label3->Visible = false;
            // 
            // label4
            // 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(27, 126);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(46, 13);
            this->label4->TabIndex = 4;
            this->label4->Text = L"–‡ÁÏÂ";
            this->label4->Visible = false;
            // 
            // textBox1
            // 
            this->textBox1->Location = System::Drawing::Point(89, 47);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(65, 20);
            this->textBox1->TabIndex = 5;
            this->textBox1->Visible = false;
            // 
            // textBox2
            // 
            this->textBox2->Location = System::Drawing::Point(89, 72);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(65, 20);
            this->textBox2->TabIndex = 6;
            this->textBox2->Visible = false;
            // 
            // textBox3
            // 
            this->textBox3->Location = System::Drawing::Point(89, 98);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(65, 20);
            this->textBox3->TabIndex = 7;
            this->textBox3->Visible = false;
            // 
            // textBox4
            // 
            this->textBox4->Location = System::Drawing::Point(89, 123);
            this->textBox4->Name = L"textBox4";
            this->textBox4->Size = System::Drawing::Size(65, 20);
            this->textBox4->TabIndex = 8;
            this->textBox4->Visible = false;
            // 
            // label5
            // 
            this->label5->AutoSize = true;
            this->label5->Location = System::Drawing::Point(211, 35);
            this->label5->Name = L"label5";
            this->label5->Size = System::Drawing::Size(146, 13);
            this->label5->TabIndex = 9;
            this->label5->Text = L"ƒÓ·‡‚ËÚ¸ Ù‡ÈÎ˚ ‚ Í‡Ú‡ÎÓ„";
            this->label5->Visible = false;
            // 
            // checkedListBox1
            // 
            this->checkedListBox1->FormattingEnabled = true;
            this->checkedListBox1->Location = System::Drawing::Point(214, 54);
            this->checkedListBox1->Name = L"checkedListBox1";
            this->checkedListBox1->Size = System::Drawing::Size(142, 139);
            this->checkedListBox1->TabIndex = 10;
            this->checkedListBox1->Visible = false;
            // 
            // button1
            // 
            this->button1->Location = System::Drawing::Point(89, 160);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(65, 33);
            this->button1->TabIndex = 11;
            this->button1->Text = L"OK";
            this->button1->UseVisualStyleBackColor = true;
            this->button1->Visible = false;
            this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
            // 
            // label6
            // 
            this->label6->AutoSize = true;
            this->label6->Location = System::Drawing::Point(60, 24);
            this->label6->Name = L"label6";
            this->label6->Size = System::Drawing::Size(48, 13);
            this->label6->TabIndex = 12;
            this->label6->Text = L" ‡Ú‡ÎÓ„";
            this->label6->Visible = false;
            // 
            // textBox5
            // 
            this->textBox5->Location = System::Drawing::Point(291, 75);
            this->textBox5->Name = L"textBox5";
            this->textBox5->Size = System::Drawing::Size(65, 20);
            this->textBox5->TabIndex = 14;
            this->textBox5->Visible = false;
            // 
            // label7
            // 
            this->label7->AutoSize = true;
            this->label7->Location = System::Drawing::Point(224, 78);
            this->label7->Name = L"label7";
            this->label7->Size = System::Drawing::Size(61, 13);
            this->label7->TabIndex = 13;
            this->label7->Text = L"—ÓÁ‰‡ÚÂÎ¸";
            this->label7->Visible = false;
            // 
            // textBox6
            // 
            this->textBox6->Location = System::Drawing::Point(291, 101);
            this->textBox6->Name = L"textBox6";
            this->textBox6->Size = System::Drawing::Size(65, 20);
            this->textBox6->TabIndex = 16;
            this->textBox6->Visible = false;
            // 
            // label8
            // 
            this->label8->AutoSize = true;
            this->label8->Location = System::Drawing::Point(193, 105);
            this->label8->Name = L"label8";
            this->label8->Size = System::Drawing::Size(92, 13);
            this->label8->TabIndex = 15;
            this->label8->Text = L"¬ÂÏˇ —ÓÁ‰‡ÌËˇ";
            this->label8->Visible = false;
            // 
            // textBox7
            // 
            this->textBox7->Location = System::Drawing::Point(291, 127);
            this->textBox7->Name = L"textBox7";
            this->textBox7->Size = System::Drawing::Size(65, 20);
            this->textBox7->TabIndex = 18;
            this->textBox7->Visible = false;
            // 
            // label9
            // 
            this->label9->AutoSize = true;
            this->label9->Location = System::Drawing::Point(203, 130);
            this->label9->Name = L"label9";
            this->label9->Size = System::Drawing::Size(82, 13);
            this->label9->TabIndex = 17;
            this->label9->Text = L"¬ÂÏˇ –Â‰‡ÍÚ.";
            this->label9->Visible = false;
            // 
            // button2
            // 
            this->button2->Location = System::Drawing::Point(50, 160);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(104, 33);
            this->button2->TabIndex = 19;
            this->button2->Text = L"ƒÓ·‡‚ËÚ¸";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Visible = false;
            this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(406, 232);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->textBox7);
            this->Controls->Add(this->label9);
            this->Controls->Add(this->textBox6);
            this->Controls->Add(this->label8);
            this->Controls->Add(this->textBox5);
            this->Controls->Add(this->label7);
            this->Controls->Add(this->label6);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->checkedListBox1);
            this->Controls->Add(this->label5);
            this->Controls->Add(this->textBox4);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->Name = L"Form1";
            this->Text = L"ƒÁ";
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    
private: System::Void ‰Ó·‡‚ËÚ¸ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
             label1->Visible = true;
             label2->Visible = true;
             label3->Visible = true;
             label4->Visible = true;
             label5->Visible = true;
             label6->Visible = true;
             label6->Text = " ‡Ú‡ÎÓ„";
             textBox1->Visible = true;
             textBox2->Visible = true;
             textBox3->Visible = true;
             textBox4->Visible = true;
             checkedListBox1->Visible = true;
             button2->Visible = false;
             button1->Visible = true;
             label7->Visible = false;
             label8->Visible = false;
             label9->Visible = false;
             textBox5->Visible = false;
             textBox6->Visible = false;
             textBox7->Visible = false;
             }
             

private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
             //std::vector <File> F = 0;
             char *name1 = new char[] = and_SysStringToChar(textBox1->Text);
             //if (name1 == "")
                // System::Windows::Forms::MessageBox::Show("ÕÂ ‚ÒÂ ÔÓÎˇ Á‡ÔÓÎÌÂÌ˚");
             string name = name1;
             char *type1 = new char[] = and_SysStringToChar(textBox2->Text);
             string type = type1;
             if ((name == "")||(type == "")||(textBox3->Text == "")||(textBox4->Text == ""))
                 System::Windows::Forms::MessageBox::Show("ÕÂ ‚ÒÂ ÔÓÎˇ Á‡ÔÓÎÌÂÌ˚");
             else {
             int kol = Convert::ToInt32(textBox3->Text);
             int size = Convert::ToInt32(textBox4->Text);
             std::auto_ptr<Cat> a ( new Cat(name, kol, type, size));
             //Cat* a = new Cat(name, kol, type, size);
             System::Windows::Forms::MessageBox::Show(" ‡Ú‡ÎÓ„ ÒÓÁ‰‡Ì");
             }      
         }


private: System::Void ‰Ó·‡‚ËÚ¸ToolStripMenuItem1_Click_1(System::Object^  sender, System::EventArgs^  e) {
                      checkedListBox1->Visible = false;
             label5->Visible = false;
             label1->Visible = true;
             label2->Visible = true;
             label3->Visible = false;
             label4->Visible = true;
             label6->Visible = true;
             label6->Text = "‘‡ÈÎ";
             textBox1->Visible = true;
             textBox2->Visible = true;
             textBox3->Visible = false;
             textBox4->Visible = true;
             checkedListBox1->Visible = false;
             button1->Visible = false;
             button2->Visible = true;
             label7->Visible = true;
             label8->Visible = true;
             label9->Visible = true;
             textBox5->Visible = true;
             textBox6->Visible = true;
             textBox7->Visible = true;
                  }
private: System::Void Â‰‡ÍÚËÓ‚‡Ú¸ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
             label1->Visible = true;
             label2->Visible = true;
             label3->Visible = true;
             label4->Visible = true;
             label5->Visible = true;
             label6->Visible = true;
             label6->Text = "–Â‰‡ÍÚËÓ‚‡ÌËÂ Í‡Ú‡ÎÓ„‡";
             textBox1->Visible = true;
             textBox2->Visible = true;
             textBox3->Visible = true;
             textBox4->Visible = true;
             checkedListBox1->Visible = true;
             button2->Visible = false;
             button1->Visible = true;
             label7->Visible = false;
             label8->Visible = false;
             label9->Visible = false;
             textBox5->Visible = false;
             textBox6->Visible = false;
             textBox7->Visible = false;
             string name1 = a.getname();
             //char* name = name1.c_str;
            // char *name = new char[name1.length() + 1];
             //char* name = a.getname().c_str;
             textBox1->Text = gcnew String(name1.c_str());
         }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { // Add file
              //std::vector <File> F = 0;
             char *name1 = new char[] = and_SysStringToChar(textBox1->Text);
             string name = name1;
             char *type1 = new char[] = and_SysStringToChar(textBox2->Text);
             string type = type1;
             char *creator1 = new char[] = and_SysStringToChar(textBox5->Text);
             string creator = creator1;
             if ((name == "")||(type == "")||(textBox4->Text == "")||(creator == "")
                    ||(textBox6->Text == "")||(textBox7->Text == ""))
                 System::Windows::Forms::MessageBox::Show("ÕÂ ‚ÒÂ ÔÓÎˇ Á‡ÔÓÎÌÂÌ˚");
             else {
             //int kol = Convert::ToInt32(textBox3->Text);
             int size = Convert::ToInt32(textBox4->Text);
             int timeofcreate = Convert::ToInt32(textBox6->Text);
             int timeofmod = Convert::ToInt32(textBox7->Text);
             File* f = new File(name, creator,
                  type, size, timeofcreate, timeofmod);
             Fx.push_back(*f); // vector of files
             a.addfile(*f);
             System::Windows::Forms::MessageBox::Show("‘‡ÈÎ ‰Ó·‡‚ÎÂÌ");
             } 

         }
};
};


