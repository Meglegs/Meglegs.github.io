#include "bird.h"

Bird::Bird()
{
  setPoint(Point(-200,random(-200,200)));
  velocity.setDx(velocity.getDx() + 0.5);
  alive = true;
}

int Bird::hit()
{
  this->hits -= 1;
}

void Bird::setHits(int hits)
{
  this->hits = hits;
}

int Bird::getHits()
{
   return hits;
}

//------------------------------------------------------------------------------
// ScaredBird Methods!
//------------------------------------------------------------------------------
/*
ScaredBird::ScaredBird()
{
  setHits(1);
}

ScaredBird::ScaredBird(Point point)
{
  // TODO
}
*/
void ScaredBird::draw()
{
  Point point = getPoint();
  drawSacredBird(point, 10);
}

//------------------------------------------------------------------------------
// StandardBird Methods!
//------------------------------------------------------------------------------
StandardBird::StandardBird()
{
  setHits(1);
}
/*
StandardBird::StandardBird(Point point)
{
   
}
*/
void StandardBird::draw()
{
  Point point = getPoint();
  drawCircle(point, 10);
}

//------------------------------------------------------------------------------
// ToughBird Methods!
//------------------------------------------------------------------------------
ToughBird::ToughBird()
{
  

}
/*
ToughBird::ToughBird(Point point)
{
 
}
*/
void ToughBird::draw()
{
  Point p = getPoint();
  drawToughBird(p, 10, getHits());
}
