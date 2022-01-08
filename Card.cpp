#include "Card.h"






int Card::GetCardNumber()
{
	return cardNumber;
}
Card::Card(const CellPosition& pos) : GameObject(pos) // sets the cell position of the GameObject
{
}
bool Card::IsOverlapping(GameObject* g) {
	return false;
}

void Card::Draw(Output* pOut) const
{

	///TODO: call the appropriate Ouput function that draws a cell containing the "cardNumber" in "position"
	pOut->DrawCell(position, cardNumber);
	
}

void Card::ReadCardParameters(Grid * pGrid)
{
	// we should not make it pure virtual because some Cards doesn't have parameters
	// and if we make it pure virtual, that will make those Cards abstract classes
}

Card* Card::CopyCard(CellPosition)
{
	return nullptr;
}

void Card::Apply(Grid* pGrid, Player* pPlayer) 
{
	// As written below the "Roll Dice" action in the document ==> Check the Project Document
	// "If a player reaches a card of any other type", the following message should be printed then wait mouse click

	pGrid->PrintErrorMessage("You have reached card " + to_string(cardNumber) + ". Click to continue ...");
}


Card::~Card()
{
}
