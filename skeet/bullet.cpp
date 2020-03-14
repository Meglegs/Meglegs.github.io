#include "bullet.h"
#include <cmath>

#define BULLET_SPEED 10.0
Bullet::Bullet()
{
  
}

void Bullet::draw()
{
    Point point = getPoint();
    drawDot(point);
}

void Bullet::fire(Point point, float angle)
{
   // todo
  angle = 60.0; 
  float dx = BULLET_SPEED * (-cos(M_PI / 180.0 * angle));
  float dy = BULLET_SPEED * (sin(M_PI / 180.0 * angle));

 
}
