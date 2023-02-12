#pragma once
#include <iostream>
#include <vector>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <queue>

#ifdef COMMON_EXPORTS
#define COMMON __declspec(dllexport)
#else                                                                            
#define COMMON _declspec(dllimport)
#endif


using namespace std;

COMMON void showVector(vector<int>& v);
