#pragma once
#include <ctime>

namespace aimtrainer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ start
	/// </summary>
	public ref class start : public System::Windows::Forms::Form
	{
	public:
		start(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~start()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Panel^  panel1;
	Panel^  panel2;
	private: System::Windows::Forms::Timer^  timer2;
	private: System::Windows::Forms::Label^  label2;


	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Timer^  timer3;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(start::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(96, 106);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Gamemode:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"Aiming", L"Tracking", L"Aiming #2"});
			this->comboBox1->Location = System::Drawing::Point(199, 105);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(118, 21);
			this->comboBox1->TabIndex = 1;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &start::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(158, 227);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(102, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Start aiming...";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &start::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &start::timer1_Tick);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(8, 8);
			this->panel1->TabIndex = 3;
			this->panel1->Visible = false;
			this->panel1->Click += gcnew System::EventHandler(this, &start::panel1_Click);
			this->panel1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &start::panel1_MouseClick);
			this->panel1->MouseEnter += gcnew System::EventHandler(this, &start::panel1_MouseEnter);
			this->panel1->MouseLeave += gcnew System::EventHandler(this, &start::panel1_MouseLeave);
			// 
			// timer2
			// 
			this->timer2->Interval = 1;
			this->timer2->Tick += gcnew System::EventHandler(this, &start::timer2_Tick);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(287, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 24);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Score: 0";
			this->label2->Visible = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Silver;
			this->label4->Location = System::Drawing::Point(155, 61);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(140, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Less number = higher speed";
			// 
			// timer3
			// 
			this->timer3->Interval = 500;
			this->timer3->Tick += gcnew System::EventHandler(this, &start::timer3_Tick);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Green;
			this->label5->Location = System::Drawing::Point(26, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(68, 24);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Miss: 0";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(199, 132);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(118, 20);
			this->textBox2->TabIndex = 10;
			this->textBox2->Text = L"8";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &start::textBox2_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(72, 132);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(127, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Square size (px):";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(199, 158);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(118, 20);
			this->textBox3->TabIndex = 12;
			this->textBox3->Text = L"500";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &start::textBox3_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(128, 158);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 20);
			this->label7->TabIndex = 11;
			this->label7->Text = L"Interval:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(72, 77);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(121, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Tracking speed:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(199, 77);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(118, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->Text = L"1";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &start::textBox1_TextChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(51, 191);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 32);
			this->pictureBox1->TabIndex = 13;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &start::pictureBox1_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(96, 196);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(100, 20);
			this->label8->TabIndex = 14;
			this->label8->Text = L"GitHub page";
			this->label8->Click += gcnew System::EventHandler(this, &start::label8_Click);
			this->label8->MouseEnter += gcnew System::EventHandler(this, &start::label8_MouseEnter);
			this->label8->MouseLeave += gcnew System::EventHandler(this, &start::label8_MouseLeave);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::Black;
			this->label9->Location = System::Drawing::Point(244, 194);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(124, 20);
			this->label9->TabIndex = 16;
			this->label9->Text = L"VKontakte page";
			this->label9->Click += gcnew System::EventHandler(this, &start::label9_Click);
			this->label9->MouseEnter += gcnew System::EventHandler(this, &start::label9_MouseEnter);
			this->label9->MouseLeave += gcnew System::EventHandler(this, &start::label9_MouseLeave);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(206, 189);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(32, 32);
			this->pictureBox2->TabIndex = 15;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &start::pictureBox2_Click);
			// 
			// start
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(424, 262);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"start";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RezWaki\'s Aim Trainer v1.0";
			this->Load += gcnew System::EventHandler(this, &start::start_Load);
			this->Click += gcnew System::EventHandler(this, &start::start_Click);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &start::start_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		INT rand_num, score, miss;
		BOOL current_panel, captured_cursor;

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 button1->Visible = FALSE;
				 comboBox1->Visible = FALSE;
				 label1->Visible = FALSE;
				 label4->Visible = FALSE;
				 label3->Visible = FALSE;
				 textBox1->Visible = FALSE;
				 label6->Visible = FALSE;
				 textBox2->Visible = FALSE;
				 label7->Visible = FALSE;
				 textBox3->Visible = FALSE;
				 panel1->Visible = TRUE;
				 label2->Visible = TRUE;
				 textBox1->Enabled = FALSE;
				 textBox2->Enabled = FALSE;
				 textBox3->Enabled = FALSE;
				 pictureBox1->Visible = FALSE;
				 pictureBox2->Visible = FALSE;
				 label8->Visible = FALSE;
				 label9->Visible = FALSE;
				 //delete(textBox1);
				 //delete(textBox2);
				 //delete(textBox3);
				 switch( comboBox1->SelectedIndex ) {
					case 0:
						timer1->Start();
					break;
					case 1:
						timer2->Start();
					break;
					case 2:
						timer3->Start();
					break;
				 }
			 }
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
				 srand(time(0));
				 //randx = rand()%Width;
				 srand(time(0));
				 //randy = rand()%Height;
				 panel1->Location = Point(rand()%300, rand()%300);
			 }
private: System::Void timer2_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(panel1->Location.X <= 400 && panel1->Location.Y <= 400
				 && panel1->Location.X > 0 && panel1->Location.Y > 0){
				 srand( time(0) );
				 if(rand_num) panel1->Location = Point(panel1->Location.X+1, panel1->Location.Y-1);
				 else panel1->Location = Point(panel1->Location.X+1, panel1->Location.Y+1);
			 }
			 else{
				 rand_num = rand()%2;
				 panel1->Location = Point(rand()%300, rand()%300);
			 }
		 }
private: System::Void panel1_Click(System::Object^  sender, System::EventArgs^  e) {
			 score++;
			 label2->Text = "Score: "+score.ToString();
		 }
private: System::Void panel1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 //score++;
			 //label2->Text = "Score: "+score.ToString();
		 }
private: System::Void start_Load(System::Object^  sender, System::EventArgs^  e) {
			 rand_num = 1;
			 score = 0;
			 current_panel = true;
			 comboBox1->SelectedIndex = 0;
		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 if(comboBox1->SelectedIndex){
				 textBox1->Enabled = true;
				 panel1->Width = 16;
				 panel1->Height = 16;
			 }
			 else
				 textBox1->Enabled = false;
		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 timer2->Interval = Convert::ToInt16(textBox1->Text);
		 }
private: System::Void timer3_Tick(System::Object^  sender, System::EventArgs^  e) {
			 if(!current_panel){
				 //delete(panel2);
				 srand(time(0));
				 panel1 = gcnew Panel();
				 panel1->Location = Point(rand()%300, rand()%300);
				 Controls->Add(panel1);
				 panel1->Visible = TRUE;
			 }
			 else{
				 //delete(panel1);
				 srand(time(0));
				 panel2 = gcnew Panel();
				 panel2->Location = Point(rand()%300, rand()%300);
				 Controls->Add(panel2);
				 panel2->Visible = TRUE;
			 }
			 current_panel = !current_panel;
		 }
private: System::Void start_Click(System::Object^  sender, System::EventArgs^  e) {
			 miss++;
			 label5->Text = "Miss: "+miss.ToString();
		 }
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 panel1->Width = Convert::ToInt16(textBox2->Text);
			 panel1->Height = Convert::ToInt16(textBox2->Text);
		 }
private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Interval = Convert::ToInt16(textBox3->Text);
		 }
private: System::Void start_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			 if(captured_cursor && e->KeyValue ){
				 score++;
				 label2->Text = "Score: "+score.ToString();
			 }
			 else{
				 miss++;
				 label5->Text = "Miss: "+miss.ToString();
			 }
		 }
private: System::Void panel1_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 captured_cursor = TRUE;
		 }
private: System::Void panel1_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 captured_cursor = FALSE;
		 }
private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
			 system("start https://github.com/rezwaki?tab=repositories");
		 }
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
			 system("start https://github.com/rezwaki?tab=repositories");
		 }
private: System::Void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
			 system("start https://vk.com/glow_05");
		 }
private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
			 system("start https://vk.com/glow_05");
		 }
private: System::Void label8_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 label8->ForeColor = Color::Blue;
			 label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
		 }
private: System::Void label8_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 label8->ForeColor = Color::Black;
			 label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
		 }
private: System::Void label9_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
			 label9->ForeColor = Color::Blue;
			 label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
		 }
private: System::Void label9_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
			 label9->ForeColor = Color::Black;
			 label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
		 }
};
}