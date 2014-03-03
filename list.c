#include <stdlib.h>
#include <stdio.h>
#include "listlib.h"

void print_list(list_t *p_list) {
  p_list = p_list;
  // TODO
}

void insert(list_t **pp_list, list_t *p_item, int position) {
  pp_list = pp_list;
  p_item = p_item;
  position = position;
  // TODO
}

int main(void) {
  int quit = 0;
  int choice, position, value, print_after_each_change = 0;
  char filepath[1000];
  list_t *p_list = NULL;
  
  do {
    printf("\n(1) Liste ausgeben  (2) Element anhaengen  (3) Element aktualisieren  (4) Element loeschen\n");
    printf("(5) aus Datei laden  (6) in Datei speichern  (7) Programm beenden  (8) Liste nach jeder Aenderung ausgeben: %s\n", (print_after_each_change ? "ja" : "nein"));
    printf(": ");
    scanf("%d", &choice);
    
    switch(choice) {
      case 1: print_list(p_list); break;
      case 2:
        printf("Element-Wert: ");
        scanf("%d", &value);
        append(&p_list, create_list_item(value, NULL));
        if(print_after_each_change)
          print_list(p_list);
        break;
      case 3:
        printf("Aktualisierungsposition: ");
        scanf("%d", &position);
        printf("neuer Element-Wert: ");
        scanf("%d", &value);
        update(&p_list, create_list_item(value, NULL), position);
        if(print_after_each_change)
          print_list(p_list);
        break;
      case 4:
        printf("Loeschposition: ");
        scanf("%d", &position);
        delete(&p_list, position);
        if(print_after_each_change)
          print_list(p_list);
        break;
      case 5:
        printf("Dateipfad: ");
        scanf("%s", filepath);
        delete_list(p_list);
        p_list = load_from_file(filepath);
        break;
      case 6:
        printf("Dateipfad (Datei wird ueberschrieben!): ");
        scanf("%s", filepath);
        save_to_file(p_list, filepath);
        break;
      case 7: quit = 1; break;
      case 8: print_after_each_change = !print_after_each_change; break;
      default: printf("Ungueltige Eingabe\n");
    }
  } while(!quit);

  delete_list(p_list);
  return 0;
}

