#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <ShellApi.h>
#include <unistd.h>

int main() {
  if ( access( "run.bat", F_OK ) != -1) {
    ShellExecute(NULL, "open", "run.bat", NULL, NULL, 0);
  } else {
    printf("You seem to be missing the run.bat file needed to start the bot.\nMove this .exe file to your selfbot folder, then try again.\nPress Enter to continue...");
    getchar();
  }
  return 0;
}