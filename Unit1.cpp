//---------------------------------------------------------------------------

#include <vcl.h>

#pragma hdrstop

#include "Unit1.h"
#include "About.h"
#include <fstream.h>
#include <iostream.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

 //Создаю файл и шапку данных
ofstream outfile("Накладная.htm");
void __fastcall TForm1::ButStartClick(TObject *Sender)
{
  outfile<< "<html><head><title>Test</title></head><body>";
  outfile<< "Накладная<br>";
  outfile<<"на почту, отправленную<br>";
  outfile<<"<table width=\"190\" border=\"0\" cellpadding=\"0\" cellspacing=\"0\">";
  outfile<<"<tr><th width=\"536\" nowrap><table width=\"481\" border=\"0\" align=\"left\">";
  outfile<<"<tr>";
  outfile<<"<td width=\"504\">"<<"Откуда   :<u>&nbsp;&nbsp;&nbsp;"<<(Edit3->Text.c_str());
  outfile<<"&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</u></td></tr>";
  outfile<<"<tr>";
  outfile<<"<td>"<<"В емкость № "<<(Edit4->Text.c_str());
  outfile<<"</td>";
  outfile<<"</tr>";
  outfile<<"<tr>";
  outfile<<"<td>"<<"Пломба № "<<(Edit7->Text.c_str());
  outfile<<"</td>";
  outfile<<"</tr>";
  outfile<<"<tr>";
  outfile<<"<td>"<<(Edit8->Text.c_str());
  outfile<<"</td>";
  outfile<<"</tr>";
  outfile<<"</table></th>";
  outfile<<"<td width=\"210\"><table width=\"150\" border=\"1\" align=\"right\" cellspacing=\"0\" bordercolor=\"#000000\">";
  outfile<<"<tr>";
  outfile<<"<td width=\"109\">&nbsp;</td>";
  outfile<<"</tr>";
  outfile<<"<tr>";
  outfile<<"<td>&nbsp;</td>";
  outfile<<"</tr>";
  outfile<<"<tr>";
  outfile<<"<td>&nbsp;</td>";
  outfile<<"</tr>";
  outfile<<"<tr>";
  outfile<<"<td>Итого: </td>";
  outfile<<"</tr>";
  outfile<<"</table></td>";
  outfile<<"</tr>";
  outfile<<"<tr>";
   outfile<<"<td colspan=\"2\"><table width=750 border=1 cellspacing=0 bordercolor=\"#000000\" color=black>";
     outfile<<"<tr>";
     outfile<<"<td width=150><h5>";
     outfile<<"<p align=\"center\">Наименование почтового отправления</p></h5>";
     outfile<<"</td>";
     outfile<<"<td width=100><h4>";
     outfile<<"<p align=\"center\">Номер</p></h4>";
     outfile<<"</td>";
     outfile<<"<td width=100><h4>";
     outfile<<"<p align=\"center\">Ценность</p></h4>";
     outfile<<"</td>";
     outfile<<"<td width=100><h4>";
     outfile<<"<p align=\"center\">Вес</p></h4>";
     outfile<<"</td>";
     outfile<<"<td width=250><h4>";
     outfile<<"<p align=\"center\">Откуда</p></h4>";
     outfile<<"</td>";
     outfile<<"<td width=50><h5>";
     outfile<<"<p align=\"center\">Особые отметки</p></h5>";
     outfile<<"</td></tr>";
//----------------------------------------------------------------------------->
//открываю доступ компонентам
 ComboBox1->Enabled = true;
 ComboBox2->Enabled = true;
 Edit1->Enabled = true;
 Edit2->Enabled = true;
 Edit5->Enabled = true;
 Edit6->Enabled = true;
 ADD->Enabled = true;
//закрываю доступ компонентам
 Edit3->Enabled = false;
 Edit4->Enabled = false;
 Edit7->Enabled = false;
 Edit8->Enabled = false;
 DateTime->Enabled = false;
 ButStart->Enabled = false;
 ButEnd->Enabled = true;
 ComboBox1->SetFocus();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button4Click(TObject *Sender)
{
 Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButEndClick(TObject *Sender)
{

 outfile<<"</table></td>";
 outfile<<"</tr>";
 outfile<<("</table>");
 outfile<<"<br>";
 outfile<<"<strong>Итого:  </strong>";
 outfile<<(count);
 //outfile.seekp(387);
 //outfile<<(count);
 //outfile.seekp(1071);
 outfile<<"<br>";
 outfile<<"<strong>Оператор:  </strong>"<<(Edit8->Text.c_str());
 outfile<<"<br>";
 outfile<<"<strong>Дата :</strong>"<<(DateTime->Date.DateString().c_str());
 outfile<< "</body></html>";
 //открываю доступ компонентам
 ComboBox1->Enabled = false;
 ComboBox2->Enabled = false;
 Edit1->Enabled = false;
 Edit2->Enabled = false;
 Edit5->Enabled = false;
 Edit6->Enabled = false;
 ADD->Enabled = false;
//закрываю доступ компонентам
 Edit3->Enabled = true;
 Edit4->Enabled = true;
 Edit7->Enabled = true;
 Edit8->Enabled = true;
 DateTime->Enabled = true;
 ButStart->Enabled = true;
 ButEnd->Enabled = false;
 //Нужно будет доделать отчистку полей:откуда, в адресс
 //после нажатия на кнопку закрыть
// Edit7->Text = (DateTime->Date.DateString().c_str());
 }
//---------------------------------------------------------------------------
void __fastcall TForm1::ADDClick(TObject *Sender)
{
  outfile<<("<tr><td> ");
  outfile<<(ComboBox1->Text.c_str());
  outfile<<("</td>");
//
  outfile<<("<td> ");
  outfile<<(Edit1->Text.c_str());
  outfile<<("</td>");
//
  outfile<<("<td> ");
  outfile<<(Edit2->Text.c_str());
  outfile<<("</td>");
//
  outfile<<("<td> ");
  outfile<<(Edit5->Text.c_str());
  outfile<<("</td>");
//
  outfile<<("<td> ");
  outfile<<(Edit6->Text.c_str());
  outfile<<("</td>");
  //
  outfile<<("<td> ");
  outfile<<(ComboBox2->Text.c_str());
  outfile<<("</td></tr>");
//
  ComboBox1->Text = " ";
  ComboBox2->Text = " ";
  Edit1->Text = " ";
  Edit2->Text = " ";
  Edit5->Text = " ";
  Edit6->Text = " ";
  ComboBox1->SetFocus();
  count++;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N2Click(TObject *Sender)
{
 TForm2 *Form2 = new TForm2(this);
 Form2->ShowModal();
 delete Form2;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N3Click(TObject *Sender)
{
Close();
}
//---------------------------------------------------------------------------

