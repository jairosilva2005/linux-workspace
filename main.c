/*
  By Jairo Silva
  GitHub: https://github.com/jairosilva2005
*/

#include <stdio.h>
void repositories();
void installCode();
void installSublime();
void installGimp();
void linuxGuides();
void installNode();
void updateNode();

int main() {
  int option;

  printf("Build Linux Workspace in minutes :D\n");
  printf("[1] > Update and upgrade repositories\n");
  printf("[2] > Install Visual Studio Code\n");
  printf("[3] > Install Sublime Text 3\n");
  printf("[4] > Install Gimp image editor\n");
  printf("[5] > Install Node.js (x64)\n");
  printf("[6] > Update Node.js / Managers\n");
  printf("[7] > Exit.\n");
  printf("Select your option -> ");

  scanf("%i", &option);

  switch (option) {
    case 1:
      repositories();
      break;
    case 2:
      installCode();
      break;
    case 3:
      installSublime();
      break;
    case 4:
      installGimp();
      break;
    case 5:
      installNode();
      break;
    case 6:
      updateNode();
      break;
    case 7:
      printf("Bye.");
      break;
    default:
      main();
      break;
  }

  return 0;
}

void repositories() {
    int option;

    printf("Build Linux Workspace in minutes :D\n");
    printf("[1] -> Update repositories\n");
    printf("[2] -> Upgrade repositories\n");
    printf("[3] -> Do all operations [Recommended for beginners]\n");
    printf("[4] -> return to start\n");
    printf("Select your option -> ");
    scanf("%i", &option);

    switch(option) {
        case 1:
            system("sh ./data/repositories/update_repositories.sh");
            repositories();
        break;
        case 2:
            system("sh ./data/repositories/upgrade_repositories.sh");
            repositories();
        break;
        case 3:
            system("sh ./data/repositories/full_operation.sh");
            repositories();
        break;
        case 4:
            main();
        break;
        default:
            printf("Return to start...\n");
            main();
        break;
    }
}

void installCode() {
    printf("Downloading and installing Visual Studio Code\n");
    system("sh ./data/visual_studio_code/install.sh");
    main();
}

void installSublime() {
    printf("Downloading and installing Sublime Text 3\n");
    system("bash ./data/sublime_text/gpgkey.sh");
    system("clear");
    printf("Downloading and installing Sublime text 3\n");
    int option;

    printf("[1] -> Stable version [Default]\n");
    printf("[2] -> Development version\n");
    printf("Select your option -> ");
    
    scanf("%i", &option);
    
    if(option == 1) {
    	system("sh ./data/sublime_text/install_stable.sh");
    } else if(option == 2) {
    	system("sh ./data/sublime_text/install_dev.sh");
    } else {
    	system("sh ./data/sublime_text/install_stable.sh");
    }
    main();
}

void installGimp() {
    printf("Installing Gimp image editor\n");
    system("sh ./data/gimp/install.sh");
    main();
}

void installNode() {
  printf("Instalando...\n");
  system("sh ./data/node/install.sh");
  main();
}

void updateNode() {
  printf("Update Node.js / Managers\n");
  system("sh ./data/node/update.sh");
  main();
}
