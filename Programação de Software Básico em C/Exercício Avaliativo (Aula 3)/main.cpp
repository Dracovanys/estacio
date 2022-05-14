#include<graphics.h>

int main ()
{
	
	initwindow (400, 400);
		
	char time[15];
	
	int h_ = 2;
	int m_ = 57;
	int pm_am_ = 1;
	
	settextjustify(CENTER_TEXT, CENTER_TEXT);
	settextstyle(DEFAULT_FONT, HORIZ_DIR, 3);
	setcolor(RED);
	
	//Contagem iniciada pelos segundos
	for (int s_ = 21; s_ <= 60; s_++)
	{			
		//Troca o texto AM para PM e vice-versa. Atualiza o relógio a cada segundo
		if (pm_am_ == 0)
		{
			sprintf(time, "%d:%d:%d AM", h_, m_, s_);
			outtextxy(getmaxx()/2, getmaxy()/2, time);	
		} else 
		{
			sprintf(time, "%d:%d:%d PM", h_, m_, s_);
			outtextxy(getmaxx()/2, getmaxy()/2, time);
		}
			
		delay(1000);
		
		//Passando 1 minuto
		if (s_ == 59) 
		{
			s_ = 0;
			m_++;
			//Passando 1 hora
			if (m_ == 60) 
			{
				m_ = 0;
				h_++;
				//Passando de AM para PM
				if (h_ == 12 && pm_am_ == 0) {
					h_ = 0;
					pm_am_ = 1;
				} else {
					h_ = 0;
					pm_am_ = 0;
				}				
			}	
		}
		cleardevice();		
	}	
	getch();
}
