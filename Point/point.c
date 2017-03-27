/*
 * point.c
 *
 *  Created on: Mar 27, 2017
 *      Author: leschnitzky
 */
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
typedef struct point* Point;

struct point{
	int x;
	int y;
};

Point createPoint(int x,int y){
	Point p = malloc(sizeof(p*));
	if(!p){
	return NULL;
	}
	p->x = x;
	p->y = y;
	return p;
}
int pointGetX(Point p){
	if(!p){
		return -1;
	}
	return p->x;
}
int pointGetY(Point p){
	if(!p){
		return -1;
	}
	return p->y;
}

void printPoint(Point p){
	if(!p){
		printf("NULL Point");
	}
	printf("The point is: (%d,%d)",p->x,p->y);
}

int main(){
	Point p = createPoint(2,3);
	printPoint(p);
}



