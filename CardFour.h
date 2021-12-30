#pragma once

#include "Card.h"

class CardFour : public Card
{
public:
	CardFour(const CellPosition& pos); // A Constructor takes card position

	virtual void ReadCardParameters(Grid* pGrid); // Reads the parameters of CardFour which is: walletAmount

	virtual void Apply(Grid* pGrid, Player* pPlayer); // Applies the effect of CardFour on the passed Player
													  // by decrementing the player's wallet by the walletAmount data member

	virtual ~CardFour(); // A Virtual Destructor
};

