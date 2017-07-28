My project revolves around using weighted graphs to illustrate a virtual representation of near Earth asteroids to be used in theory as a tool to efficiently mine these asteroids for resources, information, or as a way to potentially destroy asteroids that become a threat to the Earth.



This project will utilize theory and method behind finding the shortest path between two points, the storing of vertices in a graph with weighted distances between each point to calculate the "real" distance between the two objects(either between Earth or separate asteroids). The graph can be thought of a frozen moment of time of the positions of all of these objects. Even though the objects are in a 3-D space of course, the actual distances between them can be thought of as 2-Dimensional edges.


Sources for locations and distances of the asteroids from Earth can be found here: http://www.brera.mi.astro.it/sormano/teca.html 


Other qualities of note that these asteroids have include the size of the asteroid which severely impacts its score on the palermo scale which can be read about here: https://cneos.jpl.nasa.gov/sentry/palermo_scale.html
The scale can be a determining factor in the danger of any given asteroid and therefore the efforts that should be placed in mitigating or nullifying the damage it inflicts upon collision with the Earth.

The complexity of constantly accelerating objects in space (due to the elliptical orbits of these bodies) makes predicting the motion of the asteroids, based on the gravitational pull and respective velocities of the objects during the "travel" time of the explorer, far too complex. Therefore the velocities and consequently the positions of the objects will not be considered beyond their initial positions.

UPDATE///////


Hello!

Thanks for reading this. This is my readme update.

Project Summary:

My project's goal originally was to make an asteroid mining program, however upon working through the project with an instructor this proved to likely consume far too much time so I resolved to make an interesting representation of our solar system with a graph.
I had to scour the internet (not that deeply) to find data on the distances of planets relative to each other in an average setting, given that they have elliptical orbits distances are never constant.

From this site: http://www.planetsedu.com/distances-between-the-planets/ 

and this site: https://www.universetoday.com/15462/how-far-are-the-planets-from-the-sun/ 

Using dijkstra's algorithm I wanted to find the shortest path between the planets and also make a game out of surviving the trip by acquiring the correct resources to survive the harsh conditions of space. However, I ran out of time and energy to do much more thant what I did, because there was simply too much going on this week. Unfortunately I did not get Dijkstra's algorithm to work properly.



How To Run:

No third party libraries are required, so there is nothing else to it to run this program other than to make sure it goes into your machine in the same directory.

System Requirements:

This program can be run on any machine with the proper GCC compiler. CODE::BLOCKS for example has downloads available for most operating systems, so if you download that this could easily be run. On a linux or unix based OS this can be ran through terminal with no CLAS needed.

My Name:

Lorenzo Lopez

Issues/Bugs:
Well the project has a lot more potential so the bugs didn't really come out as not a lot of testing was done.





