#pragma once
#ifndef CARD_H
#define CARD_H
#include "GameObject.h"
#include <string>
#include <iostream>

class Card : public GameObject {

public:
	int value;
	std::string path;
	Card(){}
	Card(string path) : GameObject(path, 0, 0) {
	}
	Card(string texturesheet, int x, int y, int value);
	// void setPath(std::string* _path);
	
	~Card();
	// GameObject* card;

};

#endif // CARD_H
/*#ifndef CARD_H
#define CARD_H

#include<iostream>
#include<string>
using namespace std;

class Card {
private:
    int suit;
    int face;
public:
    int value;
    bool chosen;
    Card(int =0, int = 0);
    void setFace(int);
	void setSuit(int);
	int getFace();
	int getSuit();
	static string test;
	static string faceString[14];
	static string suitString[5];
	string toString();
};

#endif
*/