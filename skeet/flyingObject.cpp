//#include "point.h"
//#include "velocity.h"
#include "flyingObject.h"

FlyingObject::FlyingObject()
{
 
}

Point FlyingObject::getPoint()
{
  return point;
}

Velocity FlyingObject::getVelocity()
{
  return velocity;
}

void FlyingObject::setPoint(Point point)
{
  this->point = point;
}

void FlyingObject::setVelocity(Velocity velocity)
{
  this->velocity = velocity;
}

bool FlyingObject::isAlive()
{
  return alive;
}

void FlyingObject::kill()
{
  alive = false;
}

void FlyingObject::advance()
{
  point.setX(point.getX()+ velocity.getDx());
  point.setY(point.getY()+ velocity.getDy());
}

