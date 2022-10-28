#include "TopRightOfField.h"
#include "DxLib.h"
#include "game.h"

TopRightOfField::TopRightOfField() {

}
TopRightOfField::~TopRightOfField() {

}

void TopRightOfField::init() {

}

void TopRightOfField::end() {

}

void TopRightOfField::update() {

}

void TopRightOfField::draw() {
	DrawLine(0, Game::kScreenHeight / 3 * 2, Game::kScreenWidth - 150, Game::kScreenHeight / 3 * 2, GetColor(255, 255, 255));
	DrawLine(1130, 0, 1130, Game::kScreenHeight / 3 * 2, GetColor(255, 255, 255));
	DrawLine(Game::kScreenWidth, Game::kScreenHeight, 1130, Game::kScreenHeight / 3 * 2, GetColor(255, 255, 255));

}