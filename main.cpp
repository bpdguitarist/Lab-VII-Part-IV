//
//  Lab VII Part IV
//
//  Created by Edgar Esparza on 6/29/15.
//


#include <iostream>
using namespace::std;

void displayBox (int length);
void displayBox (int length, char fillChar);
void displayBox (int width,  int height);
void displayBox (int width,  int height, char FillChar);


int main()
{
    int boxLength,
    boxWidth,
    boxHeight;
    
    char boxFill;
    
    cout << "Enter the length of a side: ";
    cin >> boxLength;
    displayBox(boxLength);
    cout << endl << "Enter the fill character: ";
    cin >> boxFill;
    displayBox(boxLength,boxFill);
    
    cout << endl << "Enter the width and height of the box: ";
    cin >> boxWidth >> boxHeight;
    displayBox(boxWidth,boxHeight);
    cout << endl << "Enter the fill character: ";
    cin >> boxFill;
    displayBox(boxWidth,boxHeight,boxFill);
    
    return 0;
}

void displayBox (int length)
{
    displayBox (length, ' ');
}


void displayBox (int length, char fillChar)
{
    displayBox (length,  length, fillChar);
}


void displayBox (int width,  int height)
{
    displayBox (width,  height, ' ');
}

void displayBox (int width,  int height, char FillChar)
{
    for(int i=0;i<height;i++){
        if(i==0||i==(height-1)){
            for(int j=0;j<width;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            for(int j=0;j<width;j++){
                if(j==0||j==(width-1))
                    cout<<"*";
                else
                    cout<<FillChar;
            }
            cout<<endl;
        }
    }
}
