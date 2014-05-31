//I affirm that all code given below was written solely by me, Logan Smith, and that any help I received adhered to the rules stated for this exam.
#ifndef Movie_Movie_h
#define Movie_Movie_h
#include<string>
using namespace std;

class Movie{
private:
	string title;
	string genre;
	int showtime;
public:
	Movie();
	Movie(string new_title, string new_genre, int new_showtime); //add movie to the movie listing
	string GetTitle(); 
	string GetGenre();
	int GetShowtime();
};
#endif