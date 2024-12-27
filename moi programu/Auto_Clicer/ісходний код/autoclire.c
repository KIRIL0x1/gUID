#include <stdio.h>
#include <windows.h>

void clic(){
    while(1)
    {
      if(GetAsyncKeyState(VK_ESCAPE))
      {
        break;
      }
      mouse_event(MOUSEEVENTF_LEFTDOWN,0,0,0,0);
      Sleep(1);
      mouse_event(MOUSEEVENTF_LEFTUP,0,0,0,0);
      Sleep(1); 
    }
}

int main(void){
    system("chcp 65001");
    system("cls");
    printf("Автоклікер запустився нажміть Esc для виходу ");
    clic();
}


