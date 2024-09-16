#include <zephyr/shell/shell.h>

static int cow_handler(const struct shell *shell, 
                      size_t argc,
                      char **argv);

SHELL_CMD_REGISTER(cow, NULL, "Moo!", cow_handler);

static int cow_handler(const struct shell *shell, 
                      size_t argc,
                      char **argv)
{
   ARG_UNUSED(argc);
   ARG_UNUSED(argv);
   
   shell_fprintf(shell,SHELL_VT100_COLOR_YELLOW,"\r\n");
   shell_fprintf(shell,SHELL_VT100_COLOR_YELLOW,"     /)  (\\\r\n");
   shell_fprintf(shell,SHELL_VT100_COLOR_YELLOW,".-._((,~~.))_.-,\r\n");
   shell_fprintf(shell,SHELL_VT100_COLOR_YELLOW," `-.   @@   ,-'\r\n");
   shell_fprintf(shell,SHELL_VT100_COLOR_YELLOW,"   / ,o--o. \\\r\n");
   shell_fprintf(shell,SHELL_VT100_COLOR_YELLOW,"  ( ( .__. ) )\r\n");
   shell_fprintf(shell,SHELL_VT100_COLOR_YELLOW,"   ) `----' (\r\n");
   shell_fprintf(shell,SHELL_VT100_COLOR_YELLOW,"  /          \\\r\n");
   shell_fprintf(shell,SHELL_VT100_COLOR_YELLOW," /            \\\r\n");
   shell_fprintf(shell,SHELL_VT100_COLOR_YELLOW,"/              \\\r\n\r\n");
   shell_fprintf(shell,SHELL_VT100_COLOR_YELLOW,"      MOO!\r\n");

   return 0;
}



