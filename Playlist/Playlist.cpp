/********************************************************************
 * Playlist.cpp :
 * Program that randomly picks a song from a playlist; makes use of
 * string, vector, and random from the Standard Library.
 *
 * NOTE: This version of the program has numerous errors.
 * Your job is to...
 *	1.) fix all bugs
 *	2.) commit your changes to your local Git repository
 *	3.) push your changes to your remote Git respository
 *	4.) submit a Pull Request to your instructor's Git project
 *
 ********************************************************************
 */

 // Preprocessor directives
#include <random>
#include <String>
#include <iostream>
#include <vector>


int main()
{
	// Create a vector of strings; add items using a list initializer
	std::vector<std::string> songs = { "Happy Birthday", "Du Hast", "The Song from the Skyrizi Commercial", "Fast Car" };

	// Add a 5th string to the end of the vector
	songs.push_back("What Have I Done to Deserve This?");

	// Print the playlist to the screen
	std::cout << "Your Playlist:" << "\n";

	// Loop through the vector of songs; print each vector element to console.
	for (int i = 0; i < songs.size(); i++)
	{
		std::cout << songs.at(i) << "\n";
	}

	// Set up a random number generator seeder
	std::random_device seed;

	// Create a random integer generator; chooses random ints from 0 to 4 (inclusive)
	std::uniform_int_distribution<int> rand_dist(0, 4);

	// Get the next random integer
	int index = rand_dist(seed);

	// Get the item from the vector at the randomly-selected index
	std::string currentSong = songs.at(index);

	// Convert each charcter of the 'currentSong' string to UPPERCASE
	for (char c : currentSong)
	{
		c = toupper(c);
	}

	// Print the UPPERCASE 'currentSong' string
	std::cout << "\n" << "Now playing: " << currentSong;

	return 0;
}

