# Vector2d
A 2d Vector class for C++
<br>
## Creating a vector
```
Vector2d vector0 {}; // (0, 0)
Vector2d vectorA { 3, 4 }; // (3, 4)
Vector2d vectorB { vectorA }; // (3, 4)
vectorB = { 1, 2 }; // (1, 2)
```

## Basic math
```
Vector2d added { vectorA + vectorB }; // (4, 6)
Vector2d subtracted { -vectorA - vectorB }; // (-4, -6)
Vector2d multiplied { 2 * vectorA * vectorB }; // (6, 16)
Vector2d divided { 3 / (vectorA / vectorB }; // (1, 1.5)
```

## Vector math
```
double dot = vectorA.dot(vectorB); // 11
double cross = vectorA.cross(vectorB); // 2
double length = vectorA.length(); // 5
Vector2d normal = vectorA.normal(); // (4, -3)
Vector2d normalized = vectorA.normalized(); // (0.6, 0.8)
```

## Printing vectors
```
std::cout << vectorA << '\n';
std::cout << vectorB.toString() << '\n';
```
