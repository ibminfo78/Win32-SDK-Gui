#ifndef CFCONTROL_H
#define CFCONTROL_H

#include	<windows.h>
class	CFControl {
	private:
		bool	_Enabled;
		bool	_Visible;
		char*	_Tag;
		long	_MousePointer;
		long	_IDC;
		HWND	_hWndSelf;
		HWND	_hWndParent;
		char*	_ToolTip;
		bool	_ToolTipBalloon;
		long	_Style;
		long	_ExStyle;
		ControlAlign	_Align;
		//Comment : int _ParentWidth
		int	_ParentWidth;
		//Comment : int _ParentHeight
		int	_ParentHeight;
		bool	_AcceptFiles;
		HWND	_Parent;
		char*	_Name;
		int	FAnchoredLeft;
		int	FAnchoredTop;
		int	FAnchoredRight;
		int	FAnchoredBottom;
		int	FAnchoredParentWidth;
		int	FAnchoredParentHeight;
	protected:
		char*	FClassName;
		HFONT	FFont;
		HWND	FParent;
		HBRUSH	FBrush;
		HPEN	FPen;
		HCURSOR	FCursor;
		bool	FVisible;
		bool	FEnabled;
		bool	FIsChild;
		COLORREF	FBackColor;
		COLORREF	FForeColor;
		int	FLeft;
		int	FRight;
		int	FTop;
		int	FBottom;
		int	FHeight;
		int	FWidth;
		RECT	FBounds;
		int	FClientHeight;
		int	FClientWidth;
		RECT	FClientRect;
		ControlAlign	FAlign;
		bool	FShowHint;
		char*	FHint;
		long	FStyle;
		long	FExStyle;
		long	FBorderStyle;
		int	FStartPosition;
		char*	FText;
		long	FTextLen;
	public:
		HWND	m_hWnd;
	public:
		CFControl(int Param1);
	public:
		~CFControl();
		//Comment : Auto Generate Set_Enabled() Function.
	public:
		void	Set_Enabled(bool _SetNewValue);	//ToDo : Add your Set_Enabled() Codes.
		//Comment : Auto Generate Get_Enabled() Function.
		const	bool	Get_Enabled();	//ToDo : Add your Get_Enabled() Codes.
		//Comment : Auto Generate Set_Visible() Function.
		void	Set_Visible(bool _SetNewValue);	//ToDo : Add your Set_Visible() Codes.
		//Comment : Auto Generate Get_Visible() Function.
		const	bool	Get_Visible();	//ToDo : Add your Get_Visible() Codes.
		//Comment : Auto Generate Set_Tag() Function.
		void	Set_Tag(char* _SetNewValue);	//ToDo : Add your Set_Tag() Codes.
		//Comment : Auto Generate Get_Tag() Function.
		const	char*	Get_Tag();	//ToDo : Add your Get_Tag() Codes.
		//Comment : Auto Generate Set_MousePointer() Function.
		void	Set_MousePointer(long _SetNewValue);	//ToDo : Add your Set_MousePointer() Codes.
		//Comment : Auto Generate Get_MousePointer() Function.
		const	long	Get_MousePointer();	//ToDo : Add your Get_MousePointer() Codes.
		//Comment : Auto Generate Set_IDC() Function.
		void	Set_IDC(long _SetNewValue);	//ToDo : Add your Set_IDC() Codes.
		//Comment : Auto Generate Get_IDC() Function.
		const	long	Get_IDC();	//ToDo : Add your Get_IDC() Codes.
		//Comment : Auto Generate Set_hWndSelf() Function.
		void	Set_hWndSelf(HWND _SetNewValue);	//ToDo : Add your Set_hWndSelf() Codes.
		//Comment : Auto Generate Get_hWndSelf() Function.
		const	HWND	Get_hWndSelf();	//ToDo : Add your Get_hWndSelf() Codes.
		//Comment : Auto Generate Set_hWndParent() Function.
		void	Set_hWndParent(HWND _SetNewValue);	//ToDo : Add your Set_hWndParent() Codes.
		//Comment : Auto Generate Get_hWndParent() Function.
		const	HWND	Get_hWndParent();	//ToDo : Add your Get_hWndParent() Codes.
		//Comment : Auto Generate Set_ToolTip() Function.
		void	Set_ToolTip(char* _SetNewValue);	//ToDo : Add your Set_ToolTip() Codes.
		//Comment : Auto Generate Get_ToolTip() Function.
		const	char*	Get_ToolTip();	//ToDo : Add your Get_ToolTip() Codes.
		//Comment : Auto Generate Set_ToolTipBalloon() Function.
		void	Set_ToolTipBalloon(bool _SetNewValue);	//ToDo : Add your Set_ToolTipBalloon() Codes.
		//Comment : Auto Generate Get_ToolTipBalloon() Function.
		const	bool	Get_ToolTipBalloon();	//ToDo : Add your Get_ToolTipBalloon() Codes.
		//Comment : Auto Generate Set_Style() Function.
		void	Set_Style(long _SetNewValue);	//ToDo : Add your Set_Style() Codes.
		//Comment : Auto Generate Get_Style() Function.
		const	long	Get_Style();	//ToDo : Add your Get_Style() Codes.
		//Comment : Auto Generate Set_ExStyle() Function.
		void	Set_ExStyle(long _SetNewValue);	//ToDo : Add your Set_ExStyle() Codes.
		//Comment : Auto Generate Get_ExStyle() Function.
		const	long	Get_ExStyle();	//ToDo : Add your Get_ExStyle() Codes.
		//Comment : Auto Generate Set_Align() Function.
		void	Set_Align(ControlAlign _SetNewValue);	//ToDo : Add your Set_Align() Codes.
		//Comment : Auto Generate Get_Align() Function.
		const	ControlAlign	Get_Align();	//ToDo : Add your Get_Align() Codes.
		//Comment : Auto Generate Set_ParentWidth() Function.
		void	Set_ParentWidth(int _SetNewValue);	//ToDo : Add your Set_ParentWidth() Codes.
		//Comment : Auto Generate Get_ParentWidth() Function.
		const	int	Get_ParentWidth();	//ToDo : Add your Get_ParentWidth() Codes.
		//Comment : Auto Generate Set_ParentHeight() Function.
		void	Set_ParentHeight(int _SetNewValue);	//ToDo : Add your Set_ParentHeight() Codes.
		//Comment : Auto Generate Get_ParentHeight() Function.
		const	int	Get_ParentHeight();	//ToDo : Add your Get_ParentHeight() Codes.
		//Comment : Auto Generate Set_AcceptFiles() Function.
		void	Set_AcceptFiles(bool _SetNewValue);	//ToDo : Add your Set_AcceptFiles() Codes.
		//Comment : Auto Generate Get_AcceptFiles() Function.
		const	bool	Get_AcceptFiles();	//ToDo : Add your Get_AcceptFiles() Codes.
		//Comment : Auto Generate Set_Parent() Function.
		void	Set_Parent(HWND _SetNewValue);	//ToDo : Add your Set_Parent() Codes.
		//Comment : Auto Generate Get_Parent() Function.
		const	HWND	Get_Parent();	//ToDo : Add your Get_Parent() Codes.
		//Comment : Auto Generate Set_Name() Function.
		void	Set_Name(char* _SetNewValue);	//ToDo : Add your Set_Name() Codes.
		//Comment : Auto Generate Get_Name() Function.
		const	char*	Get_Name();	//ToDo : Add your Get_Name() Codes.
		//Comment : Auto Generate SetFClassName() Function.
		void	SetFClassName(char* _SetNewValue);	//ToDo : Add your SetFClassName() Codes.
		//Comment : Auto Generate GetFClassName() Function.
		const	char*	GetFClassName();	//ToDo : Add your GetFClassName() Codes.
		//Comment : Auto Generate SetFFont() Function.
		void	SetFFont(HFONT _SetNewValue);	//ToDo : Add your SetFFont() Codes.
		//Comment : Auto Generate GetFFont() Function.
		const	HFONT	GetFFont();	//ToDo : Add your GetFFont() Codes.
		//Comment : Auto Generate SetFParent() Function.
		void	SetFParent(HWND _SetNewValue);	//ToDo : Add your SetFParent() Codes.
		//Comment : Auto Generate GetFParent() Function.
		const	HWND	GetFParent();	//ToDo : Add your GetFParent() Codes.
		//Comment : Auto Generate SetFBrush() Function.
		void	SetFBrush(HBRUSH _SetNewValue);	//ToDo : Add your SetFBrush() Codes.
		//Comment : Auto Generate GetFBrush() Function.
		const	HBRUSH	GetFBrush();	//ToDo : Add your GetFBrush() Codes.
		//Comment : Auto Generate SetFPen() Function.
		void	SetFPen(HPEN _SetNewValue);	//ToDo : Add your SetFPen() Codes.
		//Comment : Auto Generate GetFPen() Function.
		const	HPEN	GetFPen();	//ToDo : Add your GetFPen() Codes.
		//Comment : Auto Generate SetFCursor() Function.
		void	SetFCursor(HCURSOR _SetNewValue);	//ToDo : Add your SetFCursor() Codes.
		//Comment : Auto Generate GetFCursor() Function.
		const	HCURSOR	GetFCursor();	//ToDo : Add your GetFCursor() Codes.
		//Comment : Auto Generate SetFVisible() Function.
		void	SetFVisible(bool _SetNewValue);	//ToDo : Add your SetFVisible() Codes.
		//Comment : Auto Generate GetFVisible() Function.
		const	bool	GetFVisible();	//ToDo : Add your GetFVisible() Codes.
		//Comment : Auto Generate SetFEnabled() Function.
		void	SetFEnabled(bool _SetNewValue);	//ToDo : Add your SetFEnabled() Codes.
		//Comment : Auto Generate GetFEnabled() Function.
		const	bool	GetFEnabled();	//ToDo : Add your GetFEnabled() Codes.
		//Comment : Auto Generate SetFIsChild() Function.
		void	SetFIsChild(bool _SetNewValue);	//ToDo : Add your SetFIsChild() Codes.
		//Comment : Auto Generate GetFIsChild() Function.
		const	bool	GetFIsChild();	//ToDo : Add your GetFIsChild() Codes.
		//Comment : Auto Generate SetFBackColor() Function.
		void	SetFBackColor(COLORREF _SetNewValue);	//ToDo : Add your SetFBackColor() Codes.
		//Comment : Auto Generate GetFBackColor() Function.
		const	COLORREF	GetFBackColor();	//ToDo : Add your GetFBackColor() Codes.
		//Comment : Auto Generate SetFForeColor() Function.
		void	SetFForeColor(COLORREF _SetNewValue);	//ToDo : Add your SetFForeColor() Codes.
		//Comment : Auto Generate GetFForeColor() Function.
		const	COLORREF	GetFForeColor();	//ToDo : Add your GetFForeColor() Codes.
		//Comment : Auto Generate SetFLeft() Function.
		void	SetFLeft(int _SetNewValue);	//ToDo : Add your SetFLeft() Codes.
		//Comment : Auto Generate GetFLeft() Function.
		const	int	GetFLeft();	//ToDo : Add your GetFLeft() Codes.
		//Comment : Auto Generate SetFRight() Function.
		void	SetFRight(int _SetNewValue);	//ToDo : Add your SetFRight() Codes.
		//Comment : Auto Generate GetFRight() Function.
		const	int	GetFRight();	//ToDo : Add your GetFRight() Codes.
		//Comment : Auto Generate SetFTop() Function.
		void	SetFTop(int _SetNewValue);	//ToDo : Add your SetFTop() Codes.
		//Comment : Auto Generate GetFTop() Function.
		const	int	GetFTop();	//ToDo : Add your GetFTop() Codes.
		//Comment : Auto Generate SetFBottom() Function.
		void	SetFBottom(int _SetNewValue);	//ToDo : Add your SetFBottom() Codes.
		//Comment : Auto Generate GetFBottom() Function.
		const	int	GetFBottom();	//ToDo : Add your GetFBottom() Codes.
		//Comment : Auto Generate SetFHeight() Function.
		void	SetFHeight(int _SetNewValue);	//ToDo : Add your SetFHeight() Codes.
		//Comment : Auto Generate GetFHeight() Function.
		const	int	GetFHeight();	//ToDo : Add your GetFHeight() Codes.
		//Comment : Auto Generate SetFWidth() Function.
		void	SetFWidth(int _SetNewValue);	//ToDo : Add your SetFWidth() Codes.
		//Comment : Auto Generate GetFWidth() Function.
		const	int	GetFWidth();	//ToDo : Add your GetFWidth() Codes.
		//Comment : Auto Generate SetFBounds() Function.
		void	SetFBounds(RECT _SetNewValue);	//ToDo : Add your SetFBounds() Codes.
		//Comment : Auto Generate GetFBounds() Function.
		const	RECT	GetFBounds();	//ToDo : Add your GetFBounds() Codes.
		//Comment : Auto Generate SetFClientHeight() Function.
		void	SetFClientHeight(int _SetNewValue);	//ToDo : Add your SetFClientHeight() Codes.
		//Comment : Auto Generate GetFClientHeight() Function.
		const	int	GetFClientHeight();	//ToDo : Add your GetFClientHeight() Codes.
		//Comment : Auto Generate SetFClientWidth() Function.
		void	SetFClientWidth(int _SetNewValue);	//ToDo : Add your SetFClientWidth() Codes.
		//Comment : Auto Generate GetFClientWidth() Function.
		const	int	GetFClientWidth();	//ToDo : Add your GetFClientWidth() Codes.
		//Comment : Auto Generate SetFClientRect() Function.
		void	SetFClientRect(RECT _SetNewValue);	//ToDo : Add your SetFClientRect() Codes.
		//Comment : Auto Generate GetFClientRect() Function.
		const	RECT	GetFClientRect();	//ToDo : Add your GetFClientRect() Codes.
		//Comment : Auto Generate SetFAlign() Function.
		void	SetFAlign(ControlAlign _SetNewValue);	//ToDo : Add your SetFAlign() Codes.
		//Comment : Auto Generate GetFAlign() Function.
		const	ControlAlign	GetFAlign();	//ToDo : Add your GetFAlign() Codes.
		//Comment : Auto Generate SetFShowHint() Function.
		void	SetFShowHint(bool _SetNewValue);	//ToDo : Add your SetFShowHint() Codes.
		//Comment : Auto Generate GetFShowHint() Function.
		const	bool	GetFShowHint();	//ToDo : Add your GetFShowHint() Codes.
		//Comment : Auto Generate SetFHint() Function.
		void	SetFHint(char* _SetNewValue);	//ToDo : Add your SetFHint() Codes.
		//Comment : Auto Generate GetFHint() Function.
		const	char*	GetFHint();	//ToDo : Add your GetFHint() Codes.
		//Comment : Auto Generate SetFStyle() Function.
		void	SetFStyle(long _SetNewValue);	//ToDo : Add your SetFStyle() Codes.
		//Comment : Auto Generate GetFStyle() Function.
		const	long	GetFStyle();	//ToDo : Add your GetFStyle() Codes.
		//Comment : Auto Generate SetFExStyle() Function.
		void	SetFExStyle(long _SetNewValue);	//ToDo : Add your SetFExStyle() Codes.
		//Comment : Auto Generate GetFExStyle() Function.
		const	long	GetFExStyle();	//ToDo : Add your GetFExStyle() Codes.
		//Comment : Auto Generate SetFBorderStyle() Function.
		void	SetFBorderStyle(long _SetNewValue);	//ToDo : Add your SetFBorderStyle() Codes.
		//Comment : Auto Generate GetFBorderStyle() Function.
		const	long	GetFBorderStyle();	//ToDo : Add your GetFBorderStyle() Codes.
		//Comment : Auto Generate SetFStartPosition() Function.
		void	SetFStartPosition(int _SetNewValue);	//ToDo : Add your SetFStartPosition() Codes.
		//Comment : Auto Generate GetFStartPosition() Function.
		const	int	GetFStartPosition();	//ToDo : Add your GetFStartPosition() Codes.
		//Comment : Auto Generate SetFText() Function.
		void	SetFText(char* _SetNewValue);	//ToDo : Add your SetFText() Codes.
		//Comment : Auto Generate GetFText() Function.
		const	char*	GetFText();	//ToDo : Add your GetFText() Codes.
		//Comment : Auto Generate SetFTextLen() Function.
		void	SetFTextLen(long _SetNewValue);	//ToDo : Add your SetFTextLen() Codes.
		//Comment : Auto Generate GetFTextLen() Function.
		const	long	GetFTextLen();	//ToDo : Add your GetFTextLen() Codes.
		void	Move(long nLeft, long nTop, long nWidth = 0, long nHeight = 0);
		void	Kill();
		void	Free();
		void	WndOrderZ(HWND hWndlnsertAfter);
		void	ReFresh();
		void	BringToFront();
		void	SendToBack();
		void	SetFocus();
		void	GetFocus();
		void	RePaint();
		void	InValidate();
		void	Update();
		void	Hide();
		void	Show();
		bool	IsFocused();
		char*	ToString();
		void	FlashWindow();
		void	ScrollWindow();
		void	SubclassWindow();
		void	ReDrawWindow();
		void	SetTransparent();
		LRESULT	SendMessage();
		//Comment : ???????
		void	DoEvents();
		//Comment : public bool Contains (System.Windows.Forms.Control ctl);
		void	Contains();
		//Comment : public System.Windows.Forms.Form FindForm ();
		void	FindForm();

};
#endif

