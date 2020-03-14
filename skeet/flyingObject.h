#ifndef FLYINGOBJECT_H
#define FLYINGOBJECT_H

#include <iostream>
#include "point.h"
#include "velocity.h"

class FlyingObject
{
 public:
    FlyingObject();
    Point getPoint();
    Velocity getVelocity();
    void setPoint(Point point);
    void setVelocity(Velocity velocity);
    bool isAlive();
    void kill();
    void advance();
  
private:
    Point point;
    Velocity velocity;
    bool alive;
};


#endif 
