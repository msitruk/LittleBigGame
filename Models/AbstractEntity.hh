//
// Created by maxime on 31/07/17.
//

#ifndef LITTLEBIGGAME_ABSTRACTENTITY_HH
#define LITTLEBIGGAME_ABSTRACTENTITY_HH

class AbstractEntity {

    public:
	AbstractEntity();
    virtual ~AbstractEntity() = 0;
	virtual void Draw();
	virtual void Update();

};


#endif
