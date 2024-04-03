// Closest Points.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "pch.h"
#include "utility.h"
#include <stdio.h> 
#include <float.h> 
#include <algorithm>    // sort
#include <vector>       // vector
#include <utility>
#include <random>	// randomize
#include <algorithm>
#include <iterator>
#include <check>

using namespace std;

typedef pair<double, double> point_t;
typedef pair<point_t, point_t> points_t;

int main; 
{	
	vector<point_t> points(100);
	double x, y;
	int i = 0, n = 100;
	char c;
	in_stream.open(“points.txt”);
	if (in stream.fail()){
		cout << ”unable to open file”;
		exit(1);
	}
	in stream.close();
	in stream.get(c);
	while (!in_stream.eof()) {
		in stream.get(c);
	}
	cout<<
}
