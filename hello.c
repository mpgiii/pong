#include <stdio.h>
#include <curses.h>

int main(int argc, char* argv[]) {
    /* start up curses */
    initscr();

    clear();                 /* clear screen */
    move(10, 20);            /* row 10, column 20 */
    addstr("Hello, world!"); /* add a string */
    move(LINES-1, 0);        /* move to LL */
    refresh();               /* refresh screen */
    getch();                 /* wait for input */
    endwin();                /* end curses */
}
