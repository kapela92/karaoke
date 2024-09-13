//---------------------------------------------------------------------------


#include <vcl.h>
#include <dir.h>
#include <dos.h>
#include <string.h>
#include <time.h>
#pragma hdrstop

#include "odtwarza.h"
#include "Srodowisko.h"
#include "Wizytowka.h"
#include "Pomocnik2.h"
#include "Karaoke.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TLeci *Leci;
//---------------------------------------------------------------------------
__fastcall TLeci::TLeci(TComponent* Owner)
        : TForm(Owner)
{

 struct ffblk ffblk;
int done;
TFileName FileName;

Lista_piosenek->Clear();
done=findfirst("*.mp3",&ffblk,0);
while(!done)
{
FileName=ffblk.ff_name;
Lista_piosenek->Items->Add(FileName);
done=findnext(&ffblk);
}
done=findfirst("*.wav",&ffblk,0);
while(!done)
{
FileName=ffblk.ff_name;
Lista_piosenek->Items->Add(FileName);
done=findnext(&ffblk);
}
}
//---------------------------------------------------------------------------



void __fastcall TLeci::okClick(TObject *Sender)
{
 if(Lista_piosenek->ItemIndex>-1)
{
ok->Visible=false;
Lista_piosenek->Visible=false;
Text->Visible=true;
Powtorz->Visible=true;
Inna_piosenka->Visible=true;
TrackBar1->Visible=true;
MediaPlayer1->FileName=Lista_piosenek->Items->Strings[Lista_piosenek->ItemIndex];
MediaPlayer1->Open();
MediaPlayer1->Play();
Text->Lines->LoadFromFile(Lista_piosenek->Items->Strings[Lista_piosenek->ItemIndex]+".txt");
};
}
//---------------------------------------------------------------------------

void __fastcall TLeci::Inna_piosenkaClick(TObject *Sender)
{
ok->Visible=true;
Lista_piosenek->Visible=true;
Text->Visible=false;
Powtorz->Visible=false;
Inna_piosenka->Visible=false;
TrackBar1->Visible=false;
MediaPlayer1->Stop();
}
//---------------------------------------------------------------------------
void __fastcall TLeci::TrackBar1Change(TObject *Sender)
{
waveOutSetVolume(0, (TrackBar1->Position * 65536) + TrackBar1->Position);
}
//---------------------------------------------------------------------------

void __fastcall TLeci::PowtorzClick(TObject *Sender)
{
MediaPlayer1->Play();
}
//---------------------------------------------------------------------------




void __fastcall TLeci::Autor1Click(TObject *Sender)
{
Wiz->ShowModal() ;
}
//---------------------------------------------------------------------------

void __fastcall TLeci::Srodowiskowykonania1Click(TObject *Sender)
{
Srod->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TLeci::Zakocz1Click(TObject *Sender)
{
if(MediaPlayer1->Mode==mpPlaying)
{
MediaPlayer1->Stop();
}
Karaokee->Close() ;
Close();
}
//---------------------------------------------------------------------------

