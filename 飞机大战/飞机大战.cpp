#include "control.h"
int main() 
{
	//��ײ��Ҫд������
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