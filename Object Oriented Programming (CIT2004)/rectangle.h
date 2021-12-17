/* Programmer : Jehmoni Samuels
    FileName :
    Date: 23/01/2020
    */

#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>

class Rectangle
{
    public:
        int getLength()
        {
            return Length;
        }

        int getWidth()
        {
            return Width;
        }


        void setLength(int len)
        {
            Length=len;
            CalArea();
        }

        void setWidth(int wid)
        {

            Width=wid;
            CalArea();
        }



        void setInfo(int len, int wid)
        {
            Length=len;
            Width=wid;
            CalArea();
        }

        void printInfo()
        {
           std::cout<<"\nLength: "<<Length;
            std::cout<<"\nWidth: "<<Width;
            std::cout<<"\nArea: "<<Area<<  std::endl;
        }

        Rectangle()
        {
            Length=0;
            Width=0;
            Area=0;
            }



    private:

            int Length;
            int Width;
            int Area;

            void CalArea()
            {
                Area=Length*Width;
            }

};

#endif // RECTANGLE_H
