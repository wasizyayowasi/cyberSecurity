#include "TopLeftOfField.h"
#include "DxLib.h"
#include "game.h"

TopLeftOfField::TopLeftOfField() {

}
TopLeftOfField::~TopLeftOfField() {

}

void TopLeftOfField::init() {

}
void TopLeftOfField::end() {

}
void TopLeftOfField::update() {

}
void TopLeftOfField::draw() {
	DrawLine(150, Game::kScreenHeight / 3 * 2, Game::kScreenWidth, Game::kScreenHeight / 3 * 2, GetColor(255, 255, 255));
	DrawLine(150, 0, 150, Game::kScreenHeight / 3 * 2, GetColor(255, 255, 255));
	DrawLine(0, Game::kScreenHeight, 150, Game::kScreenHeight / 3 * 2, GetColor(255, 255, 255));

}