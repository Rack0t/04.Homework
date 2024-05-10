#pragma once
#include "Painter.hpp"
#include "Point.hpp"
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
    const Color& getColor() const;
    void setColor(const Color& color);
    double radius;
    bool getIsCollidable() const;
    void setIsCollidable(bool isCollidable);


  private:
    Velocity velocity;
    Point center;
    Color color;
    bool isCollidable;
};
