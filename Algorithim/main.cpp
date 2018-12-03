#include <cstdlib>
#include <time.h>

struct Player
{
	bool operator > (const Player&);
	int m_Health = rand() % 100 + 1;
};

bool Player::operator > (const Player& otherPlayer)
{
	return otherPlayer.m_Health > this->m_Health;
}

void Largest2Smallest(Player arr[], int size)
{
	Player temp;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				continue;
			}
			else
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
	srand(time(NULL));

	Player P1;
	Player P2;
	Player P3;
	Player P4;
	Player P5;

	Player myArray[5] = { P1, P2, P3, P4, P5 };

	Largest2Smallest(myArray, 5);

	return 0;
}