#import <string>

using namespace std;

// this is my test class for c++
class HelloWorld : public IWorld {
private:
  string name;
  int age;
  const char* SAMPLE = "http://github.com, Hello World";
public:
  void Jump(int x, int y) { this->age = x - y; };
  int GetTimeToLive() const { return 10; };
}

class Usage {
private:
  HelloWorld instance;
public:
  HelloWorld GetInstance() { return instance; }
}

HelloWorld Usage::GetInstance() {
  return instance;
}
