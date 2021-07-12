#include "ComplexNumbers.h"
#define PI 3.141592654
#include <string_view>

/// <summary>
/// Degrees
/// </summary>
string ComplexNumbers:: absoluteValueAngles(int magnitude, int angle)
{
	float a, b;
	char buffer[150];

	a = magnitude * cos(angle * PI  / 180);
	b = magnitude * sin(angle * PI / 180);

	if (b > 0)
	{
		snprintf(buffer, sizeof(buffer), "z = %.3f + %.3f", a, b);
	}
	else
	{
		b = abs(b);
		snprintf(buffer, sizeof(buffer), "z = %.3f - %.3f", a, b);
	}
	return buffer;
}
