// Constuctor Example

class MyClass {     // The class
  public:           // Access specifier
    MyClass() {     // Constructor
      cout << "Hello World!";
    }
};

int main() {
  MyClass Obj;    // Create an object of MyClass (this will call the constructor)
  return 0;
}