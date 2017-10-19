#LittleBigGame "doc"

- AbstractEntity should be the abstract class of all drawing entity "from the subject statement". This class "need to implement pure virtual Update() et Draw()".

- Camera is a personal try to stick a camera on the player witheout result :(

- Character is not used here but if the game were more coplex should be mother class for characters like player, enemies ... but I dont know :D

- IObservable and IObserver : is the implementation of observer pattern but not used at this point. But subject ask for it .. but i can't figure out for what in our case..

- Monsterfactory is an exemple how to implemente a factory pattern to build ZombieMonster or SrinterMonster... But subject ask for it .. but i can't figure out for what in our case..

- PlayerAnimation is the class who handle animation for PlayerSprite

- PlayerSprite is the class who dra the good sprite related ask by PlayerAnimation i suppose

- SprinterMonster refers to Monsterfactory and Character

- TileMap is the class who build the map according to the tmx file and the mario-tilemap.png

- TimeManager is a class to handle time but I dont use it here at this point because i used SF:Clock, but subject ask for something to "handle time".

- ZombieMonster refers to Monsterfactory and Character

## What should we do ?




 

