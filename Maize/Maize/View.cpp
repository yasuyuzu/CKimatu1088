#include "View.h"
#include <string.h>
#include <curses.h>

void tree1(int x, int y)
{
    int i;

    char graph[15][50] = {
      "                  ÅZÅZÅZÅZ ",
      "                 ÅZÅZÅZÅZÅZ",
      "                ÅZÅZÅZÅZÅZÅZ",
      "                 ÅZÅZÅZÅZÅZ",
      "                  ÅZÅZÅZÅZ",
      "                    |  |",
      "                    |  |",
      "                    |  |",
      "                    |  |",
      "                  Å^ Å@ Å_",
      "",
      "Å@Å@Å@Å@Å@ñ⁄ÇÃëOÇ…àÍñ{ÇÃñÿÇ™Ç†ÇËÇ‹Ç∑ÅB",
      "",
      "Å@Å@Å@Å@Å@ç∂Ç…êiÇﬁÅFA    âEÇ…êiÇﬁÅFD",
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
      "         ÅZÅZÅZÅZ             ÅZÅZÅZÅZ",
      "        ÅZÅZÅZÅZÅZ           ÅZÅZÅûÅZÅZ",
      "       ÅZÅZÅôÅôÅZÅZ         ÅZÅZÅûÅûÅZÅZ",
      "        ÅZÅZÅZÅZÅZ           ÅZÅZÅûÅZÅZ",
      "         ÅZÅZÅZÅZ             ÅZÅZÅZÅZ",
      "           |  |                 |  |",
      "           |  |                 |  |",
      "           |  |                 |  |",
      "           |  |                 |  |",
      "         Å^ Å@ Å_             Å^ Å@ Å_",
      "",
      "Å@Å@Å@Å@Å@  ìÒñ{ÇÃñÿÇ™åªÇÍÇ‹ÇµÇΩÅB",
      "",
      "Å@Å@ç∂Ç…êiÇﬁÅFA  Ç‹Ç¡Ç∑ÇÆêiÇﬁÅFS  âEÇ…êiÇﬁÅFDÅ@",
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
      "     ÅZÅZÅZÅZ                        ÅZÅZÅZÅZ",
      "    ÅZÅZÅZÅZÅZ                      ÅZÅZÅZÅZÅZ",
      "   ÅZÅZÅZÅZÅZÅZ                    ÅZÅZÅZÅZÅZÅZ",
      "    ÅZÅZÅZÅZÅZ                      ÅZÅZÅZÅZÅZ",
      "     ÅZÅZÅZÅZ                        ÅZÅZÅZÅZ",
      "       |  |                            |  |",
      "       |Åö|                            |  |",
      "       |  |                            |Åô|",
      "       |  |                            |  |",
      "     Å^ Å@ Å_                        Å^ Å@ Å_",
      "",
      "",
      "",
      "Å@Å@           Ç‹Ç¡Ç∑ÇÆêiÇﬁÅFS",
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
      "                   Å°Å°Å°Å°",
      "               Å°Å°Å°Å°Å°Å°Å°Å°",
      "             Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°",
      "           Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°",
      "           Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°Å° ",
      "             Å°Å°Å°Å°Å°Å°Å°Å°Å°Å°",
      "               Å°Å°Å°Å°Å°Å°Å°Å°",
      "Å@Å@Å@Å@Å@Å@Å@Å@ Å@Å°Å°Å°Å°",
      "",
      "",
      "Å@Å@Å@Å@Å@  åäÇ…óéÇøÇƒÇµÇ‹Ç¢Ç‹ÇµÇΩÅB",
      "",
      "Å@Å@Å@Å@Å@Å@Å@Å@Å@èIÇÌÇÈÅFEnter",
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
      "Å@Å@ Å@Å@Å@Å@Å@Å@Å@Å^Å‹Å_",
      "Å@Å@ Å@Å@Å@Å@Å@Å@ (ÅQÅQÅQ)",
      "                 Åº)ÅùÅù(Ç¬",
      "Å@Å@Å@ Å@Å@Å@Å@Å@ (Å@Å§Å@)",
      "Å@Å@Å@ Å@Å@Å@Å@ Å@<ÅÑÅ[ÅÉ>",
      "",
      "",
      "",
      "Å@Å@Å@Å@Å@  âˆï®Ç…èPÇÌÇÍÇ‹ÇµÇΩÅB",
      "",
      "Å@Å@Å@Å@Å@Å@ Å@èIÇÌÇÈÅFEnter",
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
      "Å@Å@Å@ Å@Å@   ÅQÅQÅQÅQÅQÅQÅQÅQÅQÅQ",
      "             |                    |",
      "             |    Å^              |",
      "             |   <-------------   |",
      "             |    Å_              |",
      "             |                    |",
      "              --------------------",
      "                       ||",
      "                       ||",
      "",
      "Å@Å@Å@Å@Å@   Å@ä≈î¬Çî≠å©ÇµÇ‹ÇµÇΩÅB",
      "",
      "Å@Å@         ç∂Ç…êiÇﬁÅFA  âEÇ…êiÇﬁÅFDÅ@",
      "",
    };

    for (i = 0; i < 15; i++) {
        mvprintw(y + i, x, graph[i]);
    }
}

void treasure(int x, int y) {

    int i;

    char graph[15][50] = {
      "                 _Åô________ ÅQ    Åô",
      "               Å^__________Å^ÅôÅ_",
      "          Åô   Å_     Åô   Å_   |",
      "    Åô           Å________Åô_Å_Å^     Åô",
      "              Åô Å^          Å^|   ",
      "       Åô      Å^___Åô_____Å^  Åô",
      "              |          Åô|   |",
      "              Åô           |  Å^ Åô",
      "Å@Å@Å@Å@Å@Åô  |______Åô____|Åô        Åô",
      "",
      "",
      "Å@Å@Å@Å@Å@  Å@ïÛî†Çå©Ç¬ÇØÇ‹ÇµÇΩÅB",
      "",
      "Å@Å@Å@ Å@Å@Å@Å@èIÇÌÇÈÅFEnter",
      "",
    };

    for (i = 0; i < 15; i++) {
        mvprintw(y + i, x, graph[i]);
    }
}

void hidden(int x, int y) {

    int i;

    char graph[15][50] = {
      "       ÅZÅZÅZÅZ                 ÅZÅZÅZÅZ",
      "      ÅZÅZÅZÅZÅZ               ÅZÅZÅZÅZÅZ",
      "     ÅZÅZÅZÅZÅZÅZ             ÅZÅZÅZÅZÅZÅZ",
      "      ÅZÅZÅZÅZÅZ    Åô         ÅZÅZÅZÅZÅZ",
      "       ÅZÅZÅZÅZ            Åô   ÅZÅZÅZÅZ",
      "         |  |  Åô              Åô |  |",
      "         |  |      ____Åô___      |  |",
      "         |  |    Åô         Å_    |  |",
      "         |  |    Å________ÅôÅ^    |  |",
      "       Å^ Å@ Å_                 Å^ Å@ Å_",
      "",
      "Å@Å@Å@Å@Å@ Å@ ïsévãcÇ»èÍèäÇ≈ÇΩÅI",
      "",
      "Å@Å@Å@Å@Å@Å@Å@Å@èIÇÌÇÈÅFEnter",
      "",
    };

    for (i = 0; i < 15; i++) {
        mvprintw(y + i, x, graph[i]);
    }
}

void exit(int x, int y) {

    int i;

    char graph[15][50] = {
      "   ÅZÅZÅZÅZ                          ÅZÅZÅZÅZ",
      "  ÅZÅZÅZÅZÅZ                        ÅZÅZÅZÅZÅZ",
      " ÅZÅZÅZÅZÅZÅZ                      ÅZÅZÅZÅZÅZÅZ",
      "  ÅZÅZÅZÅZÅZ                        ÅZÅZÅZÅZÅZ",
      "   ÅZÅZÅZÅZ                          ÅZÅZÅZÅZ",
      "     |  |          --------            |  |",
      "     |  |         |  èoå˚  |           |  |",
      "     |  |          --------            |  |",
      "     |  |             ||               |  |",
      "   Å^ Å@ Å_           ||             Å^ Å@ Å_",
      "",
      "Å@Å@Å@Å@Å@  èoå˚Ç…ÇΩÇ«ÇËíÖÇ´Ç‹ÇµÇΩÅB",
      "",
      "Å@Å@Å@Å@   Å@Å@Å@èIÇÌÇÈÅFEnter",
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