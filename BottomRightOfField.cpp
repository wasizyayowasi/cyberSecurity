#include "BottomRightOfField.h"
#include "DxLib.h"
#include "game.h"

BottomRightOfField::BottomRightOfField() {

}
BottomRightOfField::~BottomRightOfField() {

}

void BottomRightOfField::init() {

}
void BottomRightOfField::end() {

}
void BottomRightOfField::update() {

}
void BottomRightOfField::draw() {
	DrawLine(150, Game::kScreenHeight / 3 * 2, Game::kScreenWidth, Game::kScreenHeight / 3 * 2, GetColor(255, 255, 255));
	DrawLine(150, 0, 150, Game::kScreenHeight / 3 * 2, GetColor(255, 255, 255));
	DrawLine(0, Game::kScreenHeight, 150, Game::kScreenHeight / 3 * 2, GetColor(255, 255, 255));

}