//I affirm that all code given below was written solely by me, Logan Smith, and that any help I received adhered to the rules stated for this exam.
#ifndef THEATER_H
#define THEATER_H
#include"Movie.h"
#include<string>
using namespace std;

class Theater{
private:
	string name;
	string telephone;
	int priceofpop = 2; // price of large popcorn. what a steal
	int priceofcoke = 1;
	Movie M[25]; 
	int amount;

public:
	Theater(string new_name, string new_telephone );	
	void AddMovie(Movie& Movie);	
	string GetMovieForHour(int hour);
	int GetShowTimeForGenre(string new_genre);
	int GetPopcornPrice();	
	int GetCokePrice();			
	
};
#endif 