#pragma once
#include "Painter.hpp"
#include "Point.hpp"
#include "Color.hpp"
#include "Velocity.hpp"

class Ball {
  public:
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;
    void setColor(const Color& color);
    Color getColor() const;
    double radius;
    bool getIsCollidable() const;
    void setIsCollidable(bool isCollidable);

  private:
    double x;
    double y;
    double vx;
    double vy;
    double r;
    double g;
    double b;
    bool isCollidable;

};
