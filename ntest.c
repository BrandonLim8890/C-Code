/*Brandon Lim */

#include <ncurses.h>
#include <unistd.h>

int main() {

  int x=0, y = 0;

  initscr();
  noecho();
  curs_set(FALSE);

  while(1) {
    clear();
    mvprintw(y,x,"o");
    refresh();

    usleep(30000);
    x++;
  }


  endwin();

  return 0;

}
