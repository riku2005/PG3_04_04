#include <stdio.h>

class IShape
{
public:
	virtual void Size() = 0;
	virtual void Draw() = 0;

protected:
	float size;
	float radius;
};

class Circle :public IShape
{
public:
	void Size();
	void Draw() { printf("–ÊÏ %f\n", size); };
};

class Rectangle :public IShape
{
public:
	void Size() override;
	void Draw() { printf("–ÊÏ %f\n", size); };
};

void IShape::Size() {}

void Circle::Size()
{
	radius = 5.0f;
	printf("‰~‚Ì”¼Œa %f\n", radius);
	size = radius * radius * 3.14f;
}


void Rectangle::Size()
{
	radius = 5.0f;
	printf("‹éŒ`‚Ì”¼Œa %f\n", radius);
	size = radius * 2.0f * radius * 2.0f;
}

int main(void) {

	IShape *ishape[2] = { new Circle ,new Rectangle };

	ishape[0]->Size();
	ishape[1]->Size();

	ishape[0]->Draw();
	ishape[1]->Draw();

	delete ishape[0];
	delete ishape[1];

	return 0;
}