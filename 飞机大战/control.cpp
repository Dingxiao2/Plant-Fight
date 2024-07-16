#include "control.h"
Control::Control()
{
	pw = new Widget;
	prole = new Role;
	penemy = new Enemy;
}
void Control::Draw()
{
	pw->Show();
	prole->DrawPlane();
	if (MyTimer::Timer(5000, 1))
	{
		penemy->CrteateEnemy();
	}
	penemy->DrawEnemy();
}

void Control::Move()
{
	prole->MovePlane(1);
	if (MyTimer::Timer(20, 2))
	{
		penemy->MoveEnemy(1);
	}
}
void Control::Play()
{
	
	
	//Åö×²


}
