#pragma once

//information about a detected object
struct objectInfo {
	int x;
	int y;
	int pixelcount; //how many pixels are in the blob
};

struct drivingState {
	float speed;
	float angle;
	float angularVelocity;
};

struct objectCollection {
	int count;
	objectInfo *data;
	int size; //how many objects the data buffer can hold
};

struct lineInfo {
	int radius;
	float angle;
	int pixelcount; //how many pixels are in the blob
};

struct lineCollection {
	int count;
	lineInfo *data;
	int size; //how many objects the data buffer can hold
};

void doubleObjectBufferSize(objectCollection*);
//void doubleLineBufferSize(lineCollection*);