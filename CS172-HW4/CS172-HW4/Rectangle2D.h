#pragma once

class Rectangle2D
{
private:
	double X;
	double Y;
	double Width;
	double Height;

public:
	// Construct defult rectangle
	Rectangle2D();
	// Construct specified rectangle
	Rectangle2D(double, double, double, double);

	// Getter and Setter for x & y
	void setX(double);
	double getX() const;
	void setY(double);
	double getY() const;

	// Getter and Setter for width & height
	void setWidth(double);
	double getWidth() const;
	void setHeight(double);
	double getHeight() const;

	// Return area of rectangle
	double getArea() const;
	// Return perimeter of rectangle
	double getPerimeter() const;

	// Check if specified point is in rectangle
	bool contains(double, double) const;
	// Check if specified rectangle is in rectangle
	bool contains(const Rectangle2D&) const;
	// Check if specified rectangle overlaps rectangle
	bool overlaps(const Rectangle2D&) const;
};