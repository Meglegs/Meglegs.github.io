#ifndef BIRD_H
#define BIRD_H

#include "point.h"
#include "uiDraw.h"
#include "flyingObject.h"

class Bird : public FlyingObject
{
public:
 
  Bird();
  virtual void draw();
  virtual int hit();
  void setHits(int hits);
  int getHits();
private:
   int hits;
};

class ScaredBird : public Bird
{
 public:

   ScaredBird();
   virtual void draw();
};

class StandardBird : public Bird
{
 public:
  StandardBird();

  virtual void draw();

};

class ToughBird : public Bird
{
 public:
  ToughBird();

  virtual void draw();

};
#endif 

