//
//  Theater.h
//  Exam 1
//
//  Created by katie joy shaw on 5/29/14.
//I affirm that all code given below was written solely by me, Katie Shaw, and that any help I received adhered to the rules stated for this exam.

#ifndef __Exam_1__Theater__
#define __Exam_1__Theater__

#include <iostream>
#include "Movie.h"
#define movNum 15
using namespace std;


class Theater
{
public:
    Theater(string Name, string Phone);
    void AddMovie(Movie& Movie);
    string GetMovieForHour(int hour);
    
    int GetShowTimeForGenre(string Genre);
    
    int GetPopcornPrice();
    int GetCokePrice();
    
private:
    int pPrice;
    int cPrice;
    Movie allMovies[movNum];
    string name;
    string phone;
    int moviesOccupied;

};






#endif /* defined(__Exam_1__Theater__) */
