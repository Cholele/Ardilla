#include<gl/glut.h>
int ancho = 800, alto = 600;

void IniciarConfiguracion() {
	//glClearColor(1, 0, 1, 1);
	//glColor3f(0.0, 0.0, 1.0); //Azul
	glLineWidth(3.0);
	glOrtho(-150, 350, -50, 260, 1, -1);
}

void DibujarPoligono()
{
	glClear(GL_COLOR_BUFFER_BIT);

	//==================================================================================
	//		(GL_POLYGON); TU LES DAS LOS VERTICES Y ESTE LO VA CERRANDO EN ORDEN
	//==================================================================================

	//Triangulo
	glColor3f(0.0, 0.0, 1.0); //Azul
	glBegin(GL_POLYGON);
	glVertex2i(50, 50);
	glVertex2i(50, 150);
	glVertex2i(100, 100);
	glEnd();

	//Cuadrado
	glColor3f(0.5f, 1.0f, 1.0f); //Cyan
	glBegin(GL_POLYGON);
	glVertex2i(50, 200);
	glVertex2i(150, 200);
	glVertex2i(150, 300);
	glVertex2i(50, 300);
	glEnd();

	//Rectangulo
	glColor3f(0.5f, 0.5f, 0.5f); //Violeta
	glBegin(GL_POLYGON);
	glVertex2i(350, 400);
	glVertex2i(650, 400);
	glVertex2i(650, 500);
	glVertex2i(350, 500);
	glEnd();

	//Hexagono
	glColor4f(1.0f, 1.0f, 0.0f, 0.0f); //Amarillo
	glBegin(GL_POLYGON);
	glVertex2i(100, 400);
	glVertex2i(200, 400);
	glVertex2i(250, 500);
	glVertex2i(200, 600);
	glVertex2i(100, 600);
	glVertex2i(50, 500);
	glEnd();


	//==================================================================================
	//		(GL_POLYGON); SI ESTABLACE EL ORDEN DE LOS VERTICES
	//==================================================================================

	//Cuadrado_2
	glColor3f(1.0f, 0.5f, 0.0f); //Naranja
	glBegin(GL_QUADS);
	glVertex2i(250, 100);
	glVertex2i(350, 100);
	glVertex2i(350, 200);
	glVertex2i(250, 200);
	glEnd();

	//Cuadrado_2
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.5f, 0.0f);		glVertex2i(450, 100);	//Naranja
	glColor4f(1.0f, 1.0f, 0.0f, 0.0f);	glVertex2i(550, 100);	//Amarillo
	glColor3f(0.5f, 0.5f, 0.5f);		glVertex2i(550, 200);	//Violeta
	glColor3f(0.5f, 1.0f, 1.0f);		glVertex2i(450, 200);	//Cyan
	glEnd();

	//Cuadrado_3
	glColor4f(1.0f, 1.0f, 0.0f, 0.0f); //Amarillo
	glBegin(GL_QUAD_STRIP);
	glVertex2i(450, 250);
	glVertex2i(450, 350);
	glVertex2i(550, 250);
	glVertex2i(550, 350);

	glVertex2i(600, 220);
	glVertex2i(650, 300);
	glEnd();

	glFlush();
}



void Cabeza_Y_Aletas()
{
	//Cabeza
	glColor3f(0.27451f, 0.03922f, 0.03922f);
	glBegin(GL_POLYGON);
	glVertex2i(90, 146);
	glVertex2i(110, 146);
	glVertex2i(116, 168);
	glVertex2i(100, 182);
	glVertex2i(84, 168);
	glEnd();

	//Aleta izquierda
	glColor3f(0.12157f, 0.00392f, 0.00392f);
	glBegin(GL_POLYGON);
	glVertex2i(38, 133);								//A
	glVertex2i(20, 110);								//B
	glVertex2i(24, 137);								//C
	glVertex2i(44, 154);								//D
	glVertex2i(75, 154);								//E
	glVertex2f(82.6607231679752, 141.3727012965009);	//F
	glVertex2i(69, 133);								//G
	glEnd();

	//Triangulo_Izq
	glColor3f(0.22353f, 0.01176f, 0.01176f);
	glBegin(GL_POLYGON);
	glVertex2i(38, 133);								//A
	glVertex2i(44, 154);								//D
	glVertex2i(69, 133);								//G
	glEnd();

	//Trapecio_Izq
	glColor3f(0.27451f, 0.03922f, 0.03922f);
	glBegin(GL_POLYGON);
	glVertex2f(82.6607231679752, 141.3727012965009);	//F
	glVertex2i(69, 133);								//B
	glVertex2i(44, 154);								//D
	glVertex2i(75, 154);								//E
	glEnd();

	//Aleta Derecha
	glColor3f(0.12157f, 0.00392f, 0.00392f);
	glBegin(GL_POLYGON);
	glVertex2i(161, 133);								//A
	glVertex2i(179, 110);								//B
	glVertex2i(175, 137);								//C
	glVertex2i(155, 154);								//D
	glVertex2i(126, 154);								//E
	glVertex2f(116.9977584394531, 141.3727012965009);   //F
	glVertex2i(130, 133);							    //G
	glEnd();

	//Triangulo_Dereach
	glColor3f(0.22353f, 0.01176f, 0.01176f);
	glBegin(GL_POLYGON);
	glVertex2i(161, 133);								//A
	glVertex2i(155, 154);								//D
	glVertex2i(130, 133);							    //G
	glEnd();

	//Trapecio_Derecha
	glColor3f(0.27451f, 0.03922f, 0.03922f);
	glBegin(GL_POLYGON);
	glVertex2i(126, 154);								//E
	glVertex2f(116.9977584394531, 141.3727012965009);   //F
	glVertex2i(130, 133);							    //G
	glVertex2i(155, 154);								//D
	glEnd();
}

void Caparazon_Y_Centro()
{
	//Caparazon
	glColor3f(0.5f, 1.0f, 1.0f); //Cyan
	glBegin(GL_POLYGON);
	glVertex2i(100, 152);								//A
	glVertex2i(69, 133);								//B
	glVertex2i(53, 92);									//C
	glVertex2i(69, 54);									//D

	glVertex2i(100, 25);								//E
	glVertex2i(130, 54);								//F
	glVertex2i(147, 92);								//G
	glVertex2i(130, 133);								//H
	glEnd();

	//Caparazon_forma_1
	glColor3f(0.40000f, 0.10980f, 0.10980f);
	glBegin(GL_POLYGON);
	glVertex2f(91.6759259259259, 54);					//A
	glVertex2f(108.0555555555556, 54);					//B
	glVertex2f(115.4967318726994, 39.9687166592821);	//C	
	glVertex2i(100, 25);								//D
	glVertex2f(83.9989580538708, 39.9687166592821);		//E
	glEnd();

	//Caparazon_forma_2
	glColor3f(0.42353f, 0.14902f, 0.14902f);
	glBegin(GL_POLYGON);
	glVertex2i(116.7184195335071, 71.5848116454051);	//A
	glVertex2i(108.0555555555556, 54);					//B
	glVertex2i(91.6759259259259, 54);					//C
	glVertex2i(82.5781457008824, 71.5848116454051);		//D
	glEnd();

	//Caparazon_forma_3
	glColor3f(0.76863f, 0.45098f, 0.45098f);
	glBegin(GL_POLYGON);
	glVertex2i(84.2390507718453, 102.1750637303498);	//A
	glVertex2i(115.1727676002421, 102.1750637303498);	//B
	glVertex2i(125.1949059934205, 86.4718775098548);	//C
	glVertex2i(116.7184195335071, 71.5848116454051);	//D
	glVertex2i(82.5781457008824, 71.5848116454051);		//E
	glVertex2i(74.0769785393403, 86.4718775098548);		//F
	glEnd();

	//Caparazon_forma_4
	glColor3f(0.83137f, 0.37647f, 0.37647f);
	glBegin(GL_POLYGON);
	glVertex2i(90.0336874467459, 121.6775719894962);	//A
	glVertex2i(110.732674693365, 121.6775719894962);	//B
	glVertex2i(121.0193902179758, 114.4876630441579);	//C
	glVertex2i(115.1727676002421, 102.1750637303498);	//D
	glVertex2i(84.2390507718453, 102.1750637303498);	//E
	glVertex2i(78.3837898138175, 114.4876630441579);	//F
	glEnd();

	//Caparazon_forma_5
	glColor3f(0.83137f, 0.37647f, 0.37647f);
	glBegin(GL_POLYGON);
	glVertex2i(100, 152);								//A
	glVertex2f(116.9977584394531, 141.3727012965009);   //B
	glVertex2i(110.732674693365, 121.6775719894962);	//C
	glVertex2i(90.0336874467459, 121.6775719894962);	//D
	glVertex2f(82.6607231679752, 141.3727012965009);	//E
	glEnd();
}

void Costado_Derecho()
{
	//Forma_1
	glColor3f(0.60784f, 0.10588f, 0.10588f);
	glBegin(GL_POLYGON);
	glVertex2f(116.9977584394531, 141.3727012965009);   //F
	glVertex2i(130, 133);							    //G		
	glVertex2i(121.0193902179758, 114.4876630441579);	//C
	glVertex2i(110.732674693365, 121.6775719894962);	//B
	glEnd();

	//Forma_2
	glColor3f(0.62745f, 0.18824f, 0.18824f);
	glBegin(GL_POLYGON);
	glVertex2i(130, 133);								//H
	glVertex2i(147, 92);								//G
	//Centro_F3
	glVertex2i(125.1949059934205, 86.4718775098548);	//C
	glVertex2i(115.1727676002421, 102.1750637303498);	//B
	glEnd();

	//Forma_3
	glColor3f(0.58824f, 0.25882f, 0.25882f);
	glBegin(GL_POLYGON);
	glVertex2i(147, 92);								//G
	glVertex2i(130, 54);								//F
	//Centro_F3
	glVertex2i(116.7184195335071, 71.5848116454051);	//D
	glVertex2i(125.1949059934205, 86.4718775098548);	//C
	glEnd();


	//Forma_4
	glColor3f(0.47451f, 0.29412f, 0.29412f);
	glBegin(GL_POLYGON);
	glVertex2i(130, 54);								//F
	glVertex2f(115.4967318726994, 39.9687166592821);	//D
	//Centro_F2
	glVertex2i(108.0555555555556, 54);					//B
	glVertex2i(116.7184195335071, 71.5848116454051);	//A
	glEnd();


}

void Costado_Izquierdo()
{
	//Forma_1
	glColor3f(0.60784f, 0.10588f, 0.10588f);
	glBegin(GL_POLYGON);
	glVertex2f(82.6607231679752, 141.3727012965009);	//F_Aleta_Izq
	glVertex2i(90.0336874467459, 121.6775719894962);	//A_Centro_F4
	glVertex2i(78.3837898138175, 114.4876630441579);	//F_Centro_F4
	glVertex2i(69, 133);								//G_Aleta_Izq
	glEnd();

	//Forma_2
	glColor3f(0.62745f, 0.18824f, 0.18824f);
	glBegin(GL_POLYGON);
	glVertex2i(69, 133);								//B
	glVertex2i(84.2390507718453, 102.1750637303498);	//A
	glVertex2i(74.0769785393403, 86.4718775098548);		//F
	glVertex2i(53, 92);									//C
	glEnd();


	//Forma_3
	glColor3f(0.58824f, 0.25882f, 0.25882f);
	glBegin(GL_POLYGON);
	glVertex2i(53, 92);									//C
	glVertex2i(69, 54);									//D
	//Centro_F3
	glVertex2f(82.5781457008824, 71.5848116454051);		//E
	glVertex2f(74.0769785393403, 86.4718775098548);		//F
	glEnd();


	//Forma_4
	glColor3f(0.47451f, 0.29412f, 0.29412f);
	glBegin(GL_POLYGON);
	//Caparazon
	glVertex2i(69, 54);									//D
	glVertex2f(83.9989580538708, 39.9687166592821);		//B
	//Pie Izquierdo
	glVertex2f(91.6759259259259, 54);					//C
	glVertex2f(82.5781457008824, 71.5848116454051);		//D
	glEnd();
}

void Piernas()
{
	//Pie izquierdo
	glColor3f(0.42353f, 0.16471f, 0.16471f);
	glBegin(GL_POLYGON);
	glVertex2i(69, 54);								//A
	glVertex2f(83.9989580538708, 39.9687166592821); //B
	glVertex2i(73, 25);								//C
	glVertex2i(65, 25);								//D
	glVertex2i(56, 38);								//E
	glEnd();

	//Pie derecho
	glColor3f(0.42353f, 0.16471f, 0.16471f);
	glBegin(GL_POLYGON);
	glVertex2i(144, 38);								//A
	glVertex2i(135, 25);								//B
	glVertex2i(127, 25);								//C
	glVertex2f(115.4967318726994, 39.9687166592821);	//D
	glVertex2i(130, 54);								//E
	glEnd();
}

void DibujarTortuga()
{
	glClear(GL_COLOR_BUFFER_BIT);
	Cabeza_Y_Aletas();
	Caparazon_Y_Centro();
	Costado_Derecho();
	Costado_Izquierdo();
	Piernas();
	glFlush();
}




int main(int argc, char* args[]) {
	glutInit(&argc, args);
	glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(ancho, alto);
	glutInitWindowPosition(50, 50);
	glutCreateWindow("Demo 4 Triangulos");

	glutDisplayFunc(DibujarTortuga);

	IniciarConfiguracion();
	glutMainLoop();
	return 0;
}