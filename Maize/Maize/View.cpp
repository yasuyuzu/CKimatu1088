#include "View.h"
#include <string.h>
#include <curses.h>

void tree1(int x, int y)
{
    int i;

    char graph[15][50] = {
      "                  〇〇〇〇 ",
      "                 〇〇〇〇〇",
      "                〇〇〇〇〇〇",
      "                 〇〇〇〇〇",
      "                  〇〇〇〇",
      "                    |  |",
      "                    |  |",
      "                    |  |",
      "                    |  |",
      "                  ／ 　 ＼",
      "",
      "　　　　　目の前に一本の木があります。",
      "",
      "　　　　　左に進む：A    右に進む：D",
      "",
    };

    for (i = 0; i < 15; i++) {
        mvprintw(y + i, x, graph[i]);
    }
}

void tree2(int x, int y)
{
    int i;

    char graph[15][50] = {
      "         〇〇〇〇             〇〇〇〇",
      "        〇〇〇〇〇           〇〇◇〇〇",
      "       〇〇☆☆〇〇         〇〇◇◇〇〇",
      "        〇〇〇〇〇           〇〇◇〇〇",
      "         〇〇〇〇             〇〇〇〇",
      "           |  |                 |  |",
      "           |  |                 |  |",
      "           |  |                 |  |",
      "           |  |                 |  |",
      "         ／ 　 ＼             ／ 　 ＼",
      "",
      "　　　　　  二本の木が現れました。",
      "",
      "　　左に進む：A  まっすぐ進む：S  右に進む：D　",
      "",
    };

    for (i = 0; i < 15; i++) {
        mvprintw(y + i, x, graph[i]);
    }
}

void tree3(int x, int y)
{
    int i;

    char graph[15][50] = {
      "     〇〇〇〇                        〇〇〇〇",
      "    〇〇〇〇〇                      〇〇〇〇〇",
      "   〇〇〇〇〇〇                    〇〇〇〇〇〇",
      "    〇〇〇〇〇                      〇〇〇〇〇",
      "     〇〇〇〇                        〇〇〇〇",
      "       |  |                            |  |",
      "       |★|                            |  |",
      "       |  |                            |☆|",
      "       |  |                            |  |",
      "     ／ 　 ＼                        ／ 　 ＼",
      "",
      "",
      "",
      "　　           まっすぐ進む：S",
      "",
    };

    for (i = 0; i < 15; i++) {
        mvprintw(y + i, x, graph[i]);
    }
}

void hole(int x, int y) {
   
    int i;

    char graph[15][50] = {
      "",
      "                   ■■■■",
      "               ■■■■■■■■",
      "             ■■■■■■■■■■",
      "           ■■■■■■■■■■■■",
      "           ■■■■■■■■■■■■ ",
      "             ■■■■■■■■■■",
      "               ■■■■■■■■",
      "　　　　　　　　 　■■■■",
      "",
      "",
      "　　　　　  穴に落ちてしまいました。",
      "",
      "　　　　　　　　　終わる：Enter",
      "",
    };

    for (i = 0; i < 15; i++) {
        mvprintw(y + i, x, graph[i]);
    }
}

void monster(int x, int y) {

    int i;

    char graph[15][50] = {
      "",
      "",
      "",
      "　　 　　　　　　　／⌒＼",
      "　　 　　　　　　 (＿＿＿)",
      "                 ⊂)◎◎(つ",
      "　　　 　　　　　 (　▽　)",
      "　　　 　　　　 　<＞ー＜>",
      "",
      "",
      "",
      "　　　　　  怪物に襲われました。",
      "",
      "　　　　　　 　終わる：Enter",
      "",
    };

    for (i = 0; i < 15; i++) {
        mvprintw(y + i, x, graph[i]);
    }
}

void board(int x, int y) {

    int i;

    char graph[15][50] = {
      "",
      "　　　 　　   ＿＿＿＿＿＿＿＿＿＿",
      "             |                    |",
      "             |    ／              |",
      "             |   <-------------   |",
      "             |    ＼              |",
      "             |                    |",
      "              --------------------",
      "                       ||",
      "                       ||",
      "",
      "　　　　　   　看板を発見しました。",
      "",
      "　　         左に進む：A  右に進む：D　",
      "",
    };

    for (i = 0; i < 15; i++) {
        mvprintw(y + i, x, graph[i]);
    }
}

void treasure(int x, int y) {

    int i;

    char graph[15][50] = {
      "                 _☆________ ＿    ☆",
      "               ／__________／☆＼",
      "          ☆   ＼     ☆   ＼   |",
      "    ☆           ＼_______☆_＼／     ☆",
      "              ☆ ／          ／|   ",
      "       ☆      ／___☆_____／  ☆",
      "              |          ☆|   |",
      "              ☆           |  ／ ☆",
      "　　　　　☆  |______☆____|☆        ☆",
      "",
      "",
      "　　　　　  　宝箱を見つけました。",
      "",
      "　　　 　　　　終わる：Enter",
      "",
    };

    for (i = 0; i < 15; i++) {
        mvprintw(y + i, x, graph[i]);
    }
}

void hidden(int x, int y) {

    int i;

    char graph[15][50] = {
      "       〇〇〇〇                 〇〇〇〇",
      "      〇〇〇〇〇               〇〇〇〇〇",
      "     〇〇〇〇〇〇             〇〇〇〇〇〇",
      "      〇〇〇〇〇    ☆         〇〇〇〇〇",
      "       〇〇〇〇            ☆   〇〇〇〇",
      "         |  |  ☆              ☆ |  |",
      "         |  |      ____☆___      |  |",
      "         |  |    ☆         ＼    |  |",
      "         |  |    ＼_______☆／    |  |",
      "       ／ 　 ＼                 ／ 　 ＼",
      "",
      "　　　　　 　 不思議な場所でた！",
      "",
      "　　　　　　　　終わる：Enter",
      "",
    };

    for (i = 0; i < 15; i++) {
        mvprintw(y + i, x, graph[i]);
    }
}

void exit(int x, int y) {

    int i;

    char graph[15][50] = {
      "   〇〇〇〇                          〇〇〇〇",
      "  〇〇〇〇〇                        〇〇〇〇〇",
      " 〇〇〇〇〇〇                      〇〇〇〇〇〇",
      "  〇〇〇〇〇                        〇〇〇〇〇",
      "   〇〇〇〇                          〇〇〇〇",
      "     |  |          --------            |  |",
      "     |  |         |  出口  |           |  |",
      "     |  |          --------            |  |",
      "     |  |             ||               |  |",
      "   ／ 　 ＼           ||             ／ 　 ＼",
      "",
      "　　　　　  出口にたどり着きました。",
      "",
      "　　　　   　　　終わる：Enter",
      "",
    };

    for (i = 0; i < 15; i++) {
        mvprintw(y + i, x, graph[i]);
    }
}

void view(int a) {

    initscr();
    start_color();
    switch (a){
    case 1:
        tree1(1, 1);
        break;
    case 2:
        tree2(1, 1);
        break;
    case 3:
        tree3(1, 1);
        break;
    case 4:
        hole(1, 1);
        break;
    case 5:
        monster(1, 1);
        break;
    case 6:
        board(1, 1);
        break;
    case 7:
        treasure(1, 1);
        break;
    case 8:
        exit(1, 1);
        break;
    case 9:
        hidden(1, 1);
        break;
    }
    getch();
    endwin();
}