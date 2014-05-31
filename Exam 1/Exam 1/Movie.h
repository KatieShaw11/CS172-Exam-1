//
//  Movie.h
//  Exam 1
//
//  Created by katie joy shaw on 5/29/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

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
