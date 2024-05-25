#include "BrickWall.hpp"

BrickWall::BrickWall()
{
    _type = "Inconspicuous Red-brick Wall";
}

BrickWall::~BrickWall()
{
}

const ATarget *BrickWall::clone()
{
    return (new BrickWall());
}