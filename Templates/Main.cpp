#include <iostream>

/*
Min
DESCRIPTION: Returns the lower of two values.
INPUT: Two template arguments (a, b).
OUTPUT: The lower of the two values a and b.
*/

template <typename T>
T min(T a, T b)
{
	if (a < b)
	{
		return a;
	}

	if (b < a)
	{
		return b;
	}
}

/*
Max
DESCRIPTION: Returns the higher of two values.
INPUT: Two template arguments (a, b).
OUTPUT: The higher of the two values a and b.
*/

template <typename Z>
Z max(Z a, Z b)
{
	if (a > b)
	{
		return a;
	}

	if (b > a)
	{
		return b;
	}
}

/*
Clamp
DESCRIPTION: Constrains a value within the range of two other values.
INPUT: Three template arguments (min, max, val).
OUTPUT: The value of the val constrained between min and max.
*/

template <typename X>
X clamp(X min, X max, X val)
{
	if (max > val && val > min)
	{
		return val;
	}

	if (val < min)
	{
		return min;
	}

	if (val > min)
	{
		return max;
	}
}

int main()
{
	int minimumInt = min(100, 50);
	float minimumFloat = min(5.0f, 2.0f);
	char minimumChar = min('Z', 'T');

	int maximumInt = max(100, 50);
	float maximumFloat = max(5.0f, 2.0f);
	char maximumChar = max('Z', 'T');

	int clampInt = clamp(0, 10, 5);
	float clampFloat = clamp(0.0f, 10.0f, 5.5f);
	char clampChar = clamp('H', 'Z', 'T');

	return 0;
}