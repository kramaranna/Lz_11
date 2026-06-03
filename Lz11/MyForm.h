#pragma once

namespace Lz11 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO; //клас простору для роботи з файлами

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
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(68, 249);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 51);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Читати з файла";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(363, 72);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 51);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Обчислити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(363, 249);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(123, 51);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Записати у файл";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(552, 33);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(25, 63);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(223, 180);
			this->richTextBox1->TabIndex = 5;
			this->richTextBox1->Text = L"";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(390, 154);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 16);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Відповідь";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(390, 195);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 16);
			this->label2->TabIndex = 7;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(576, 326);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ fname = "numbers.txt";
        if (File::Exists(fname)) {
            StreamReader^ reader = File::OpenText(fname);
            richTextBox1->Clear();
            String^ fileContent = reader->ReadToEnd();
            array<String^>^ numbers = fileContent->Split(' ');
            for (int i = 0; i < numbers->Length; i++) {
                richTextBox1->AppendText(numbers[i] + Environment::NewLine);
            }
            reader->Close();
        }
}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
double sum = 0;
        int count = 0;
        for (int i = 0; i < richTextBox1->Lines->Length; i++)
        {
            int number;
            if (int::TryParse(richTextBox1->Lines[i], number))
            {
                // Перевірка на непарність
                if (number % 2 != 0)
                {
                    sum += number;
                    count++;
                }
            }
        }
        // Перевіряємо, чи знайшли хоча б одне непарне число, щоб уникнути ділення на нуль
        if (count > 0) {
            double average = sum / count;
            label2->Text = Convert::ToString(average);
        } 
		else {
            label2->Text = "Непарних чисел немає";
        }
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ fileName = "output.txt";
        StreamWriter^ writer = File::CreateText(fileName);
        double sum = 0;
        int count = 0;
        // Записуємо спочатку самі непарні числа
        for (int i = 0; i < richTextBox1->Lines->Length; i++) {
            int number;
            if (int::TryParse(richTextBox1->Lines[i], number)) {
                if (number % 2 != 0) {
                    sum += number;
                    count++;
                    writer->WriteLine(number); // записуємо число у файл
                }
            }
       }

        // Рахуємо та записуємо фінальний результат
        if (count > 0) {
            double average = sum / count;
            writer->WriteLine("Average: " + Convert::ToString(average));
 } 
		else {
            writer->WriteLine("No odd numbers found.");
}
        writer->Close();
        MessageBox::Show("Середнє арифметичне непарних чисел було записано у файл " + fileName);
    }


};
}
