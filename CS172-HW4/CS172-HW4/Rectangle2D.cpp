#include "Rectangle2D.h"

Rectangle2D::Rectangle2D()
{
	X = 0;
	Y = 0;
	Width = 1;
	Height = 1;
}

Rectangle2D::Rectangle2D(double x, double y, double w, double h)
{
	X = x;
	Y = y;
	Width = w;
	Height = h;
}

void Rectangle2D::setX(double x)
{
	X = x;
}

double Rectangle2D::getX() const
{
	return X;
}

void Rectangle2D::setY(double y)
{
	Y = y;
}

double Rectangle2D::getY() const
{
	return Y;
}

void Rectangle2D::setWidth(double w) 
{
	Width = w;
}

double Rectangle2D::getWidth() const
{
	return Width;
}

void Rectangle2D::setHeight(double h)
{
	Height = h;
}

double Rectangle2D::getHeight() const
{
	return Height;
}

double Rectangle2D::getArea() const
{
	return Width * Height;
}

double Rectangle2D::getPerimeter() const
{
	return 2 * Width + 2 * Height;
}

bool Rectangle2D::contains(double x, double y) const
{
	// Check if the point (x, y) is within the bounds of x = X ± Width and y = Y ± Height
	if (x <= X + .5 * Width && x >= X - .5 * Width && y <= Y + .5 * Height && y >= Y - .5 * Height)
		return true;
	else 
		return false;
}

bool Rectangle2D::contains(const Rectangle2D &r) const
{
	if (r.getX() + .5 * r.getWidth() <= getX() + Width && r.getX() - .5 * r.getWidth() >= X - .5 * Width && r.getY() + .5 * r.getHeight() <= getY() + Height && r.getY() - .5 * r.getHeight() >= Y - .5 * Height)
		return true;
	else
		return false;
}

bool Rectangle2D::overlaps(const Rectangle2D &r) const
{
	
}