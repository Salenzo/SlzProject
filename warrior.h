#pragma once
//warrior.h

#include "map.h"
//
//how
//���봫������
//������ôͨ��hid����Ӣ�ۡ���
//���������
// ���������±ꣿ
// vs���õ����칤��˵
////////////////////////////////////////
//char hero[]?��114
//���ǣ���ô���ʰ�
//hero��ʲô������
// ��//
//��rriors
//�ţ����Զ���һ��struct hero��Ȼ����struct hero *?// ���飬 ���ԣ�
// warrior��Ҫ�������С�������core war��˵�����磬��ǰ����ִ�Ф�������������������߳������߳�ִ��λ�á�����������Ҫһ���ṹ�壨namespace�����棩����������Щ����//
//��ô���ȣ�
//iroiro ��Ү��Ү
//slzProject��warrior��Ҫ��Щ���ݣ��ܲ�ȡʲô�ж���
//...��
//�ݲݲ�
namespace SLZ_PROJECT { //��������ô�찡ALGEBRA_LINEARE::Vettore//Ŷ//���ļ������ԣ����ģ����壩��Ӣ�ġ�������ġ�����

    class Game {
    public:

        typedef struct {
            char* name;
            int position_x;
            int position_y;
            status st;//����ʲô//��������//����
            secondary_character_properties scp;//scp��
            int hp;
            int mp;//if needed��Ү��������ֵ��ȷ�ţ�
            //int �gɽ


        }warrior;

        typedef struct {
            int bleeding,
                walkingdead,
                happy,
                visible,
                //birthday,
                shield,
                running,
                angry,
                exciting,
                //................
                //here we go

        }status;
        //�ݲݲݲݲݲݲݲݲݲݲ�happy visible birthday i'm angry
        // �ݣ��ղŹ����ʧ�ˣ���� ȥmod

        typedef struct
        {
            int ATT,//������ ��
               // ATN,//��������
               // INT,//ħ��������
                DEF,//��������
                //RES,//ħ��������
                //SPD,//�ٶȣ��ر�������
                //HIT,//�����ʻ�������//�����
                //MAG,//ħ����Ӱ�취�����ޣ�
                CHR,//������Ӱ��NPC��ζԴ���ɫ��ͬʱҲӰ���̵���ߵ��ۼۡ��������롢���ж��ٳ���̡̡̣���//�ݲݲݿ�
                SPEED;//������ɫ�������֮����һ�غϣ�ͬʱҲӰ���������ͼ�ϵ��ƶ��� �̡̡�
                //LIFE;//��ɫÿ��HP�ĳɳ���//Ҫ�޸�//warrior�еȼ����趨��
                //�ұ���Ҫ��̹�˴�ս//��Ү//���ڱ�ɸߴ��ս��//��//�ȵ�
            //Ҫ�Զ�������ʲô����//��


        }secondary_character_properties;

        /*�ݲݲ�namespace//֮ǰд��//tql
        //��ô��
        //�ã���������//
        //�ȵ���������ģ��
        //sdy

        namespace RPGMMO_game{
            class Game{
                public:
                struct Base_character_properties
                {
                    int STR,//������΢����������ֵ����ս�˺���
                        CON,//���ʣ���������ֵ�����أ�
                        SIZ,//����
                        DEX,//���ݣ����������ʣ�΢�������ܵ����������ˣ�
                        APP,//��ò
                        PER,//���������
                        POW,//��־��Ӱ������ֵ���������������ޣ�
                        EDU,//����
                        MOV;//�ƶ���
                };

                struct Secondary_character_properties
                {
                    int ATT,//������ ��
                        ATN,//��������
                        INT,//ħ��������
                        DEF,//��������
                        RES,//ħ��������
                        SPD,//�ٶȣ��ر�������
                        HIT,//�����ʻ�������//�����
                        MAG,//ħ����Ӱ�취�����ޣ�
                        CHR,//������Ӱ��NPC��ζԴ���ɫ��ͬʱҲӰ���̵���ߵ��ۼۡ��������롢���ж��ٳ���̡̡̣���//�ݲݲݿ�
                        SPEED,//������ɫ�������֮����һ�غϣ�ͬʱҲӰ���������ͼ�ϵ��ƶ��� �̡̡�
                        LIFE;//��ɫÿ��HP�ĳɳ���//Ҫ�޸�//warrior�еȼ����趨��
                        //�ұ���Ҫ��̹�˴�ս//��Ү//���ڱ�ɸߴ��ս��//��

                };



            };
                */
                /////////////////
        void warrior_move(int**, int i, int j) {

        }







};


//��

