#pragma once
#include "FieldBase.h"

class TopRightOfField : public FieldBase {
public:
	TopRightOfField();
	~TopRightOfField();

	void init();
	void end();
	void update();
	void draw();

private:

};