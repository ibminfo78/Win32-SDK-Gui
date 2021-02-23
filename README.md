# Win32 SDK Gui
Only简体中文,Sorry!

一、Win32 SDK C/C++ Gui高效程序之高效开发工具 V1.0。该VSCode配置"松散"Win32 C/C++ Gui库的Snippet，为高效率程序助攻(意大利面条🍝不用做得长长的，也可以做得体现出逻辑、类思想)！！！基于Windowsx.H宏或自编代码。免费分发，仅需前往。编辑器，还是VSCode牛逼。该代码主要适用于C++，C语言。该代码集合共30000＋行，VSCode Snippet最大可开到20000+行。目前涵盖Win32常见、常用基本类创建、函数、Setter/Getter、SubClassProc、SuperClassProc、AllMsgProc模版；并包含Win32主要、常用WM_消息；融合了MessageCrack的功能，并完善了其没有完成的部分函数；并包含了Gdi绘画典型、应用案例。如：

// //预先声明、定义WM_MOUSEMOVE Message for Window/Dialog/Ctrl:Form

// void Window_OnMouseMove(HWND hWnd, int x, int y, UINT nKeyFlags);

// //  Process WM_MOUSEMOVE Message for Window/Dialog/Ctrl:Form

// void Window_OnMouseMove(HWND hWnd, int x, int y, UINT nKeyFlags)

// {

//     // TODO: Add Message WM_MOUSEMOVE Processing Code Here...

//     return;

// }

Window_OnMouseMove(hWnd, (int)(short)LOWORD(lParam), (int)(short)HIWORD(lParam), (UINT)wParam);

高效程序还得是函数方式，再不济也得是Native Code的C++ Class，大国不能制造不出自己强有力的大型行业软件！！！Matlab是个典型...，抛开数据结构、算法，那就从Gui入手。除了Windows，Win32 SDK Gui C/C++代码可以通过Wine，运行到Unix/Linux（包括基于Linux的Android）。感觉很多人已忘记了C/C++的过往，沉溺于Java、.Net，醉心于某某框架，满汉全席不能由汉堡和什么黄油面包来充数...一个春节一行行码，昏天黑地整了那么久，眼睛弄花了，MLGB！哇咔咔...

二、CACG（C++ Abstract Class Generator）功能见附图。支持Class的Setter和Getter自动生成，支持自动去除变量前缀，支持自动辨认成员函数类型，处理基类、支持Win32 HWND、HFONT、HICON类型等功能。在规划、设计好类成员、方法函数后名后，可快速生成C++抽象类框架，让您把精力放在Class类的规划和设计上面。当然，也可改用到C++的struct结构构建上。(UML工具用着舒服的请略过...)

三、MinGW32 C/C++包含文件: 参数没有变量名称。对文件进行了Unix/Linux LF的CRLF格式化；利用程序将TDM-Gcc包含文件中的函数参数名称移过来，目前编译、调试没有遇到问题。 在VSCode或其他编辑器中，可以比较方便地使用，详见附图。

四、完成PB转C++程序，处于能用(未能实现类型自动强制转换)；目前还有一个基于VBA的VBA Form转Win32 C++应用，呈半拉子状态。

如果有用，如果可以，愉快接受您的资助和帮助，谢谢！ （让您受累了。新建文件夹功能在哪里？麻烦知道告诉我，找不到啊，WC。）

                                            C.F.(Code Farmer) Tool  (Win32 SDK RAD资深爱好者:IBMInfo78@126.com)    //爱中国!!!  
