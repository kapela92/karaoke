//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Aktualizuj.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAktu *Aktu;
//---------------------------------------------------------------------------
__fastcall TAktu::TAktu(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAktu::SpeedButton1Click(TObject *Sender)
{
SHELLEXECUTEINFO ExecuteInfo;
                                          memset(&ExecuteInfo, 0, sizeof(ExecuteInfo));
    
                                          ExecuteInfo.cbSize       = sizeof(ExecuteInfo);
                                          ExecuteInfo.fMask        = 0;                
                                          ExecuteInfo.hwnd         = 0;                
                                          ExecuteInfo.lpVerb       = "open";                      // Operation to perform
                                          ExecuteInfo.lpFile       = "firefox.exe";  // Application name
                                          ExecuteInfo.lpParameters = "http://kapela92.cba.pl/?page_id=25";           // Additional parameters
                                          ExecuteInfo.lpDirectory  = 0;                           // Default directory
                                          ExecuteInfo.nShow        = SW_SHOWMAXIMIZED;
                                          ExecuteInfo.hInstApp     = 0;
    
                                          if(ShellExecuteEx(&ExecuteInfo) == FALSE)
                                                                           { 
                                                                                   
                                                                                   SHELLEXECUTEINFO ExecuteInfo;
                                                                                    memset(&ExecuteInfo, 0, sizeof(ExecuteInfo));
    
                                                                                     ExecuteInfo.cbSize       = sizeof(ExecuteInfo);
                                                                                     ExecuteInfo.fMask        = 0;
                                                                                     ExecuteInfo.hwnd         = 0;
                                                                                     ExecuteInfo.lpVerb       = "open";                      // Operation to perform
                                                                                     ExecuteInfo.lpFile       = "iexplore.exe";  // Application name
                                                                                     ExecuteInfo.lpParameters = "http://kapela92.cba.pl/?page_id=25";           // Additional parameters
                                                                                     ExecuteInfo.lpDirectory  = 0;                           // Default directory
                                                                                     ExecuteInfo.nShow        = SW_SHOWMAXIMIZED;
                                                                                     ExecuteInfo.hInstApp     = 0;
																					 
																					  if(ShellExecuteEx(&ExecuteInfo) == FALSE){
																					  
																					  //obsluga bledu
																					  }
                                                                           }
}
//---------------------------------------------------------------------------

