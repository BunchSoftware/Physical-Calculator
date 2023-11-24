#ifndef PHYSICAL_LIBRARY_H
#define PHYSICAL_LIBRARY_H


class Physics
{
public:
    Physics();
    float gravity = 9.81f;
    float Force(float mass, float options);
    float SecondLawNewton(float mass, float acceleration);
};

#endif // PHYSICAL_LIBRARY_H
