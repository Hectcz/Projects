# Text Narrative Story Branching Game  
Choose your own adventure text game

Write a Choose Your Own Adventure (Links to an external site.) (branching-path story) video game

Create a fictional, branching-path story (PG or lower rating) that has at least 3 unique endings. Each 'page' of your text adventure should have at least 2 or 3 sentences. You should have at least 7 pages in your story with each page having at least 2 options for the user to choose from (except the ending pages). First, draw a diagram of your story with arrows connecting the different pages together corresponding to the available branches of your story (you do not have to turn in your diagram).

To implement your story in code, you can define a function for each page of your story. The function can include dialog allowing the user to input their choice for the given situation. Depending on the user's input, a conditional statement can then call the next appropriate function to advance the story to the next page. User inputs should be validated. A project in repl.it called 'Class Project' is provided to write the code.

Very Basic Example of a 'Page'

You have woken up in a green pasture. The sun is shining and the clouds are floating by. To the east you see a red barn. To the west see a forest.
Which direction would you like to travel?
1 - East
2 - West
> 

Clearing the Console Output
Before outputting new text in each of your functions you may want to clear the text from the previous outputs. To clear all the text in the console window you can use this statement:

system("clear");

Randomization
If you want to add some random elements to your game, use a random number generator to a random elements in your game.

Global Variables
You can use global variables to keep track of items such as money the user may be required to acquire throughout the story.
