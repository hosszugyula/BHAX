#include <stdio.h>
#include <stdlib.h>
#include <curses.h>
#include <unistd.h>

int main ( void ) 
{
    WINDOW *ablak;
    ablak = initscr ();
    noecho ();
    cbreak ();
    nodelay (ablak, true);

    int xj = 0;
    int xk = 0;
    int yj = 0;
    int yk = 0;

    int mx = 79 * 2;
    int my = 20 * 2;

    for ( ;; ) {

        xj = (xj-1) % mx;
        xk = (xk + 1) % mx;

        yj = (yj - 1) % my;
        yk = (yk + 1) % my;

        clear ();

        mvprintw (0, 0,
            "-------------------------------------------------------------------------------");
        mvprintw (20, 0,
            "-------------------------------------------------------------------------------");
        mvprintw(abs ((yj + (my - yk)) / 2),
                 abs ((xj + (mx - xk)) / 2), "o");

        refresh ();
        usleep ( 50000 );

    }

    return 0;
}
