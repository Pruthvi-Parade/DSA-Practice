// Inheritance

// #include <iostream>
// using namespace std;

// class Human
// {

// private:
//     int height;

// public:
//     int weight;

// private:
//     int age;

// public:
//     int getAge()
//     {
//         return this->age;
//     }

//     void setWeight(int w)
//     {
//         this->weight = w;
//     }
// };

// class Male : private Human
// {

// public:
//     string color;

//     void sleep()
//     {
//         cout << "Male Sleeping" << endl;
//     }

//     int getHeight()
//     {
//         return this->height;
//     }
// };

// int main()
// {

//     Male m1;
//     // cout << m1.height << endl;

//     /*
//         Male object1;
//         cout << object1.age << endl;
//         cout << object1.weight << endl;
//         cout << object1.height << endl;
//         cout << object1.color << endl;
//         object1.setWeight(84);
//         cout << object1.weight << endl;
//         object1.sleep();
//         */

//     return 0;
// }

// Single Inheritance

// #include <iostream>
// using namespace std;

// class Animal
// {

// public:
//     int age;
//     int weight;

// public:
//     void speak()
//     {
//         cout << "Speaking " << endl;
//     }
// };

// class Dog : public Animal
// {
// };

// int main()
// {

//     Dog d;
//     d.speak();
//     cout << d.age << endl;

//     return 0;
// }
// MultiLevel

// #include <iostream>
// using namespace std;

// class Animal
// {

// public:
//     int age;
//     int weight;

// public:
//     void speak()
//     {
//         cout << "Speaking " << endl;
//     }
// };

// class Dog : public Animal
// {
// };

// class GermanShepherd : public Dog
// {
// };

// int main()
// {

//     GermanShepherd g;
//     g.speak();

//     return 0;
// }

// Multiple Inheritance

// #include <iostream>
// using namespace std;

// class Animal

// {

// public:
//     int age;
//     int weight;

// public:
//     void bark()
//     {
//         cout << "Barking " << endl;
//     }
// };

// class Human
// {
// public:
//     string color;

// public:
//     void speak()
//     {
//         cout << "Speaking " << endl;
//     }
// };

// // Multiple Inheritance
// class Hybrid : public Animal, public Human
// {
// };

// int main()
// {

//     Hybrid obj1;
//     obj1.speak();
//     obj1.bark();

//     return 0;
// }
// Hierarchical inheritance

// #include <iostream>
// using namespace std;
// // Hierarchical Inheritance
// class A
// {

// public:
//     void func1()
//     {
//         cout << "Inside Funcion 1" << endl;
//     }
// };

// class B : public A
// {
// public:
//     void func2()
//     {
//         cout << "Inside Funcion 2" << endl;
//     }
// };

// class C : public A
// {
// public:
//     void func3()
//     {
//         cout << "Inside Funcion 3" << endl;
//     }
// };

// int main()
// {

//     A object1;
//     object1.func1();

//     B object2;
//     object2.func1();
//     object2.func2();

//     C object3;
//     object3.func1();
//     object3.func3();

//     return 0;
// }

// Concept

// #include <iostream>
// using namespace std;

// class Student
// {

// private:
//     string name;
//     int age;
//     int height;

// public:
//     int getAge()
//     {
//         return this->age;
//     }
// };

// int main()
// {

//     Student first;

//     cout << "Sab sahi chalra hai" << endl;

//     return 0;
// }

// Polymorphism

// #include <iostream>
// using namespace std;

// class A
// {

// public:
//     void sayHello()
//     {
//         cout << "Hello Love Babbar" << endl;
//     }

//     int sayHello(char name)
//     {
//         cout << "Hello Love Babbar" << endl;
//         return 1;
//     }

//     void sayHello(string name)
//     {
//         cout << "Hello " << name << endl;
//     }
// };

// class B
// {
// public:
//     int a;
//     int b;

// public:
//     int add()
//     {
//         return a + b;
//     }

//     void operator+(B &obj)
//     {
//         /*        int value1 = this -> a;
//                 int value2 = obj.a;
//                 cout << "output " << value2 - value1 << endl;
//                 */
//         cout << "Hello Babbar" << endl;
//     }

//     void operator()()
//     {
//         cout << "main Bracket hu " << this->a << endl;
//     }
// };

// class Animal
// {
// public:
//     void speak()
//     {
//         cout << "Speaking " << endl;
//     }
// };

// class Dog : public Animal
// {

// public:
//     void speak()
//     {
//         cout << "Barking " << endl;
//     }
// };

// int main()
// {

//     Dog obj;
//     obj.speak();

//     /*
//         B obj1, obj2;
//         obj1.a = 4;
//         obj2.a = 7;
//         obj1 + obj2;
//         obj1();*/

//     /*
//         A obj;
//         obj.sayHello();
//         */

//     return 0;
// }

// Ambigiuity

// #include <iostream>
// using namespace std;

// class A
// {
// public:
//     void func()
//     {
//         cout << " I am A" << endl;
//     }
// };

// class B
// {
// public:
//     void func()
//     {
//         cout << " I am B" << endl;
//     }
// };

// class C : public A, public B
// {
// };

// int main()
// {

//     C obj;
//     // obj.func();

//     obj.A::func();
//     obj.B::func();

//     return 0;
// }