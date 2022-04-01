
AMARA METU@DESKTOP-36DOFE3 MINGW64 ~ (master)
$ ls
'#70 DAYS.ipynb'
 319676
 alx-low_level_programming/
 alx-system_engineering-devops/
 alx-zero_day/
 anaconda3/
 AppData/
'Application Data'@
 asssdddd.ipynb
 Autodesk/
 Betty/
'BMI calculation.ipynb'
'console.log('\''good'\'');.js'
 Contacts/
 Cookies@
 dear.ipynb
 Desktop/
 df/
 Documents/
 Downloads/
 Favorites/
'Hamoye B.ipynb'
 HAMOYE2.ipynb
 IMAG4589.jpg
 IMAG4590.jpg
 IMAG4591.jpg
 IMAG4592.jpg
 IMAG4593.jpg
 IMAG4594.jpg
 IMAG4595.jpg
 IMAG4596.jpg
 IMAG4597.jpg
 IMAG4598.jpg
 IMAG4600.jpg
 IMAG4601.jpg
 IMAG4602.jpg
 IMAG4603.jpg
 IMAG4604.jpg
 IMAG4605.jpg
 IMAG4606.jpg
 IMAG4607.jpg
 IMAG4608.jpg
 IMAG4609.jpg
 IMAG4610.jpg
 IMAG4611.jpg
 IMAG4612.jpg
 IMAG4613.jpg
 IMAG4614.jpg
 IMAG4615.jpg
 IMAG4616.jpg
 IMAG4617.jpg
 IMAG4618.jpg
 IMAG4619.jpg
 IMAG4620.jpg
 IMG_20180809_021641_93.jpg
 IntelGraphicsProfiles/
 KNN.ipynb
 KPMG.ipynb
 Links/
'Local Settings'@
 Music/
'My Documents'@
 NecheyGrace.github.io/
 NetHood@
 NTUSER.DAT
 ntuser.dat.LOG1
 ntuser.dat.LOG2
 NTUSER.DAT{c0c69796-d4b4-11e9-8066-851776522287}.TM.blf
 NTUSER.DAT{c0c69796-d4b4-11e9-8066-851776522287}.TMContainer00000000000000000001.regtrans-ms
 NTUSER.DAT{c0c69796-d4b4-11e9-8066-851776522287}.TMContainer00000000000000000002.regtrans-ms
 ntuser.ini
 OneDrive/
 Pictures/
 PrintHood@
 Recent@
'Saved Games'/
'SCA TECHNICAL ASSESSMENT.ipynb'
'SCAMP ASSESSMENT.ipynb'
 Searches/
 SendTo@
'Start Menu'@
 Templates@
'test score.ipynb'
'Untitled Folder'/
 Untitled.ipynb
 Untitled1.ipynb
 Untitled-1.py
 Untitled4.ipynb
 Untitled5.ipynb
 Untitled6.ipynb
 Vagrantfile
 Videos/
'VirtualBox VMs'/
 zero_day/
'ZINDI HACKATHON.ipynb'

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~ (master)
$ cd alx-low_level_programming

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming (master)
$ mkdir 0x0A-argc_argv

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming (master)
$ ls
0-memset.c                         0x05-pointers_arrays_strings/
0x00-hello_world/                  0x06-pointers_arrays_strings/
0x01-variables_if_else_while/      0x07-pointers_arrays_strings/
0x02-functions_nested_loops/       0x08-recursion/
0x03-debugging/                    0x0A-argc_argv/
0x04-more_functions_nested_loops/  main.h

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming (master)
$ cd 0x0A-argc_argv

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ cat > 0-whatsmyname.c
#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argc;
printf("%s\n", argv[0]);

return (0);
}

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ echo 'The README for the argc and argv task.' > README.md

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ ls
0-whatsmyname.c  README.md

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git add .
warning: LF will be replaced by CRLF in 0x0A-argc_argv/0-whatsmyname.c.
The file will have its original line endings in your working directory
warning: LF will be replaced by CRLF in 0x0A-argc_argv/README.md.
The file will have its original line endings in your working directory
git
AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git commit -m "A program that prints its name, followed by a new line."
[master 6995925] A program that prints its name, followed by a new line.
 2 files changed, 19 insertions(+)
 create mode 100644 0x0A-argc_argv/0-whatsmyname.c
 create mode 100644 0x0A-argc_argv/README.md

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git push
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (5/5), 622 bytes | 155.00 KiB/s, done.
Total 5 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/NecheyGrace/alx-low_level_programming.git
   acb02aa..6995925  master -> master

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ cat > main.h
int _putchar(char c);
int check_num(char *str);

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ cat > _putchar.c
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$  git add .
warning: LF will be replaced by CRLF in 0x0A-argc_argv/_putchar.c.
The file will have its original line endings in your working directory
warning: LF will be replaced by CRLF in 0x0A-argc_argv/main.h.
The file will have its original line endings in your working directory

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git commit -m "A program that prints its name, followed by a new line."
[master 0f23a26] A program that prints its name, followed by a new line.
 2 files changed, 15 insertions(+)
 create mode 100644 0x0A-argc_argv/_putchar.c
 create mode 100644 0x0A-argc_argv/main.h

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$  git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (5/5), 656 bytes | 164.00 KiB/s, done.
Total 5 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/NecheyGrace/alx-low_level_programming.git
   6995925..0f23a26  master -> master

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ cat > 1-args.c
#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%i\n", argc - 1);

return (0);
}

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git add .
warning: LF will be replaced by CRLF in 0x0A-argc_argv/1-args.c.
The file will have its original line endings in your working directory

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git commit -m "#include <stdio.h>
> #include "main.h"
>
> /**
>  * main - print the name of the program
>  * @argc: Count arguments
>  * @argv: Arguments
>  *
>  * Return: Always 0 (Success)
>  */
>
> int main(int argc, char *argv[])
> {
> (void) argv; /*Ignore argv*/
> printf("%i\n", argc - 1);
>
> return (0);
> }
> bash: unexpected EOF while looking for matching `"'
bash: syntax error: unexpected end of file

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git commit -m "A program that prints the number of arguments passed into it."
[master a60c0cb] A program that prints the number of arguments passed into it.
 1 file changed, 18 insertions(+)
 create mode 100644 0x0A-argc_argv/1-args.c

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git push
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 546 bytes | 182.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/NecheyGrace/alx-low_level_programming.git
   0f23a26..a60c0cb  master -> master

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ cat > 2-args.c
#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

/*Declaring variables*/
int count = 0;

if (argc > 0)
{
/*WHILE - Print each arguments*/
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git add .
warning: LF will be replaced by CRLF in 0x0A-argc_argv/2-args.c.
The file will have its original line endings in your working directory

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git commit -m "A program that prints all arguments it receives."
[master caccd1f] A program that prints all arguments it receives.
 1 file changed, 28 insertions(+)
 create mode 100644 0x0A-argc_argv/2-args.c

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git push
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 594 bytes | 148.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/NecheyGrace/alx-low_level_programming.git
   a60c0cb..caccd1f  master -> master

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ cat > 3-mul.c

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~ (master)
$ ls
'#70 DAYS.ipynb'
 319676
 alx-low_level_programming/
 alx-system_engineering-devops/
 alx-zero_day/
 anaconda3/
 AppData/
'Application Data'@
 asssdddd.ipynb
 Autodesk/
 Betty/
'BMI calculation.ipynb'
'console.log('\''good'\'');.js'
 Contacts/
 Cookies@
 dear.ipynb
 Desktop/
 df/
 Documents/
 Downloads/
 Favorites/
'Hamoye B.ipynb'
 HAMOYE2.ipynb
 IMAG4589.jpg
 IMAG4590.jpg
 IMAG4591.jpg
 IMAG4592.jpg
 IMAG4593.jpg
 IMAG4594.jpg
 IMAG4595.jpg
 IMAG4596.jpg
 IMAG4597.jpg
 IMAG4598.jpg
 IMAG4600.jpg
 IMAG4601.jpg
 IMAG4602.jpg
 IMAG4603.jpg
 IMAG4604.jpg
 IMAG4605.jpg
 IMAG4606.jpg
 IMAG4607.jpg
 IMAG4608.jpg
 IMAG4609.jpg
 IMAG4610.jpg
 IMAG4611.jpg
 IMAG4612.jpg
 IMAG4613.jpg
 IMAG4614.jpg
 IMAG4615.jpg
 IMAG4616.jpg
 IMAG4617.jpg
 IMAG4618.jpg
 IMAG4619.jpg
 IMAG4620.jpg
 IMG_20180809_021641_93.jpg
 IntelGraphicsProfiles/
 KNN.ipynb
 KPMG.ipynb
 Links/
'Local Settings'@
 Music/
'My Documents'@
 NecheyGrace.github.io/
 NetHood@
 NTUSER.DAT
 ntuser.dat.LOG1
 ntuser.dat.LOG2
 NTUSER.DAT{c0c69796-d4b4-11e9-8066-851776522287}.TM.blf
 NTUSER.DAT{c0c69796-d4b4-11e9-8066-851776522287}.TMContainer00000000000000000001.regtrans-ms
 NTUSER.DAT{c0c69796-d4b4-11e9-8066-851776522287}.TMContainer00000000000000000002.regtrans-ms
 ntuser.ini
 OneDrive/
 Pictures/
 PrintHood@
 Recent@
'Saved Games'/
'SCA TECHNICAL ASSESSMENT.ipynb'
'SCAMP ASSESSMENT.ipynb'
 Searches/
 SendTo@
'Start Menu'@
 Templates@
'test score.ipynb'
'Untitled Folder'/
 Untitled.ipynb
 Untitled1.ipynb
 Untitled-1.py
 Untitled4.ipynb
 Untitled5.ipynb
 Untitled6.ipynb
 Vagrantfile
 Videos/
'VirtualBox VMs'/
 zero_day/
'ZINDI HACKATHON.ipynb'

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~ (master)
$ cd alx-low_level_programming

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming (master)
$ mkdir 0x0A-argc_argv

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming (master)
$ ls
0-memset.c                         0x05-pointers_arrays_strings/
0x00-hello_world/                  0x06-pointers_arrays_strings/
0x01-variables_if_else_while/      0x07-pointers_arrays_strings/
0x02-functions_nested_loops/       0x08-recursion/
0x03-debugging/                    0x0A-argc_argv/
0x04-more_functions_nested_loops/  main.h

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming (master)
$ cd 0x0A-argc_argv

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ cat > 0-whatsmyname.c
#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argc;
printf("%s\n", argv[0]);

return (0);
}

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ echo 'The README for the argc and argv task.' > README.md

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ ls
0-whatsmyname.c  README.md

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git add .
warning: LF will be replaced by CRLF in 0x0A-argc_argv/0-whatsmyname.c.
The file will have its original line endings in your working directory
warning: LF will be replaced by CRLF in 0x0A-argc_argv/README.md.
The file will have its original line endings in your working directory
git
AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git commit -m "A program that prints its name, followed by a new line."
[master 6995925] A program that prints its name, followed by a new line.
 2 files changed, 19 insertions(+)
 create mode 100644 0x0A-argc_argv/0-whatsmyname.c
 create mode 100644 0x0A-argc_argv/README.md

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git push
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (5/5), 622 bytes | 155.00 KiB/s, done.
Total 5 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/NecheyGrace/alx-low_level_programming.git
   acb02aa..6995925  master -> master

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ cat > main.h
int _putchar(char c);
int check_num(char *str);

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ cat > _putchar.c
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$  git add .
warning: LF will be replaced by CRLF in 0x0A-argc_argv/_putchar.c.
The file will have its original line endings in your working directory
warning: LF will be replaced by CRLF in 0x0A-argc_argv/main.h.
The file will have its original line endings in your working directory

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git commit -m "A program that prints its name, followed by a new line."
[master 0f23a26] A program that prints its name, followed by a new line.
 2 files changed, 15 insertions(+)
 create mode 100644 0x0A-argc_argv/_putchar.c
 create mode 100644 0x0A-argc_argv/main.h

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$  git push
Enumerating objects: 7, done.
Counting objects: 100% (7/7), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (5/5), 656 bytes | 164.00 KiB/s, done.
Total 5 (delta 1), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To https://github.com/NecheyGrace/alx-low_level_programming.git
   6995925..0f23a26  master -> master

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ cat > 1-args.c
#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%i\n", argc - 1);

return (0);
}

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git add .
warning: LF will be replaced by CRLF in 0x0A-argc_argv/1-args.c.
The file will have its original line endings in your working directory

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git commit -m "#include <stdio.h>
> #include "main.h"
>
> /**
>  * main - print the name of the program
>  * @argc: Count arguments
>  * @argv: Arguments
>  *
>  * Return: Always 0 (Success)
>  */
>
> int main(int argc, char *argv[])
> {
> (void) argv; /*Ignore argv*/
> printf("%i\n", argc - 1);
>
> return (0);
> }
> bash: unexpected EOF while looking for matching `"'
bash: syntax error: unexpected end of file

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git commit -m "A program that prints the number of arguments passed into it."
[master a60c0cb] A program that prints the number of arguments passed into it.
 1 file changed, 18 insertions(+)
 create mode 100644 0x0A-argc_argv/1-args.c

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git push
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 546 bytes | 182.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/NecheyGrace/alx-low_level_programming.git
   0f23a26..a60c0cb  master -> master

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ cat > 2-args.c
#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{

/*Declaring variables*/
int count = 0;

if (argc > 0)
{
/*WHILE - Print each arguments*/
while (count < argc)
{
printf("%s\n", argv[count]);
count++;
}
}
return (0);
}

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git add .
warning: LF will be replaced by CRLF in 0x0A-argc_argv/2-args.c.
The file will have its original line endings in your working directory

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git commit -m "A program that prints all arguments it receives."
[master caccd1f] A program that prints all arguments it receives.
 1 file changed, 28 insertions(+)
 create mode 100644 0x0A-argc_argv/2-args.c

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ git push
Enumerating objects: 6, done.
Counting objects: 100% (6/6), done.
Delta compression using up to 2 threads
Compressing objects: 100% (4/4), done.
Writing objects: 100% (4/4), 594 bytes | 148.00 KiB/s, done.
Total 4 (delta 2), reused 0 (delta 0), pack-reused 0
remote: Resolving deltas: 100% (2/2), completed with 2 local objects.
To https://github.com/NecheyGrace/alx-low_level_programming.git
   a60c0cb..caccd1f  master -> master

AMARA METU@DESKTOP-36DOFE3 MINGW64 ~/alx-low_level_programming/0x0A-argc_argv (master)
$ cat > 3-mul.c
nclude "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
int a, b;
if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
printf("%d\n", a *b);
return (0);
}
printf("Error\n");
return (1);
}
