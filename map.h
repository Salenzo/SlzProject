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

	public://���а���//�����м��а�//�ݲݲ�
		//����д�����𣬣�����slzp::map.init��������û��ʵ�����������ʹ�ó�Ա����
		//SLZ_PROJECT::Map map;//������//������
		// map.Init();
		//tql
		//ͻȻ���� Ctrl+Shift+S
		// ������ĺ�������һ�㲻����.h��ݲݲ�//��
		//��Ա������������ͷ�ļ��������.cpp�ļ�����Ƕ�����ͷ�ļ���Ҳ�������  ���Ƕ�����ͷ�ļ���Ҳ�������/����������//����������
		//����������
		//��ôŪ��git����ȥ
		//vs git�������
		//����

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
	