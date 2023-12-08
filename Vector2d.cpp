#include <iostream>
#include <cmath>
#include "Vector2d.h"
#include <string>

Vector2d::Vector2d(double x, double y) {
	this->x = x;
	this->y = y;
}
Vector2d::Vector2d(Vector2d& vectorB) {
	this->x = vectorB.x;
	this->y = vectorB.y;
}
double Vector2d::length() const {
	return sqrt(this->x * this->x + this->y * this->y);
}
Vector2d& Vector2d::set(const Vector2d& vectorB) {
	this->x = vectorB.x;
	this->y = vectorB.y;
	return *this;
}

Vector2d& Vector2d::add(const Vector2d& vectorB) {
	this->x += vectorB.x;
	this->y += vectorB.y;
	return *this;
}
Vector2d& Vector2d::sub(const Vector2d& vectorB) {
	this->x -= vectorB.x;
	this->y -= vectorB.y;
	return *this;
}
Vector2d& Vector2d::mult(const Vector2d& vectorB) {
	this->x *= vectorB.x;
	this->y *= vectorB.y;
	return *this;
}
Vector2d& Vector2d::mult(const double scalar) {
	this->x *= scalar;
	this->y *= scalar;
	return *this;
}
Vector2d& Vector2d::div(const Vector2d& vectorB) {
	this->x /= vectorB.x;
	this->y /= vectorB.y;
	return *this;
}
Vector2d& Vector2d::div(const double scalar) {
	this->x /= scalar;
	this->y /= scalar;
	return *this;
}

Vector2d& Vector2d::normal() {
	std::swap(this->x, this->y);
	this->y = -this->y;
	return *this;
}
Vector2d& Vector2d::normalize() {
	double length = this->length();
	if (length != 0) {
		this->x /= length;
		this->y /= length;
	}
	return *this;
}
double Vector2d::dot(Vector2d& vectorB) const {
	return this->x * vectorB.x + this->y * vectorB.y;
}
double Vector2d::cross(Vector2d& vectorB) const {
	return this->x * vectorB.y - this->y * vectorB.x;
}

std::string Vector2d::toString() const {
	return "(" + std::to_string(this->x) + ", " + std::to_string(this->y) + ")";
}
void Vector2d::print() const {
	std::cout << "(" << this->x << ", " << this->y << ")\n";
}

std::ostream& operator<<(std::ostream& out, const Vector2d& vector) {
	out << vector.toString();
	return out;
}
