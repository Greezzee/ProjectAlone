#ifndef VECTORS_H
#define VECTORS_H


template<typename T>
class StandartVector2
{
public:
    StandartVector2();
    StandartVector2(T new_x, T new_y) :
        x(new_x), y(new_y) { }

    T x, y;
};

class Vector2u : public StandartVector2<unsigned>
{
public:
    Vector2u();
    Vector2u(unsigned new_x, unsigned new_y) {}
};

#endif