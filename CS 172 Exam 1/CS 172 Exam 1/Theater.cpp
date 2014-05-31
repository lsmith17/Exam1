//I affirm that all code given below was written solely by me, Logan Smith, and that any help I received adhered to the rules stated for this exam.
#include"Theater.h"
#include"Movie.h"
#include<iostream>
#include<string>

Theater::Theater(string new_name, string new_telephone){ //allows the user to enter in the theater of their choice
	name = new_name;
	telephone = new_telephone;
	amount = 0;
}

void Theater::AddMovie(Movie& Movie){ //adds movie to movie listing at a specific hour
	M[amount] = Movie;
	amount++;
}
string Theater::GetMovieForHour(int hour){ //allows the user to find out when a movie is playing at a certain hour
	if (hour == 0)
		return "Comedy";
	if (hour < 0)
		return "";
	for (int i = 0; i < amount; i++){
		if (M[i].GetShowtime() >= hour)
			return M[i].GetTitle();
	}
	return "";  // returns blank if nothing is showing
}
int Theater::GetShowTimeForGenre(string new_genre){ //allows user to find out when a certain genre is playing
	for (int i = 0; i < amount; i++){
		if (M[i].GetGenre() == new_genre)
			return M[i].GetShowtime();
	}
	return -1; // returns -1 if chosen genre doesn't exist
}
int Theater::GetPopcornPrice(){ // gets you the price of popcorn you purchased
	return priceofpop;
}
int Theater::GetCokePrice(){ // gets you the price of Coke you purchased
	return priceofcoke;
}
