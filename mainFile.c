#include <iostream>
#include <math.h>
using namespace std;

int numOfTurns = 5;
int mult = 2345;
int randum(){
    int init = 7654;
    mult += 27;
    int randInt;
    double randDouble;
    randDouble = sin(init+mult)*sin(init+mult)*500;
    randInt = (int) randDouble;
    return randInt;
}

class snakeClass{
    public:
        int size = 5;
        char* snake[];
        int incraeseSize(){
            size++;
            return size;
        }

        void buildSnake(){
            for (int i=0; i<5; i++){
                if (i == 0)
                    snake[i] = "o";
                else    snake[i] = "#";
            }
        }

        void growsnake(){
            for (int i=5;i<size;i++)
                snake[i] = "#";
        }

        void killSnake(){
            for (int i=size; i>5; i--){
                snake[i] = NULL;
            }
        }
        int snakeSize(){
          return size;
        }
} snakeBody;


class apple{
    public:
    int applePlace = 0;
    int creatApple(){
        char* apple[randum()+1];
        for (int i=0; i<randum(); i++){
            char apple[i] = " ";
            applePlace++;
            if ((applePlace%50 == 0) && (aplePlace>50))
              cout << "\n";
        }
        apple[randum()+1] = "*";
        return applePlace;
    }

    int findApple(){
    return creatApple();
    }
} apples;

class controlSystem{
  private:
    int i = 3;
  public:
    char in;
    int snakeCanvas[500];
    void startSnake(){
      for (int i=0; i<500; i++){
        if (i<=snakeBody.snakeSize())
          snakeCanvas[i] = snakeBody.snake[i];
        else snakeCanvas[i] = " ";
      }
    }
    void moveUp(){
      if ()
    }
    void input(){
      while (i<5){
        cin << in;
        switch in{
          case "w":
            moveUp();
            break;
          case "a":
            moveLeft();
            break;
          case "s":
            moveDown();
            break;
          case "d":
            moveRight();
          default:
            i++;
        }
      }
    }
}

int main()
{
    for (int i=0;i<numOfTurns;i++){
        cout << apples.findApple() << endl;
    }
    return 0;
}
