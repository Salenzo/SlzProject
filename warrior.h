#pragma once
//warrior.h

#include "map.h"
//
//how
//音�覺�秘方怏
//徽頁奕担宥狛hid陣崙哂俛。。
//鞘凹�殖┌�
// 勧秘方怏和炎��
// vs厚挫議祖爺垢醤傍
////////////////////////////////////////
//char hero[]?〔114
//徽頁��奕担恵諒亜
//hero頁焚担叫廉亜
// 万//
//厘rriors
//狹��辛參協吶匯倖struct hero��隼朔勧秘struct hero *?// 方怏�� 辛參��
// warrior俶勣議方象嗤´´�┥�core war栖傍��曳泌��輝念屎壓峇佩いろいろいろいろいろいろいろいろ議�潦綿����潦網莞侘志叩�´宸劔祥俶勣匯倖潤更悶��namespace��独寔����栖淫凄宸乂方象//
//椎担遍枠��
//iroiro 挫勳挫勳
//slzProject議warrior俶勣陳乂方象��嬬寡函焚担佩強椿
//...課
//課課課
namespace SLZ_PROJECT { //椎�鯀尽�担一亜ALGEBRA_LINEARE::Vettore//填//緩猟周議囂冱�砦侘庁┝鯡紕�、哂猟、吭寄旋猟、晩猟

    class Game {
    public:

        typedef struct {
            char* name;
            int position_x;
            int position_y;
            status st;//宸頁焚担//耗軟栖阻//栖薦
            secondary_character_properties scp;//scp課
            int hp;
            int mp;//if needed挫勳�　�滋偶峙��鳩佚��
            //int �g表


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
        //課課課課課課課課課課課happy visible birthday i'm angry
        // 課��胡嘉高炎��払阻��舞駅 肇mod

        typedef struct
        {
            int ATT,//好似薦 〔
               // ATN,//麗尖好似薦
               // INT,//徴隈好似薦
                DEF,//契囮薦〔
                //RES,//徴隈契囮薦
                //SPD,//堀業��指閲麗尖好似
                //HIT,//凋嶄楕賜宀銭似//心秤趨
                //MAG,//徴薦��唹�豬�薦貧�泯�
                CHR,//�帆Γ�唹��NPC泌採斤棋叔弼��揖扮匆唹�貮無蟲西澣鎚杣曄�燕處辺秘、嬬嗤謹富活麗��〔〔〔�─�//課課課辛
                SPEED;//畳協叔弼将狛謹消岻朔頁匯指栽��揖扮匆唹�贅敲製腟慷蕊狼漬洞�薦 〔〔〔
                //LIFE;//叔弼耽雫HP議撹海楕//勣俐個//warrior嗤吉雫議譜協宅
                //厘云栖勣恂鵡針寄媾//挫勳//�嶬擶箜標澳鏨黎汁�//課//吉吉
            //勣徭強晒議頁焚担叫廉//��


        }secondary_character_properties;

        /*課課課namespace//岻念亟議//tql
        //奕担一
        //喘��脅辛參喘//
        //吉吉宸並怒妖庁怏
        //sdy

        namespace RPGMMO_game{
            class Game{
                public:
                struct Base_character_properties
                {
                    int STR,//薦楚��裏楚奐紗伏凋峙��除媾彬墾��
                        CON,//悶嵎��奐紗伏凋峙��減嶷��
                        SIZ,//悶侏
                        DEX,//樗楯��奐紗凋嶄楕��裏楚受富鞭欺議麗尖鱒彬��
                        APP,//翌嘆
                        PER,//崘薦��痩湖
                        POW,//吭崗��唹�貮�凋峙��隈薦��娼薦貧�泯�
                        EDU,//縮圄
                        MOV;//卞強薦
                };

                struct Secondary_character_properties
                {
                    int ATT,//好似薦 〔
                        ATN,//麗尖好似薦
                        INT,//徴隈好似薦
                        DEF,//契囮薦〔
                        RES,//徴隈契囮薦
                        SPD,//堀業��指閲麗尖好似
                        HIT,//凋嶄楕賜宀銭似//心秤趨
                        MAG,//徴薦��唹�豬�薦貧�泯�
                        CHR,//�帆Γ�唹��NPC泌採斤棋叔弼��揖扮匆唹�貮無蟲西澣鎚杣曄�燕處辺秘、嬬嗤謹富活麗��〔〔〔�─�//課課課辛
                        SPEED,//畳協叔弼将狛謹消岻朔頁匯指栽��揖扮匆唹�贅敲製腟慷蕊狼漬洞�薦 〔〔〔
                        LIFE;//叔弼耽雫HP議撹海楕//勣俐個//warrior嗤吉雫議譜協宅
                        //厘云栖勣恂鵡針寄媾//挫勳//�嶬擶箜標澳鏨黎汁�//課

                };



            };
                */
                /////////////////
        void warrior_move(int**, int i, int j) {

        }







};


//◎

