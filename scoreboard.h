#pragma once
#include <string>
#include "allStruct.h"

using namespace std;
void exportStudent(Course* curCourse, string path);
void updateScoreboard(Course* curCourse);
void importScoreboard(Course*& curCourse, string path);
void readScoreboard(Course*& curCourse);