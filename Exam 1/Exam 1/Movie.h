//
//  Movie.h
//  Exam 1
//
//  Created by katie joy shaw on 5/29/14.
//I affirm that all code given below was written solely by me, Katie Shaw, and that any help I received adhered to the rules stated for this exam.

#ifndef __Exam_1__Movie__
#define __Exam_1__Movie__

#include <iostream>
#include <string>
using namespace std;

class Movie
{
public:
    Movie();
    Movie (string Title, string Genre, int ShowTime);
    
    string GetTitle();
    string GetGenre();
    int GetShowtime();
    
private:
    string title;
    string genre;
    int showtime;
    
    
};




#endif /* defined(__Exam_1__Movie__) */
