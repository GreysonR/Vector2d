#ifndef VECTOR2D
#define VECTOR2D

#include <string>

class Vector2d {
	public:
		double x {};
		double y {};

		Vector2d(double x = 0.0, double y = 0.0);
		Vector2d(Vector2d& vectorB);
		double length() const;
		Vector2d& set(const Vector2d& vectorB);

		Vector2d& add(const Vector2d& vectorB);
		Vector2d& sub(const Vector2d& vectorB);
		Vector2d& mult(const Vector2d& vectorB);
		Vector2d& mult(const double scalar);
		Vector2d& div(const Vector2d& vectorB);
		Vector2d& div(const double scalar);

		Vector2d& normal();
		Vector2d& normalize();
		double dot(Vector2d& vectorB) const;
		double cross(Vector2d& vectorB) const;

		std::string toString() const;
		void print() const;
		friend std::ostream& operator<<(std::ostream& out, const Vector2d& vector);
};

#endif
