class Shape {
    String color;
    Shape(String color) {
        this.color = color;
    }
    void displayColor() {
        System.out.println("Shape Color: " + color);
    }
}
class Circle extends Shape{
    int radius;
    Circle(String color, int radius) {
        super(color);
        this.radius = radius;
    }
    void calculateArea() {
        double area = 3.14*radius*radius;
        System.out.println("Circle Area: " + area);
    }
    void calculatePerimeter() {
        double perimeter = 2*3.14*radius;
        System.out.println("Circle Perimeter: " + perimeter);
    }
}
class Rectangle extends Shape {
    int length;
    int width;
    Rectangle(String color, int length, int width) {
        super(color);
        this.length = length;
        this.width = width;
    }
    void calculateArea() {
        double area = length*width;
        System.out.println("Rectangle Area: " + area);
    }
    void calculatePerimeter() {
        double perimeter = 2*(length+width);
        System.out.println("Rectangle Perimeter: " + perimeter);
    }
}
public class Heirarchical_Inheritance {
    public static void main(String args[]) {
        Shape sh = new Shape("Yellow");
        sh.displayColor();
        Circle ci = new Circle("Blue", 7);
        ci.calculateArea();
        ci.calculatePerimeter();
        Rectangle rect = new Rectangle("Red", 4, 4);
        rect.calculateArea();
        rect.calculatePerimeter();
    }   
}
