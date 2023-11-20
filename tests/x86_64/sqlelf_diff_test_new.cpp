int func(double a) {
   return 42;
}

int var = 17;

class Test1 {
   public:
      
      static int f(int a, int b);
      int g(float a, float b);
      
   protected:
      
      static int m_;
};

int Test1::f(int a, int b) { return 42; }
int Test1::g(float a, float b) { return 1; }

int Test1::m_ = 13;

int persisting1(int a) { return 42; }
int persisting2(int a) { return 42; }

int main(){
    return 0;
}