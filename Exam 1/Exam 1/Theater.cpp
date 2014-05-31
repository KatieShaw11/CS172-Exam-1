//
//  Theater.cpp
//  Exam 1
//
//  Created by katie joy shaw on 5/29/14.
//  Copyright (c) 2014 Katie Shaw. All rights reserved.
//

#include "Theater.h"
#include "Movie.h"



    Theater::Theater (string Name, string Phone)
    {
        name = Name;
        phone = Phone;
        cPrice = 4;
        pPrice = 5;
    }
    void Theater::AddMovie (Movie& Movie)
    {
        Movie = allMovies[moviesOccupied];
        moviesOccupied++;
    }
    string Theater::GetMovieForHour (int hour)
    {
        for (int i = 0; i < movNum; i++)
        {
            if(allMovies[i].GetShowtime() == hour)
                return allMovies[i].GetTitle();
        }
        return "";
    }
    int Theater::GetShowTimeForGenre(string genre)
    {
        for (int i = 0; i < movNum; i++)
        {
            if(allMovies[i].GetGenre() == genre)
                return allMovies[i].GetShowtime();
        }
        return -1;
    }
    
    int Theater::GetPopcornPrice()
    {
        return pPrice;
    }
    
    int Theater::GetCokePrice()
    {
        return cPrice;
    }