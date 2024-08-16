// Programs for testing its properties.
#include <stdio.h>
#include <stdbool.h>

bool is_reflexive(int *set, size_t setlen, int relation[][2], size_t nrow);
bool in_cmp(int *elem, int array[][2], size_t arrlen);
bool is_symmetric(int relation[][2], size_t length);
bool is_asymmetric(int relation[][2], size_t length);
bool is_antisymmetric(int relation[][2], size_t length);

int main(void)
{
	int set[] = {1, 2, 3};
	int rel1[][2] = {{1, 1}, {1, 2}, {2, 2}, {2, 3}, {3, 3}, {3, 1}};
	int rel2[][2] = {{1, 2}, {2, 1}, {2, 3}, {3, 2}};
	size_t size = 5;

	int reflexive = is_reflexive(set, (size_t)3, rel1, size);
	int symmetric = is_symmetric(rel2, size);
	int asymmetric = is_asymmetric(rel2, size);
	int antisymmetric = is_antisymmetric(rel2, size);

	printf("Reflexive: %d\nSymmetric: %d\nAntisymmetric: %d\nAsymmetric: %d", reflexive, symmetric, antisymmetric, asymmetric);

	return 0;
}

bool is_reflexive(int *set, size_t setlen, int relation[][2], size_t nrow)
{
	size_t counter_flag = 0;
	for (size_t i = 0; i < setlen; i++)
	{
		for (size_t j = 0; j < nrow; j++)
		{
			if (relation[j][0] == set[i] && relation[j][1] == set[i])
			{
				counter_flag++;
				break;
			}
		}
	}
	return counter_flag == setlen;
}

bool in_cmp(int *elem, int array[][2], size_t arrlen)
{
	for (size_t i = 0; i < arrlen; i++)
	{
		if (elem[0] == array[i][1] && elem[1] == array[i][0])
			return true;
	}
	return false;
}

bool is_symmetric(int relation[][2], size_t length)
{
	int *temp = NULL;
	for (size_t i = 0; i < length; i++)
	{
		temp = relation[i];

		if (!in_cmp(temp, relation, length))
			return false;
	}
	return true;
}

bool is_asymmetric(int relation[][2], size_t length)
{
	int *temp = NULL;
	for (size_t i = 0; i < length; i++)
	{
		temp = relation[i];

		if (in_cmp(temp, relation, length))
			return false;
	}
	return true;
}

bool is_antisymmetric(int relation[][2], size_t length)
{
	if (is_asymmetric(relation, length))
	{
		for (size_t i = 0; i < length; i++)
		{
			if (relation[i][0] == relation[i][1])
				return false;
		}
	}
	else
	{
		return false;
	}
	return true;
}