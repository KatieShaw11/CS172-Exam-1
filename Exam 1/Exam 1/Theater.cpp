//
//  Theater.cpp
//  Exam 1
//
//  Created by katie joy shaw on 5/29/14.
//I affirm that all code given below was written solely by me, Katie Shaw, and that any help I received adhered to the rules stated for this exam.

#include "Theater.h"
#include "Movie.h"



    Theater::Theater (string Name, string Phone)
    {
        name = Name;
        phone = Phone;
        cPrice = 4;
        pPrice = 5;
    }
    void Theater::AddMovie (Movie& Movie) // Unfortunately I don't understand this. I don't know how to include arrays in the parameters or return them, so that the major issue for this test, for sure.
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
    int Theater::GetShowTimeForGenre(string genre) // This is one thing that doesn't work and I'm not sure why... I think it's because I just don't know how to pass arrays as references so the array dealt with in main isn't being accessed here, same as above.
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