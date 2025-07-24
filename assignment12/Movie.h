// Movie.h
#ifndef MOVIE_H
#define MOVIE_H

#include <string>
using namespace std;

class Movie {
public:
    string title;
    string director;
    string country;
    string rating;
    string release_year;

    Movie(string t, string d, string c, string r, string y)
        : title(t), director(d), country(c), rating(r), release_year(y) {}
};

#endif
