#include <iostream>
#include <string>
using namespace std;

int fuckme(int aval, int bval);
bool mux(string I1, string I2, string S, int aval, int bval, bool oval);

int main()
{


int bval, aval;
int iarray[] = {0, 1};

fme(0, 0);

return 0;
}

int fuckme(int aval, int bval){
string array[] = {"A", "B", "0", "1", "Out"};
string w1, w2, w3, w4, w5, w6;
bool oval;
  for(int i = 0; i<4; i++)
  {
    w1 = array[i];
    for(int i = 0; i<4; i++)
    {
      w2 = array[i];
      for(int i = 0; i<4; i++)
      {
        w3 = array[i];
        oval = mux(w1, w2 , w3, aval, bval, false);
        for(int i = 0; i < 5; i++)
        {
          w4 = array[i];
          for(int i = 0; i < 5; i++)
          {
            w5 = array[i];
            for(int i = 0; i < 5; i++)
            {
              w6 = array[i];
            
              if(mux(w4, w5, w6, aval, bval, oval) == false)// ((aval == 0 && bval == 0))))
                {
                oval = mux(w1, w2, w3, (aval+1), bval, false);
                if(mux(w4, w5, w6, (aval+1), bval, oval) == true)
                {
                  oval = mux(w1, w2, w3, aval, (bval+1), false);
                  if(mux(w4, w5, w6, aval, (bval+1), oval) == true)
                  {
                    oval = mux(w1, w2, w3, (aval+1), (bval+1), false);
                    if(mux(w4, w5, w6, (aval+1), (bval+1), oval) == false)
                    {
                      cout << w1 << w2 << w3 << w4 << w5 << w6 << endl;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}



bool mux(string I1, string I2, string S, int aval, int bval, bool oval)
{
  int a;
  int muxval1, muxval2, muxval3;
  if (I1 == "A")
  {
    muxval1 = aval;
  }
  else if (I1 == "B")
  {
    muxval1 = bval;
  }
  else if (I1 == "0")
  {
    muxval1 = 0;
  }
  else if (I1 == "1")
  {
    muxval1 = 1;
  }
  else if (I1 == "Out")
  {
    if (oval == true)
    {
      a = 1;
    }
    if (oval == false)
    {
      a = 0;
    }
    muxval3 = a;
  }
  if (I2 == "A")
  {
    muxval2 = aval;
  }
  else if (I2 == "B")
  {
    muxval2 = bval;
  }
  else if (I2 == "0")
  {
    muxval2 = 0;
  }
  else if (I2 == "1")
  {
    muxval2 = 1;
  }
  else if (I2 == "Out")
  {
    if (oval == true)
    {
      a = 1;
    }
    if (oval == false)
    {
      a = 0;
    }
    muxval2 = a;
  }
  if (S == "A")
  {
    muxval3 = aval;
  }
  else if (S == "B")
  {
    muxval3 = bval;
  }
  else if (S == "0")
  {
    muxval3 = 0;
  }
  else if (S == "1")
  {
    muxval3 = 1;
  }
  else if (S == "Out")
  {
    if (oval == true)
    {
      a = 1;
    }
    if (oval == false)
    {
      a = 0;
    }
    muxval3 = a;
  }
  
  bool a1, a2, a3;
  
  if (muxval1 == 0)
  {
    a1 = false;
  }
  else
  {
    a1 = true;
  }
  if (muxval2 == 0)
  {
    a2 = false;
  }
  else
  {
    a2 = true;
  }
  if (muxval3 == 0)
  {
    a3 = false;
  }
  else
  {
    a3 = true;
  }

  int output = (a1 && !(a3)) || (a2 && a3);
  if (output == 1)
  {
    return true;
  }
  if (output == 0)
  {
    return false;
  }
}
