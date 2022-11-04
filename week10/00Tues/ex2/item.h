#pragma once
#include <stdbool.h>

//declaration/definition of "item"

// PROG71985F22 - Nov 2022 - Professor SteveH

// revision history
//      1.0      2020-Jun-28          initial
//      1.1      2021-Jun-24          reviewed and updated
//      1.2     2022-May-20         reviewed
//
typedef struct item
{
	int data;
}ITEM, * PITEM;

ITEM CreateItem(int);

ITEM CopyItem(ITEM);

bool CompareItems(ITEM, ITEM);

void DisplayItem(ITEM);

void DisposeItem(ITEM);
