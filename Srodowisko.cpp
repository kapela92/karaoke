//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Srodowisko.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TSrod *Srod;
//---------------------------------------------------------------------------
__fastcall TSrod::TSrod(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
