#pragma once
//warrior.h

#include "map.h"
//
//how
//不想传入数组
//但是怎么通过hid控制英雄。。
//句柄？（？
// 传入数组下标？
// vs更好的聊天工具说
////////////////////////////////////////
//char hero[]?√114
//但是，怎么访问啊
//hero是什么东西啊
// 它//
//我rriors
//嗯，可以定义一个struct hero，然后传入struct hero *?// 数组， 可以？
// warrior需要的数据有……（就core war来说）比如，当前正在执行いろいろいろいろいろいろいろいろ的线程数，线程执行位置……这样就需要一个结构体（namespace（迫真））来包括这些数据//
//那么首先？
//iroiro 好耶好耶
//slzProject的warrior需要哪些数据，能采取什么行动呢
//...草
//草草草
namespace SLZ_PROJECT { //那向量怎么办啊ALGEBRA_LINEARE::Vettore//哦//此文件的语言：中文（简体）、英文、意大利文、日文

    class Game {
    public:

        typedef struct {
            char* name;
            int position_x;
            int position_y;
            status st;//这是什么//套起来了//来力
            secondary_character_properties scp;//scp草
            int hp;
            int mp;//if needed好耶！←饥饿值（确信）
            //int 沢山


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
        //草草草草草草草草草草草happy visible birthday i'm angry
        // 草，刚才光标消失了，神必 去mod

        typedef struct
        {
            int ATT,//攻击力 √
               // ATN,//物理攻击力
               // INT,//魔法攻击力
                DEF,//防御力√
                //RES,//魔法防御力
                //SPD,//速度，回避物理攻击
                //HIT,//命中率或者连击//看情况
                //MAG,//魔力（影响法力上限）
                CHR,//魅力（影响NPC如何对待角色，同时也影响商店道具的售价、表演收入、能有多少宠物）√√√（×//草草草可
                SPEED;//决定角色经过多久之后是一回合，同时也影响在世界地图上的移动力 √√√
                //LIFE;//角色每级HP的成长率//要修改//warrior有等级的设定吗
                //我本来要做坦克大战//好耶//现在变成高达大战了//草//等等
            //要自动化的是什么东西//？


        }secondary_character_properties;

        /*草草草namespace//之前写的//tql
        //怎么办
        //用，都可以用//
        //等等这事跑团模组
        //sdy

        namespace RPGMMO_game{
            class Game{
                public:
                struct Base_character_properties
                {
                    int STR,//力量（微量增加生命值，近战伤害）
                        CON,//体质（增加生命值，负重）
                        SIZ,//体型
                        DEX,//敏捷（增加命中率，微量减少受到的物理损伤）
                        APP,//外貌
                        PER,//智力，灵感
                        POW,//意志（影响生命值，法力，精力上限）
                        EDU,//教育
                        MOV;//移动力
                };

                struct Secondary_character_properties
                {
                    int ATT,//攻击力 √
                        ATN,//物理攻击力
                        INT,//魔法攻击力
                        DEF,//防御力√
                        RES,//魔法防御力
                        SPD,//速度，回避物理攻击
                        HIT,//命中率或者连击//看情况
                        MAG,//魔力（影响法力上限）
                        CHR,//魅力（影响NPC如何对待角色，同时也影响商店道具的售价、表演收入、能有多少宠物）√√√（×//草草草可
                        SPEED,//决定角色经过多久之后是一回合，同时也影响在世界地图上的移动力 √√√
                        LIFE;//角色每级HP的成长率//要修改//warrior有等级的设定吗
                        //我本来要做坦克大战//好耶//现在变成高达大战了//草

                };



            };
                */
                /////////////////
        void warrior_move(int**, int i, int j) {

        }







};


//↓

