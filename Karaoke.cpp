//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Karaoke.h"
#include "Wizytowka.h"
#include "Srodowisko.h"
#include "Aktualizuj.h"
#include "odtwarza.h"
#include "Pomocnik1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TKaraokee *Karaokee;
//---------------------------------------------------------------------------
__fastcall TKaraokee::TKaraokee(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TKaraokee::Autor1Click(TObject *Sender)
{
Wiz->ShowModal() ;
}
//---------------------------------------------------------------------------
void __fastcall TKaraokee::Srodowiskowykonania1Click(TObject *Sender)
{
Srod->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TKaraokee::GrajClick(TObject *Sender)
{
Leci->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TKaraokee::Zakocz1Click(TObject *Sender)
{
Close();        
}
//---------------------------------------------------------------------------

void __fastcall TKaraokee::aktualizujClick(TObject *Sender)
{
Aktu->ShowModal();
}
//---------------------------------------------------------------------------

