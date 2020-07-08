#include "View.h"
#include <string.h>
#include <curses.h>

void tree1(int x, int y)
{
    int i;

    char graph[15][50] = {
      "                  �Z�Z�Z�Z ",
      "                 �Z�Z�Z�Z�Z",
      "                �Z�Z�Z�Z�Z�Z",
      "                 �Z�Z�Z�Z�Z",
      "                  �Z�Z�Z�Z",
      "                    |  |",
      "                    |  |",
      "                    |  |",
      "                    |  |",
      "                  �^ �@ �_",
      "",
      "�@�@�@�@�@�ڂ̑O�Ɉ�{�̖؂�����܂��B",
      "",
      "�@�@�@�@�@���ɐi�ށFA    �E�ɐi�ށFD",
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
      "         �Z�Z�Z�Z             �Z�Z�Z�Z",
      "        �Z�Z�Z�Z�Z           �Z�Z���Z�Z",
      "       �Z�Z�����Z�Z         �Z�Z�����Z�Z",
      "        �Z�Z�Z�Z�Z           �Z�Z���Z�Z",
      "         �Z�Z�Z�Z             �Z�Z�Z�Z",
      "           |  |                 |  |",
      "           |  |                 |  |",
      "           |  |                 |  |",
      "           |  |                 |  |",
      "         �^ �@ �_             �^ �@ �_",
      "",
      "�@�@�@�@�@  ��{�̖؂�����܂����B",
      "",
      "�@�@���ɐi�ށFA  �܂������i�ށFS  �E�ɐi�ށFD�@",
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
      "     �Z�Z�Z�Z                        �Z�Z�Z�Z",
      "    �Z�Z�Z�Z�Z                      �Z�Z�Z�Z�Z",
      "   �Z�Z�Z�Z�Z�Z                    �Z�Z�Z�Z�Z�Z",
      "    �Z�Z�Z�Z�Z                      �Z�Z�Z�Z�Z",
      "     �Z�Z�Z�Z                        �Z�Z�Z�Z",
      "       |  |                            |  |",
      "       |��|                            |  |",
      "       |  |                            |��|",
      "       |  |                            |  |",
      "     �^ �@ �_                        �^ �@ �_",
      "",
      "",
      "",
      "�@�@           �܂������i�ށFS",
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
      "                   ��������",
      "               ����������������",
      "             ��������������������",
      "           ������������������������",
      "           ������������������������ ",
      "             ��������������������",
      "               ����������������",
      "�@�@�@�@�@�@�@�@ �@��������",
      "",
      "",
      "�@�@�@�@�@  ���ɗ����Ă��܂��܂����B",
      "",
      "�@�@�@�@�@�@�@�@�@�I���FEnter",
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
      "�@�@ �@�@�@�@�@�@�@�^�܁_",
      "�@�@ �@�@�@�@�@�@ (�Q�Q�Q)",
      "                 ��)����(��",
      "�@�@�@ �@�@�@�@�@ (�@���@)",
      "�@�@�@ �@�@�@�@ �@<���[��>",
      "",
      "",
      "",
      "�@�@�@�@�@  �����ɏP���܂����B",
      "",
      "�@�@�@�@�@�@ �@�I���FEnter",
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
      "�@�@�@ �@�@   �Q�Q�Q�Q�Q�Q�Q�Q�Q�Q",
      "             |                    |",
      "             |    �^              |",
      "             |   <-------------   |",
      "             |    �_              |",
      "             |                    |",
      "              --------------------",
      "                       ||",
      "                       ||",
      "",
      "�@�@�@�@�@   �@�Ŕ𔭌����܂����B",
      "",
      "�@�@         ���ɐi�ށFA  �E�ɐi�ށFD�@",
      "",
    };

    for (i = 0; i < 15; i++) {
        mvprintw(y + i, x, graph[i]);
    }
}

void treasure(int x, int y) {

    int i;

    char graph[15][50] = {
      "                 _��________ �Q    ��",
      "               �^__________�^���_",
      "          ��   �_     ��   �_   |",
      "    ��           �________��_�_�^     ��",
      "              �� �^          �^|   ",
      "       ��      �^___��_____�^  ��",
      "              |          ��|   |",
      "              ��           |  �^ ��",
      "�@�@�@�@�@��  |______��____|��        ��",
      "",
      "",
      "�@�@�@�@�@  �@�󔠂������܂����B",
      "",
      "�@�@�@ �@�@�@�@�I���FEnter",
      "",
    };

    for (i = 0; i < 15; i++) {
        mvprintw(y + i, x, graph[i]);
    }
}

void hidden(int x, int y) {

    int i;

    char graph[15][50] = {
      "       �Z�Z�Z�Z                 �Z�Z�Z�Z",
      "      �Z�Z�Z�Z�Z               �Z�Z�Z�Z�Z",
      "     �Z�Z�Z�Z�Z�Z             �Z�Z�Z�Z�Z�Z",
      "      �Z�Z�Z�Z�Z    ��         �Z�Z�Z�Z�Z",
      "       �Z�Z�Z�Z            ��   �Z�Z�Z�Z",
      "         |  |  ��              �� |  |",
      "         |  |      ____��___      |  |",
      "         |  |    ��         �_    |  |",
      "         |  |    �________���^    |  |",
      "       �^ �@ �_                 �^ �@ �_",
      "",
      "�@�@�@�@�@ �@ �s�v�c�ȏꏊ�ł��I",
      "",
      "�@�@�@�@�@�@�@�@�I���FEnter",
      "",
    };

    for (i = 0; i < 15; i++) {
        mvprintw(y + i, x, graph[i]);
    }
}

void exit(int x, int y) {

    int i;

    char graph[15][50] = {
      "   �Z�Z�Z�Z                          �Z�Z�Z�Z",
      "  �Z�Z�Z�Z�Z                        �Z�Z�Z�Z�Z",
      " �Z�Z�Z�Z�Z�Z                      �Z�Z�Z�Z�Z�Z",
      "  �Z�Z�Z�Z�Z                        �Z�Z�Z�Z�Z",
      "   �Z�Z�Z�Z                          �Z�Z�Z�Z",
      "     |  |          --------            |  |",
      "     |  |         |  �o��  |           |  |",
      "     |  |          --------            |  |",
      "     |  |             ||               |  |",
      "   �^ �@ �_           ||             �^ �@ �_",
      "",
      "�@�@�@�@�@  �o���ɂ��ǂ蒅���܂����B",
      "",
      "�@�@�@�@   �@�@�@�I���FEnter",
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