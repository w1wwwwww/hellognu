/* 
    hellogcc - A "Hello World" program implementing the GNU coding standards
    Copyright (C) 2022  w1wwwwww

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include <stdio.h>
#include <string.h>

int
main (int argc, char **argv)
{
  if (argc < 2)
    {
      printf ("Hello, World!\n");
    }
  else if (strcmp ("-V", argv[1]) == 0 || strcmp ("--version", argv[1]) == 0)
    {
      printf
	("hellognu 1.0.0\nCopyright (C) 2022 w1wwwwww.\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n");
    }
  else if (strcmp ("-H", argv[1]) == 0 || strcmp ("--help", argv[1]) == 0)
    {
      printf
	("hellognu - a \"Hello World\" program implementing the GNU coding standards.\nWhen used without any arguments, the program prints a Hello World message.\n--help or -H prints this help message.\n--version or -V prints version information.\nReport bugs to: https://github.com/w1wwwwww/hellogcc/issues .\nhellognu home page: https://github.com/w1wwwwww/hellognu .\nGeneral help using GNU software: https://www.gnu.org/software/gethelp.html .\n");
    }
  else if (strcmp ("-V", argv[1]) == 1 || strcmp ("--version", argv[1]) == 1
	   || strcmp ("-H", argv[1]) == 1 || strcmp ("--help", argv[1]) == 1)
    {
      printf ("ERROR: hellognu: unknown argument\n");
    }
  else
    {
      printf ("ERROR: hellognu: too many arguments\n");
    }

  return 0;
}
