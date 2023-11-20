int func(int a) {
   return 42;
}

int var = 17;

class Test {
   public:
      
      static int f(int a, int b);
      int g(float a, float b);
      
   protected:
      
      static int m_;
};

int Test::f(int a, int b) { return 42; }
int Test::g(float a, float b) { return 1; }

int Test::m_ = 13;

int persisting1(int a) { return 43; }
int persisting2(int a) { return 43; }

int main(){
   return 0;
}