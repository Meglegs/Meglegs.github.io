#ifndef BULLET_H
#define BULLET_H


#include "point.h"
#include "uiDraw.h"
#include "flyingObject.h"

class Bullet : public FlyingObject
{
  public:
    Bullet();
    Bullet(Point point);
    void draw();
    void fire(Point point, float angle);
    // int hit();
 private:
    float angle;
    
};

#endif 
