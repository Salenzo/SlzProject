#include <ctype.h>

#pragma once
//bot.h

namespace SLZ_PROJECT {
	class Bot {
	public:

		//>>>>>>>>>>>>>>>>>>>>
		/*enum INSTRUCTION
		{
			MOV,
			ADD,
			VAR,
			JMP,
			SET,
		};*/
		//<<<<<<<<<<<<<<<<<<<<<
		int getX();
		int getY();

		void mov(char direction, int step);
		/*typedef struct bot {
			char* name;
			char* description; //
			int id;
			position position; // 当前位置
		};*/
		Bot(int x = 0, int y = 0);
		/*typedef struct instruction {

		//core wars


		};*/

	protected:

	private:
		typedef struct position {
			int x; // x 西正 东负
			int y; // y 北正 南负
		};

		position position;

	};

	void Bot::mov(char direction, int step) {
		switch (tolower(direction))
		{
		case 'n':
			++position.y;
			break;
		case 's':
			--position.y;
			break;
		case 'e':
			--position.x;
			break;
		case 'w':
			++position.x;
			break;
		}

	}

	Bot::Bot(int x, int y) {
		position.x = x;
		position.y = y;
	}

	int Bot::getX() {
		return position.x;
	}

	int Bot::getY() {
		return position.y;
	}

}