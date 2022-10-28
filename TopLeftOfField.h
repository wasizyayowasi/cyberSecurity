#pragma once
#include "FieldBase.h"

class TopLeftOfField : public FieldBase {
public:
	TopLeftOfField();
	~TopLeftOfField();

	void init();
	void end();
	void update();
	void draw();

private:

};