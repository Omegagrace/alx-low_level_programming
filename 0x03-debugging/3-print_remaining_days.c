#include "main.h"

/**
 * print_remaining_day - picks a date
 * and prints how many is left
 * @month: month in number format
 * @day: day of month
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
