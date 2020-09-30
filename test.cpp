// *********************************************************************
// *********************************************************************

#define _CRT_SECURE_NO_DEPRECATE
#include <windows.h>    // WinApi
#include <windowsx.h>   // WinApi
#include <commctrl.h>   // WinApi
#include <commdlg.h>    // WinApi
#include <direct.h>     // WinApi
#include <mmsystem.h>   // WinApi
#include <oaidl.h>      // WinApi
#include <objbase.h>    // WinApi
#include <ocidl.h>      // WinApi
#include <ole2.h>       // WinApi
#include <oleauto.h>    // WinApi
#include <olectl.h>     // WinApi
#include <richedit.h>   // WinApi
#include <shellapi.h>   // WinApi
#include <shlobj.h>     // WinApi
#include <urlmon.h>     // WinApi
#include <wchar.h>      // WinApi
#include <tchar.h>      // WinApi
#include <unknwn.h>     // WinApi
#include <wininet.h>    // WinApi
#include <winsock.h>    // WinApi
#include <winuser.h>    // WinApi
#include <stdbool.h>    // ISO StdLib
#include <ctype.h>      // ISO StdLib
#include <math.h>       // ISO StdLib
#include <setjmp.h>     // ISO StdLib
#include <stdarg.h>     // ISO StdLib
#include <stddef.h>     // ISO StdLib
#include <stdio.h>      // ISO StdLib
#include <stdlib.h>     // ISO StdLib
#include <string.h>     // ISO StdLib
#include <time.h>       // ISO StdLib
#include <process.h>    // ISO StdLib
#include <fcntl.h>      // POSIX
#include <conio.h>      // Primitive i/o
#include <io.h>         // WinNT POSIX subset

// *********************************************************************
//                          Compiler Defines
// *********************************************************************
#if defined (__cplusplus)
  #define overloaded
  #define C_EXPORT EXTERN_C __declspec(dllexport)
  #define C_IMPORT EXTERN_C __declspec(dllimport)
#else
  #define C_EXPORT __declspec(dllexport)
  #define C_IMPORT __declspec(dllimport)
#endif
// *********************************************************************
//                             Lcc-Win32
// *********************************************************************
#if defined( __LCC__)
  #define _fseeki64  fseeki64
  #include <malloc.h>  // for _msize
#endif
// *********************************************************************
//                            Open Watcom
// *********************************************************************
#if defined (__WATCOM_CPLUSPLUS__) || defined(__TINYC__)
  #define atanl atan
  #define sinl  sin
  #define cosl  cos
  #define tanl  tan
  #define asinl asin
  #define acosl acos
  #define logl  log
  #define log10l log10
  #define _fcloseall fcloseall
#endif
// *********************************************************************
//                        Borland C++ 5.5.1
// *********************************************************************
#if defined (__BCPLUSPLUS__) && !defined(_WIN64)
  #include <dos.h>
  #pragma comment(lib,"import32.lib")
  #pragma comment(lib,"cw32.lib")
#endif
// *********************************************************************
//                             Pelles C
// *********************************************************************
#if defined (__POCC__)
   #pragma pack_stack(off)     // Pelle's fix for a v10 optimization bug
   #pragma warn(disable: 2248) // optional args not portable warnings
   #pragma warn(disable: 2215) // conversion from type1 to type2 warnings
   #pragma warn(disable: 2251) // types with different signedness
   #pragma warn(disable: 2805) // possible anti-aliasing violation warnings
   #pragma warn(disable: 2118) // unreferenced argument warnings
   #pragma warn(disable: 2810) // potential realloc warnings
   #pragma warn(disable: 2006) // non-portable conversion int to const char*
   #pragma warn(disable: 2007) // non-portable inline code
   #pragma warn(disable: 2154) // buggy unreachable code warning using sizeof
#endif
// *********************************************************************
//                           Microsoft VC++
// *********************************************************************
#if (_MSC_VER >= 1900)            // earlier versions untested
   #pragma warning(disable: 4244) // conversion from type1 to type2 warnings
   #pragma warning(disable: 4838) // conversion from type1 to type2 warnings
   #pragma warning(disable: 4267) // conversion from type1 to type2 warnings
   #pragma warning(disable: 4800) // forcing value to bool warnings
   #pragma warning(disable: 4018) // signed/unsigned mismatch warnings
#endif
#ifndef DECLSPEC_UUID
  #if (_MSC_VER >= 1100) && defined (__cplusplus)
    #define DECLSPEC_UUID(x)  __declspec(uuid(x))
  #else
    #define DECLSPEC_UUID(x)
  #endif
#endif
#ifndef __cplusplus
  #error A C++ compiler is required
#endif


// *************************************************
// Instruct Linker to Search Object/Import Libraries
// *************************************************

#if !(defined(__BCPLUSPLUS__) && defined(_WIN64))
  #if !defined( __LCC__)
    #pragma comment(lib,"shell32.lib")
    #pragma comment(lib,"kernel32.lib")
    #pragma comment(lib,"user32.lib")
    #pragma comment(lib,"gdi32.lib")
    #pragma comment(lib,"comctl32.lib")
    #pragma comment(lib,"advapi32.lib")
    #pragma comment(lib,"winspool.lib")
    #pragma comment(lib,"ole32.lib")
    #pragma comment(lib,"oleaut32.lib")
    #pragma comment(lib,"uuid.lib")
    #pragma comment(lib,"odbc32.lib")
    #pragma comment(lib,"odbccp32.lib")
    #pragma comment(lib,"winmm.lib")
    #pragma comment(lib,"comdlg32.lib")
    #pragma comment(lib,"imagehlp.lib")
    #pragma comment(lib,"version.lib")
    #pragma comment(lib,"wininet.lib")
    #pragma comment(lib,"urlmon.lib")
  #else
    #pragma lib <shell32.lib>
    #pragma lib <winspool.lib>
    #pragma lib <ole32.lib>
    #pragma lib <oleaut32.lib>
    #pragma lib <uuid.lib>
    #pragma lib <odbc32.lib>
    #pragma lib <odbccp32.lib>
    #pragma lib <winmm.lib>
    #pragma lib <imagehlp.lib>
    #pragma lib <version.lib>
    #pragma lib <wininet.lib>
    #pragma lib <urlmon.lib>
  #endif
#endif

// *************************************************
//            System Defined Constants
// *************************************************

#define BCXSTRSIZE 2048 

// *************************************************
//             User Defined Constants
// *************************************************

#define ID_Form1 0 
#define ID_ToolBar1 1 
#define ToolBar1Captions "TBButton0|NewButton|NewButton|NewButton|NewButton" 

// *************************************************
//               Standard Prototypes
// *************************************************

void    BCX_SetMetric (LPCTSTR);
void    BCX_RegWnd (LPCTSTR, WNDPROC);
void    BCX_InitGUI (void);
HWND    BCX_Form (LPCTSTR, int=0, int=0, int=250, int=150, int=-1, int=0);
HWND    BCX_Toolbar (HWND, int, int, LPCTSTR =0, int* =0, void* =0, int* =0, int=0, int=0, int=0, int=0);
void    Center (HWND, HWND=0, HWND=0);
char*   BCX_TmpStr (unsigned int);
char*   str (double, int=0);
char*   join (int, ...);

// *************************************************
//                System Variables
// *************************************************



// *************************************************
//            User's Global Variables
// *************************************************

static HFONT   BcxFont;
static float   BCX_ScaleX;
static float   BCX_ScaleY;
static HINSTANCE BCX_hInstance;
static HWND    BCX_hwndMDIClient;
static WNDCLASSEX BCX_WndClass;
static BOOL    BCX_GUI_Init;
static char    BCX_ClassName[BCXSTRSIZE];
static HWND    Form1;
static HWND    ToolBar1;
static HBITMAP ToolBar1Hbitmap;


// *************************************************
//               Standard Macros
// *************************************************

#define _DFont ((BcxFont!=0)?BcxFont:(HFONT)SNDMSG(hWnd, WM_GETFONT, 0, 0))
#define DefaultFont ((_DFont==0)?GetStockObject(DEFAULT_GUI_FONT):_DFont)

// *************************************************
//               User's Prototypes
// *************************************************

void    FormLoad (void);
LRESULT CALLBACK WndProc (HWND,UINT,WPARAM,LPARAM);
void    ToolBar1_Setup (void);
void    SetCbk (HWND);
LRESULT CALLBACK ControlCbk (HWND,UINT,WPARAM,LPARAM);
void    ToolBar1Btn_Click (DWORD);
void    Form1_MouseDown (int,int,WORD,WORD);
void    Form1_MouseUp (int,int,WORD,WORD);

// *************************************************
//            User's Global Initialized Arrays
// *************************************************


// *************************************************
//              User's GLOBAL SET Statements
// *************************************************

static int ToolBar1ImgIndexes[]=
  {
 0,0,0,0,0
};

static int ToolBar1BtnStyles[]=
  {
 TBSTYLE_BUTTON|TBSTYLE_AUTOSIZE,
 TBSTYLE_BUTTON|TBSTYLE_AUTOSIZE,
 TBSTYLE_BUTTON|TBSTYLE_AUTOSIZE,
 TBSTYLE_BUTTON|TBSTYLE_AUTOSIZE,
 TBSTYLE_BUTTON|TBSTYLE_AUTOSIZE
};



// *************************************************
//                 Runtime Functions
// *************************************************

char *BCX_TmpStr (unsigned int iBytes)
{
  static int   StrCnt;
  static char *StrFunc[2048];
  StrCnt=(StrCnt + 1) & (2047);
  if (StrFunc[StrCnt])
    {
      free (StrFunc[StrCnt]);
      StrFunc[StrCnt] = NULL;
    }
  StrFunc[StrCnt]=(char*)calloc(iBytes+1, sizeof(char));
  return StrFunc[StrCnt];
}


char *str(double d_, int nospc)
{
  char *strtmp = BCX_TmpStr(24);
  if (nospc)
     sprintf(strtmp, "%.15G", d_);
  else
     sprintf(strtmp, "% .15G", d_);
  return strtmp;
}


char * join(int n, ...)
{
  int ii = n, tmplen = 0;
  char *s_;
  char *strtmp;
  va_list marker;
  va_start(marker, n); // Initialize variable arguments
  while(ii-- > 0)
  {
    s_ = va_arg(marker, char *);
    if (s_) tmplen += strlen(s_);
  }
  strtmp = BCX_TmpStr(tmplen);
  va_end(marker); // Reset variable arguments
  ii = n;
  va_start(marker, n); // Initialize variable arguments
  while(ii-- > 0)
  {
    s_ = va_arg(marker, char *);
    if (s_) strcat(strtmp, s_);
  }
  va_end(marker); // Reset variable arguments
  return strtmp;
}


void Center (HWND hwnd, HWND Xhwnd, HWND Yhwnd)
{
  RECT rect, rectP;
  int  x, y, width, height;
  int  screenwidth, screenheight;
  if (Xhwnd==0)
    {
      RECT  DesktopArea;
      RECT  rc;
      SystemParametersInfo(SPI_GETWORKAREA, 0, &DesktopArea, 0);
      GetWindowRect(hwnd, &rc);
      SetWindowPos(hwnd, HWND_TOP,
        ((DesktopArea.right-DesktopArea.left)-(rc.right-rc.left))/2+
          DesktopArea.left, ((DesktopArea.bottom-DesktopArea.top)-
         (rc.bottom-rc.top))/2 + DesktopArea.top, 0, 0, SWP_NOSIZE);
      return;
    }
  GetWindowRect (hwnd, &rect);
  GetWindowRect (Xhwnd, &rectP);
  width = rect.right-rect.left;
  x = ((rectP.right-rectP.left)-width)/2 + rectP.left;
  if (Yhwnd==NULL)
    {
      height = rect.bottom-rect.top;
      y = ((rectP.bottom-rectP.top)-height)/2 + rectP.top;
    }
  else
    {
      GetWindowRect(Yhwnd, &rectP);
      height = rect.bottom-rect.top;
      y = ((rectP.bottom-rectP.top)-height)/2+rectP.top;
    }
  screenwidth = GetSystemMetrics(SM_CXSCREEN);
  screenheight = GetSystemMetrics(SM_CYSCREEN);
  if ((x<0)) x = 0;
  if ((y<0)) y = 0;
  if ((x+width>screenwidth))   x = screenwidth-width;
  if ((y+height>screenheight)) y = screenheight-height;
  MoveWindow (hwnd, x, y, width, height, FALSE);
}


HWND BCX_Form (LPCTSTR Caption, int X, int Y, int W, int H, int Style, int Exstyle)
{
  if (Style == -1) Style = WS_MINIMIZEBOX|WS_SIZEBOX|WS_CAPTION|WS_MAXIMIZEBOX|WS_POPUP|WS_SYSMENU;
  
  HWND A = CreateWindowEx(Exstyle, BCX_ClassName, Caption, Style, X*BCX_ScaleX, Y*BCX_ScaleY,
         BCX_ScaleX*(4+W), BCX_ScaleY*(12+H), NULL,(HMENU)(UINT_PTR)NULL, BCX_hInstance, NULL);
           
  SendMessage (A,(UINT) WM_SETFONT, (WPARAM)((BcxFont==0) ? GetStockObject
              (DEFAULT_GUI_FONT):BcxFont), (LPARAM) MAKELPARAM(FALSE, 0));
  return A;
}


HWND BCX_Toolbar (HWND hWnd,int id,int NumBtns,LPCTSTR Text,int* Bstyles,void* img,int* imgidx,int bx,int by,int Style,int ExStyle)
{
  TBBUTTON*  tbb=(TBBUTTON*)calloc(NumBtns+20,sizeof(TBBUTTON));
  TBADDBITMAP  tbbitmap = {0,0};
  static  BITMAP  bm;
  int  seppos=0, absidx=0, index=0, NewIdx;
  int  txtlen=strlen(Text);
  if (!Style) Style=WS_CHILD|WS_BORDER;
  HWND A=CreateWindowEx(ExStyle,TOOLBARCLASSNAME,"",Style,0,0,0,0,hWnd,(HMENU)(UINT_PTR)id,BCX_hInstance,NULL);
  SendMessage(A,(UINT)TB_BUTTONSTRUCTSIZE,(WPARAM)sizeof(TBBUTTON),(LPARAM)0);
  SendMessage(A,(UINT)WM_SETFONT,(WPARAM)DefaultFont,(LPARAM)0);
  if (bx && by) SendMessage(A,(UINT)TB_SETBUTTONSIZE,(WPARAM)0,(LPARAM)MAKELONG(bx,by));
  while(absidx < NumBtns)
    {
     while(txtlen)
      {
        if (Text[seppos] == '|') break;
        if (!seppos || (seppos==txtlen)) {seppos=0; break;}
        seppos++;
      }
      if (Text[seppos] == '|' && Text[seppos+1] == '|')
       {
          tbb[index].fsStyle = TBSTYLE_SEP;
       }else{
          if (imgidx)
              NewIdx = imgidx[absidx];
           else
              NewIdx = absidx;
          tbb[index].iBitmap = NewIdx;
          tbb[index].idCommand = id+NewIdx+1;
          tbb[index].fsState = TBSTATE_ENABLED;
          if (Bstyles) tbb[index].fsStyle = Bstyles[NewIdx];
          tbb[index].iString = NewIdx;
          absidx++;
        }
      seppos++;
      index++;
    }
  SendMessage(A,(UINT)TB_ADDBUTTONS,(WPARAM)index,(LPARAM)(LPTBBUTTON)tbb);
  if (img!=0)
    {
      if (img==HINST_COMMCTRL)
       {
          tbbitmap.hInst=HINST_COMMCTRL;
          tbbitmap.nID=imgidx[NumBtns];
          SendMessage(A,(UINT)TB_ADDBITMAP,0,(LPARAM)(LPTBADDBITMAP)&tbbitmap);
       }else{
          if (!GetObject((HBITMAP)(img),sizeof(BITMAP),&bm))
           {
              SendMessage(A, TB_SETIMAGELIST, 0, (LPARAM)img);
           }else{
              tbbitmap.nID=(UINT)(HBITMAP)(img);
              SendMessage(A,(UINT)TB_SETBITMAPSIZE,(WPARAM)0,(LPARAM)MAKELONG(bm.bmWidth/NumBtns,bm.bmHeight));
              SendMessage(A,(UINT)TB_ADDBITMAP,(WPARAM)NumBtns,(LPARAM)(LPTBADDBITMAP)&tbbitmap);
           }
       }
    }
  if (txtlen && Text[0] != '-')
    {
      char*  titles;
      titles=(char*)calloc(2+txtlen,sizeof(char));
      absidx=0;
      for(index=0;index<txtlen;index++)
      {
        if (Text[index]=='|')
         {
            if (Text[index+1]=='|'||titles[0]==0) continue;
            titles[absidx]=0;
         }else{
            titles[absidx]=Text[index];
         }
        absidx++;
      }
      SendMessage(A,(UINT)TB_ADDSTRING,(WPARAM)0,(LPARAM)titles);
      free(titles);
    }
  SendMessage(A,(UINT)TB_AUTOSIZE, 0, 0);
  ShowWindow(A,SW_SHOW);
  free(tbb);
  return A;
}


void BCX_SetMetric (LPCTSTR metric)
{
  if (!BCX_GUI_Init)
      BCX_InitGUI();
  if (_stricmp(metric,"PIXELS")==0)
    {
      BCX_ScaleX = 1;
      BCX_ScaleY = 1;
    }
   else if (_stricmp((char*)metric,"DPI")==0)
     {
       HDC  hDc = GetDC(0);
       BCX_ScaleX = ( GetDeviceCaps( hDc, LOGPIXELSX) / 96.0f);
       BCX_ScaleY = ( GetDeviceCaps( hDc, LOGPIXELSY) / 96.0f);
       ReleaseDC(0, hDc);
     }
  else
    {
      RECT  rc = {0,0,4,8};
      MapDialogRect(NULL,&rc);
      BCX_ScaleX = rc.right/2;
      BCX_ScaleY = rc.bottom/4;
    }
}


void BCX_RegWnd (LPCTSTR classname, WNDPROC Form_WndProc)
{
  if (classname[0]==0)
    {
      MessageBox (GetActiveWindow(),"Empty String For BCX_ClassName NOT Allowed","Empty ClassName",0);
      fflush(stdout);
      ExitProcess(1);
    }
  if (GetClassInfoEx( BCX_hInstance, classname, &BCX_WndClass)!=0)
    {
      if (!Form_WndProc)
          UnregisterClass(classname,BCX_hInstance);
      return;
    }
  if (!BCX_GUI_Init)
      BCX_InitGUI();
  if (BCX_ScaleX == 0 && BCX_ScaleY == 0)
      BCX_SetMetric("Pixels");
  strcpy(BCX_ClassName,classname);
  BCX_WndClass.lpfnWndProc = Form_WndProc;
  BCX_WndClass.hInstance = BCX_hInstance;
  BCX_WndClass.lpszClassName = classname;
  RegisterClassEx(&BCX_WndClass);
}


void BCX_InitGUI (void)
{
  INITCOMMONCONTROLSEX  iccex;
  if (BCX_GUI_Init)
      return;
  BCX_ScaleX = 1 ;
  BCX_ScaleY = 1 ;
  BCX_hInstance = GetModuleHandle(NULL);
  BCX_hwndMDIClient = NULL;
  BCX_WndClass.cbSize = sizeof(BCX_WndClass);
  BCX_WndClass.style = CS_HREDRAW | CS_VREDRAW | CS_OWNDC;
  BCX_WndClass.cbClsExtra = 0;
  BCX_WndClass.cbWndExtra = 0;
  BCX_WndClass.hIcon =  LoadIcon(BCX_hInstance,MAKEINTRESOURCE(300));;
  BCX_WndClass.hCursor = LoadCursor(NULL, IDC_ARROW);
  BCX_WndClass.hbrBackground = (HBRUSH)(COLOR_BTNFACE+1);
  BCX_WndClass.lpszMenuName = NULL;
  BCX_WndClass.hIconSm = NULL;
  iccex.dwSize = sizeof(INITCOMMONCONTROLSEX);
  iccex.dwICC=ICC_LISTVIEW_CLASSES | ICC_TREEVIEW_CLASSES |
              ICC_BAR_CLASSES | ICC_TAB_CLASSES | ICC_UPDOWN_CLASS |
              ICC_PROGRESS_CLASS | ICC_USEREX_CLASSES | ICC_DATE_CLASSES;
  InitCommonControlsEx(&iccex);
  BCX_GUI_Init = TRUE;
}



// *************************************************
//            User's Subs and Functions
// *************************************************

void FormLoad ()
{
  INITCOMMONCONTROLSEX  icex={0};
  icex.dwSize=sizeof(INITCOMMONCONTROLSEX);
  icex.dwICC=ICC_BAR_CLASSES;
  InitCommonControlsEx( &icex);
  DWORD    Form1_Styles={0};
  DWORD    Form1_XStyles={0};
  DWORD    ToolBar1_Styles={0};
  DWORD    ToolBar1_XStyles={0};
  Form1_Styles=WS_OVERLAPPEDWINDOW|WS_CLIPSIBLINGS;
  Form1_XStyles=WS_EX_WINDOWEDGE|WS_EX_LEFT;
  ToolBar1_Styles=WS_CHILD|WS_VISIBLE|WS_TABSTOP|CCS_TOP|TBSTYLE_WRAPABLE|TBSTYLE_FLAT|TBSTYLE_LIST;
  ToolBar1_XStyles=WS_EX_LEFT;
  Form1=BCX_Form("Form1",53,75,427,338,Form1_Styles,Form1_XStyles);
  SetClassLong(Form1,GCL_STYLE,GetClassLong(Form1,GCL_STYLE)|CS_DBLCLKS);
  SendMessage(Form1,(UINT)WM_SETFONT,(WPARAM)GetStockObject(DEFAULT_GUI_FONT),(LPARAM)0);
  ToolBar1=BCX_Toolbar(Form1,ID_ToolBar1,5,ToolBar1Captions,ToolBar1BtnStyles,ToolBar1Hbitmap,ToolBar1ImgIndexes,82,22,ToolBar1_Styles,ToolBar1_XStyles);
  ToolBar1_Setup();
  Center(Form1);
  ShowWindow(Form1,SW_SHOW);
}


LRESULT CALLBACK WndProc (HWND hWnd,UINT Msg,WPARAM  wParam,LPARAM  lParam)
{
  if(Msg==WM_DRAWITEM||Msg==WM_MEASUREITEM)
    {
      SendDlgItemMessage(hWnd,wParam,Msg,wParam,lParam);
      return 0;
    }
  if(Msg==WM_CREATE)
    {
      return 0;
    }
  if(Msg==WM_GETMINMAXINFO)
    {
      ((LPMINMAXINFO)lParam)->ptMinTrackSize.x=112;
      ((LPMINMAXINFO)lParam)->ptMinTrackSize.y=27;
      ((LPMINMAXINFO)lParam)->ptMaxTrackSize.x=640;
      ((LPMINMAXINFO)lParam)->ptMaxTrackSize.y=480;
      ((LPMINMAXINFO)lParam)->ptMaxPosition.x=-4;
      ((LPMINMAXINFO)lParam)->ptMaxPosition.y=-4;
      goto L1000;
    }
  if(Msg==WM_DROPFILES)
    {
      POINT    pt;
      UINT     numFiles;
      UINT     a;
      HDC      hdc;
      char    szFile[BCXSTRSIZE]={0};
      DragQueryPoint((HDROP)wParam, &pt);
      numFiles=DragQueryFile((HDROP)wParam,0xFFFFFFFF,(LPSTR)NULL,0);
      a=0;
      hdc=GetDC(Form1);
      while(a<numFiles)
        {
          DragQueryFile((HDROP)wParam,a,szFile,sizeof(szFile));
          TextOut(hdc,pt.x,pt.y,szFile,strlen(szFile));
          pt.y+=20;
          a++;
        }
      ReleaseDC(Form1,hdc);
      DragFinish((HDROP)wParam);
      goto L1000;
    }
  if(Msg==WM_LBUTTONDOWN)
    {
      Form1_MouseDown(1,wParam,LOWORD(lParam),HIWORD(lParam));
      goto L1000;
    }
  if(Msg==WM_LBUTTONUP)
    {
      Form1_MouseUp(1,wParam,LOWORD(lParam),HIWORD(lParam));
      return 0;
    }
  if(Msg==WM_RBUTTONDOWN)
    {
      Form1_MouseDown(2,wParam,LOWORD(lParam),HIWORD(lParam));
      return 0;
    }
  if(Msg==WM_RBUTTONUP)
    {
      Form1_MouseUp(2,wParam,LOWORD(lParam),HIWORD(lParam));
      return 0;
    }
  if(Msg==WM_COMMAND)
    {
      goto L1000;
    }
  if(Msg==WM_HSCROLL||Msg==WM_VSCROLL)
    {
      goto L1000;
    }
  if(Msg==WM_NOTIFY)
    {
      if(((LPNMHDR)lParam)->hwndFrom==ToolBar1&&((  LPNMHDR)lParam)->code==NM_CLICK)
        {
          NMMOUSE*  pnmm={0};
          pnmm=(NMMOUSE*)lParam;
          ToolBar1Btn_Click(pnmm->dwItemSpec);
          return 0;
        }
      goto L1000;
    }
  if(Msg==WM_CTLCOLORBTN)
    {
      goto L1000;
    }
  if(Msg==WM_CTLCOLOREDIT)
    {
      goto L1000;
    }
  if(Msg==WM_CTLCOLORLISTBOX)
    {
      goto L1000;
    }
  if(Msg==WM_CTLCOLORSCROLLBAR)
    {
      goto L1000;
    }
  if(Msg==WM_CTLCOLORSTATIC)
    {
      goto L1000;
    }
  if(Msg==WM_PAINT)
    {
      goto L1000;
    }
  if(Msg==WM_SIZE)
    {
      SendMessage(ToolBar1,(UINT)TB_AUTOSIZE,(WPARAM)0,(LPARAM)0);
      goto L1000;
    }
  if(Msg==WM_MOVE)
    {
      goto L1000;
    }
  if(Msg==WM_CLOSE)
    {
      DestroyWindow(Form1);
      return 0;
    }
  if(Msg==WM_DESTROY)
    {
      PostQuitMessage(0);
      return 0;
    }
L1000:;
  if(Msg==WM_DESTROY)
    {
       PostQuitMessage(0);
       return 0;
    }
 return DefWindowProc(hWnd,Msg,wParam,lParam); // endevents
}


void ToolBar1_Setup ()
{
  SendMessage(ToolBar1,(UINT)WM_SETFONT,(WPARAM)GetStockObject(DEFAULT_GUI_FONT),(LPARAM)0);
  TBBUTTONINFO  tbbi={0};
  tbbi.cbSize=sizeof(TBBUTTONINFO);
  tbbi.dwMask=TBIF_STATE;
  tbbi.fsState=4;
  SendMessage(ToolBar1,(UINT)TB_SETBUTTONINFO,(WPARAM)2,(LPARAM) &tbbi);
  tbbi.fsState=4;
  SendMessage(ToolBar1,(UINT)TB_SETBUTTONINFO,(WPARAM)3,(LPARAM) &tbbi);
  tbbi.fsState=4;
  SendMessage(ToolBar1,(UINT)TB_SETBUTTONINFO,(WPARAM)4,(LPARAM) &tbbi);
  tbbi.fsState=4;
  SendMessage(ToolBar1,(UINT)TB_SETBUTTONINFO,(WPARAM)5,(LPARAM) &tbbi);
  tbbi.fsState=4;
  SendMessage(ToolBar1,(UINT)TB_SETBUTTONINFO,(WPARAM)6,(LPARAM) &tbbi);
}


void SetCbk (HWND hWnd)
{
  SetProp(hWnd,"Wprc",(HANDLE)SetWindowLong(hWnd,GWL_WNDPROC,(DWORD)ControlCbk));
}


LRESULT CALLBACK ControlCbk (HWND hWnd,UINT Msg,WPARAM  wParam,LPARAM  lParam)
{
  WNDPROC  OldProc={0};
  OldProc=(WNDPROC)GetProp(hWnd,(LPCSTR)"Wprc");
  if(Msg==WM_KEYDOWN)
    {
      goto L1002;
    }
  if(Msg==WM_KEYUP)
    {
      goto L1002;
    }
  if(Msg==WM_CHAR)
    {
      goto L1002;
    }
  if(Msg==WM_LBUTTONDOWN)
    {
      goto L1002;
    }
  if(Msg==WM_MOUSEMOVE)
    {
      goto L1002;
    }
  if(Msg==WM_LBUTTONUP)
    {
      goto L1002;
    }
  if(Msg==WM_LBUTTONDBLCLK)
    {
      goto L1002;
    }
  if(Msg==WM_RBUTTONDOWN)
    {
      goto L1002;
    }
  if(Msg==WM_RBUTTONUP)
    {
      goto L1002;
    }
  if(Msg==WM_RBUTTONDBLCLK)
    {
      goto L1002;
    }
  if(Msg==WM_DESTROY)
    {
      SetWindowLong(hWnd,GWL_WNDPROC,(DWORD)GetProp(hWnd,"Wprc"));
      RemoveProp(hWnd,"Wprc");
      return 0;
    }
L1002:;
  return CallWindowProc((WNDPROC)OldProc,hWnd,Msg,wParam,lParam);
}


void ToolBar1Btn_Click (DWORD BtnIndex)
{
  SetWindowText(Form1,join(2,"Click on ToolBar1 Button = ",str(BtnIndex)));
}


void Form1_MouseDown (int Button,int iKey,WORD  X,WORD  Y)
{
  if(Button==1)
    {
      SetWindowText(Form1,"Left Button Down on Form1");
    }
  if(Button==2)
    {
      SetWindowText(Form1,"Right Button Down on Form1");
    }
}


void Form1_MouseUp (int Button,int iKey,WORD  X,WORD  Y)
{
  if(Button==1)
    {
      SetWindowText(Form1,"Left Button Up on Form1");
    }
  if(Button==2)
    {
      SetWindowText(Form1,"Right Button Up on Form1");
    }
}


  // **********************************
  
  int WINAPI WinMain(HINSTANCE hInst,HINSTANCE hPrev,LPSTR CmdLine,int CmdShow)
{
   MSG  Msg;
   strcpy(BCX_ClassName,"EZIDEPROG");
   BCX_SetMetric("pixels");
   BCX_InitGUI();
   BCX_hInstance       =  hInst;
   BCX_WndClass.hIcon  =  LoadIcon(BCX_hInstance,MAKEINTRESOURCE(300));
   BCX_RegWnd( BCX_ClassName, WndProc);
  
   // ******************************************
                    FormLoad();
   // ******************************************
   while(GetMessage(&Msg,NULL,0,0))
     {
      HWND hActiveWindow = GetActiveWindow();
      if(!IsWindow(hActiveWindow) || !IsDialogMessage(hActiveWindow,&Msg))
        {
          TranslateMessage(&Msg);
          DispatchMessage(&Msg);
        }
      }
   return Msg.wParam;
  }
  
