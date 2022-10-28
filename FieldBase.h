#pragma once
class FieldBase {
public:
	FieldBase(){}
	virtual ~FieldBase() {}

	virtual void init(){}
	virtual void end(){}
	virtual void update(){}
	virtual void draw(){}

private:

};