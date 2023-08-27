#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>


/// <summary>
/// Class that acts as the game engine,
/// </summary>
class Game
{
	private:
		//Variables
		//Window
		sf::RenderWindow* window;

		sf::VideoMode videoMode;
		
		//Event
		sf::Event ev;

		//Private functions
		void initVariables();
		void initWindow();
	
	public:
		/// <summary>
		/// Constructor of the Game class
		/// </summary>
		Game();
		/// <summary>
		/// Destructor of the game class
		/// </summary>
		virtual ~Game();
		/// <summary>
		/// Checks if the game is running
		/// </summary>
		/// <returns>boolean</returns>	
		const bool running();
		void pollEvents();
		/// <summary>
		/// Update function
		/// </summary>
		void update();
		/// <summary>
		/// Render function
		/// </summary>
		void render();
	};
