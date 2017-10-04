#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
  vector <vector <string> > wordGrid;
    vector<string> wG;
  /*
     do not edit this space

     where this comment is, the instructor will
     add the code that gets the user's input and
     inserts the input into every element of the
     matrix wordGrid
  */
    
  //PUT YOUR CODE BELOW THIS LINE
    
 //that prints each element of the matrix in the
 wG.push_back("wow");
 wG.push_back("cat");
 wG.push_back("car");
 wG.push_back("dog");
 wG.push_back("mouse");

 wordGrid.push_back(wG);

 wG.clear();

  wG.push_back("jump");
  wG.push_back("dance");
  wG.push_back("boxing");
  wG.push_back("racing");

  wordGrid.push_back(wG);

  for(int r=0; r < wordGrid.size();r++)
  {
    for(int c=0; c < wG.size();c++)
    {
    cout<<"Row "<<r<<"Column "<<c<<"is  "<<wordGrid[r][c]<<endl;
    }
    cout<<endl;
  }
  //following format:
  //Row _ Column _ is _
  //the first and second blanks should be replaced with the coordinates
  //of the element's row and column and the third blank should be replaced
  //with the value of that element

  



 return 0;
}




