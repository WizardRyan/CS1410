#pragma once

class Seat
{
public:

	static enum ClassType
	{
		First,
		Economy
	};

	static enum Position {
		Window,
		Aisle,
		Center
	};

	Seat(ClassType type, Position position);
	~Seat();

	bool hasPassenger = false;
	ClassType type;
	Position position;
	
private:


};

