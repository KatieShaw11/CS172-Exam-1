//
//  Movie.cpp
//  Exam 1
//
//  Created by katie joy shaw on 5/29/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#include "Movie.h"

Movie::Movie()
{
    title = "Monte Python's Meaning of Life"; // default movie
    genre = "Comedy"; // default genre
    showtime = 18; // default time
}
Movie::Movie (string Title, string Genre, int ShowTime)
{
    showtime = ShowTime;
    genre = Genre;
    title = Title;
}

string Movie::GetTitle()
{
    return title;
}
string Movie::GetGenre()
{
    return genre;
}
int Movie::GetShowtime()
{
    return showtime;
}












