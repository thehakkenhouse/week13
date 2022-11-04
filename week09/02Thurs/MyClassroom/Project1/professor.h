#pragma once

#include <stdbool.h>

#define MAXSIZE	25

typedef struct professor {
	char name[MAXSIZE];
	char dept[MAXSIZE];
} PROFESSOR;


PROFESSOR CreateProfessor(char*, char*);

char* GetNameFromProfessor(PROFESSOR);
bool GetNameFromProfessorWithReturn(PROFESSOR, char*);

void PrintProfessor(PROFESSOR);