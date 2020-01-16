#include "Level.h"

Level::Level(sf::RenderWindow* hwnd)
{
	window = hwnd;

	// initialise game objects
	rect.setSize(sf::Vector2f(50, 50));
	rect.setPosition(100, 100);
	rect.setFillColor(sf::Color::Red);

	rect2.setSize(sf::Vector2f(30, 30));
	rect2.setPosition(110, 110);
	rect2.setFillColor(sf::Color::Green);

	rect3.setSize(sf::Vector2f(10, 10));
	rect3.setPosition(120, 120);
	rect3.setFillColor(sf::Color::Blue);

	CornerRect.setSize(sf::Vector2f(75, 75));
	CornerRect.setFillColor(sf::Color::Green);

	circle.setRadius(15);
	circle.setPosition(300, 300);
	circle.setOutlineColor(sf::Color::Red);
	circle.setFillColor(sf::Color::Green);
	circle.setOutlineThickness(2.f);

	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout << "ERROR ERROR ERROR NO FONT ERROR ERROR" << std::endl;
	}
	text.setFont(font);
	text.setString("HELLO WORLD");
	text.setCharacterSize(24);
	text.setPosition(500, 0);
	text.setFillColor(sf::Color::Red);


}

Level::~Level()
{
}

// handle user input
void Level::handleInput()
{

}

// Update game objects
void Level::update()
{
	CornerRect.setPosition((window->getSize().x - 75), (window->getSize().y - 75));
}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(rect);
	window->draw(rect2);
	window->draw(rect3);
	window->draw(circle);
	window->draw(CornerRect);
	window->draw(text);
	endDraw();
}

void Level::beginDraw()
{
	window->clear(sf::Color(0, 0, 0));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}