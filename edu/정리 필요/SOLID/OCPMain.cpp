/*************************************************************
O(Open-closed Principle, OCP, 개방-폐쇄원칙)
- 클래스, 함수, 모듈 등은 확장에는 열려있고, 변경에는 닫혀 있어야 한다는 것
- 기존 코드를 변경하지 않으면서 시스템의 기능을 확장할 수 있어야 한다는 것을 의미
- 새로운 기능을 추가하거나 변경사항이 있을 때, 기존 코드에 영향을 주지 않고 충족시킬 수 있음->추상화


*************************************************************/

#include<vector>
enum class ShapeType {
	Circle, Rectangle
};
#pragma region 적용전
//class Shape {
//private:
//	ShapeType type;
//	double radius;
//	double width, height;
//public:
//	Shape(ShapeType t, double r = 0.0, double w = 0.0, double h = 0.0)
//		:type(t), radius(r), width(w), height(h) {}
//
//	double CalculateArea(const std::vector<Shape>& shapes) {
//		double totalArea = 0;
//		for (const auto& shape : shapes) {
//			if (shape.type == ShapeType::Circle) {
//				totalArea = 3.14 * shape.radius * shape * radius;
//			}
//			else if (shape.type == ShapeType::Rectangle) {
//
//			}
//		}
//	}
//};

#pragma endregion

#pragma region 적용후
//class Shape {
//public:
//	//모든 도형에서 면적을 계산하는 녀석
//	virtual double Area()const = 0;
//	
//	virtual~Shape() = default;
//};
//class Circle :public Shape {
//private:
//	double radius;
//public:
//	Circle(double r)
//		:radius(r){}
//
//	double Area()const override {
//		return 3.14 * radius * radius;
//	}
//};
#pragma endregion

