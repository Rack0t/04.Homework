#include "Ball.hpp"
#include <cmath>

#define PI 3.1415926535

/**
 * Задает скорость объекта
 * @param velocity новое значение скорости
 */
void Ball::setVelocity(const Velocity& velocity) {
    // TODO: место для доработки
    vx = velocity.vector().x;
    vy = velocity.vector().y;
}

/**
 * @return скорость объекта
 */
Velocity Ball::getVelocity() const {
    // TODO: место для доработки
    return {Point(vx,vy)};
}

/**
 * @brief Выполняет отрисовку объекта
 * @details объект Ball абстрагирован от конкретного
 * способа отображения пикселей на экране. Он "знаком"
 * лишь с интерфейсом, который предоставляет Painter
 * Рисование выполняется путем вызова painter.draw(...)
 * @param painter контекст отрисовки
 */
void Ball::draw(Painter& painter) const {
    // TODO: место для доработки
    painter.draw(getCenter(), getRadius(), getColor());

}

/**
 * Задает координаты центра объекта
 * @param center новый центр объекта
 */
void Ball::setCenter(const Point& center) {
    // TODO: место для доработки
    x = center.x;
    y = center.y;
}

/**
 * @return центр объекта
 */
Point Ball::getCenter() const {
    // TODO: место для доработки
    return {x, y};
}

/**
 * @brief Возвращает радиус объекта
 * @details обратите внимание, что метод setRadius()
 * не требуется
 */
double Ball::getRadius() const {
    // TODO: место для доработки
    return radius;
}

/**
 * @brief Возвращает массу объекта
 * @details В нашем приложении считаем, что все шары
 * состоят из одинакового материала с фиксированной
 * плотностью. В этом случае масса в условных единицах
 * эквивалентна объему: PI * radius^3 * 4. / 3.
 */
double Ball::getMass() const {
    // TODO: место для доработки
    return PI * 4 * pow(getRadius(), 3) / 3;
    //return {};
}
void Ball::setColor(const Color& color) {
    r = color.red();
    g = color.green();
    b = color.blue();
}
Color Ball::getColor() const {
    return {r, g, b};
}

bool Ball::getIsCollidable() const {
    return isCollidable;
}
void Ball::setIsCollidable(bool isCollidable) {
    Ball::isCollidable = isCollidable;
}
