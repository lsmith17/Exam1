//I affirm that all code given below was written solely by me, Logan Smith, and that any help I received adhered to the rules stated for this exam.

#include"Movie.h"

Movie::Movie(){ // default movie which is a comedy.
	title = "Longest Yard";
	genre = "Comedy";
	showtime = 0;

}
Movie::Movie(string new_title, string new_genre, int new_showtime){
	title = new_title;
	genre = new_genre;
	showtime = new_showtime;
}
string Movie::GetTitle(){ //allows you to get name of movie
	return title;
}
string Movie::GetGenre(){ //allows you to find out the genre of the movie
	return genre;
}
int Movie::GetShowtime(){ //allows you to know when the movie is playing/currently playing
	return showtime;
}
