#include "widget.h"
#include "res.h"
Widget::Widget()
{
	initgraph(WIDTH, HEIGHT);
}

void Widget::Show()
{
	Res::DrawIMG(0, 0, "±³¾°");
}

Widget::~Widget()
{
	closegraph();
}
