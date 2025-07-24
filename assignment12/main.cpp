
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Movie.h"

using namespace std;

int main() {
    ifstream file("netflix_titles.csv"); 
    string line;
    vector<Movie> movies;

    getline(file, line); // Skip header

    int count = 0;
    while (getline(file, line) && count < 10) { // Load only 10 entries
        stringstream ss(line);
        string title, director, country, rating, release_year;
        string token;

       
        getline(ss, title, ',');
        getline(ss, director, ',');
        getline(ss, country, ',');
        getline(ss, rating, ',');
        getline(ss, release_year, ',');

        Movie m(title, director, country, rating, release_year);
        movies.push_back(m);
        count++;
    }

    file.close();

    // Print output
    cout << "Top 10 Movies:\n";
    for (const auto& m : movies) {
        cout << "Title: " << m.title << "\n"
             << "Director: " << m.director << "\n"
             << "Country: " << m.country << "\n"
             << "Rating: " << m.rating << "\n"
             << "Year: " << m.release_year << "\n\n";
    }

    return 0;
}
