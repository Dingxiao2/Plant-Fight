#include "control.h"
int main() 
{
	//碰撞不要写在这里
	srand((unsigned int)time(nullptr));
	Control* pc = new Control;
	BeginBatchDraw();
	while (1)
	{
		pc->Draw();
		pc->Move();
		pc->Play();
		FlushBatchDraw();
	}
	EndBatchDraw();
	return 0;
}