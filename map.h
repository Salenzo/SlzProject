#pragma once
//map.h
#include <stdlib.h>

#define MAP_LENTH 40
#define MAP_WIDTH 40

#define Arr2 ( array_name, row,col )   array_name[row*MAP_WIDTH+col]
enum BLOCK
{
	AIR = 0,
	BASE = 1,
	ROCK = 2,
	GRASS = 3,
	MUD = 4,
	DUST = 5,

};

//int** array = malloc(N * sizeof(int*));
//
//array[0] = malloc(M * sizeof(int));
//
//for (int k = 1; k < N; k++)
//
//array[k] = array[0] + M * k;

namespace SLZ_PROJECT {
	class Map {

	public://剪切板差点//还好有剪切板//草草草
		//这样写，对吗，？？：slzp::map.init←不能在没有实例化的情况下使用成员函数
		//SLZ_PROJECT::Map map;//不会类//啊啊啊
		// map.Init();
		//tql
		//突然按下 Ctrl+Shift+S
		// 另外类的函数定义一般不放在.h里？草草草//？
		//成员函数的声明在头文件里，定义在.cpp文件里；但是定义在头文件里也是允许的  但是定义在头文件里也是允许的/否则噔噔咚//否则噔噔咚
		//否则噔噔咚
		//怎么弄到git上面去
		//vs git插件（）
		//不会

		void Init(int** array, int raw, int col) {


			array = (int**)malloc(raw * sizeof(int*));
			array[0] = (int*)malloc(col * sizeof(int));

			for (int k = 1; k < raw; k++)
				array[k] = array[0] + col * k;

			return;

		}

		void Randomize(int** array, int seed) {
			//?

			//randomize
		}

		void Normalize(int** array) {
			array = 0;

			return;
		}


	};


}
	