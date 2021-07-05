#include<Windows.h>       // buat MS Windows
#include<GL\glut.h>
#include <math.h>

void init()
{
    // warna display
    glClearColor(0.6, 0.8, 0.8, 0.0);
    // Mengatur parameter
    glMatrixMode(GL_PROJECTION);
    // Mengatur Lebar dan tinggi window(Min Width, Max Width, Min Height, Max Height)
    gluOrtho2D(0.0, 800, 0.0, 600);
}
void home()
{
    //Atap
    glClear(GL_COLOR_BUFFER_BIT);     // Clear display window
    // Mengatur Warna glColor3f(R,G,B)
    glColor3f(0.4, 0.2, 0);
    glBegin(GL_POLYGON);
    glVertex2f(400,500);
    glVertex2f(760, 500);
    glVertex2f(900, 350);
    glVertex2f(500, 350);
    glEnd();

    // Dinding atas / Genteng atas
    glBegin(GL_TRIANGLES);
     glColor3f(0.6, 0, 0);
    glVertex2f(400, 500);
     glColor3f(0, 0.6, 0);
    glVertex2f(300, 350);
    glColor3f(0, 0, 0.6);
    glVertex2f(500, 350);
    glEnd();

    // Tembok Depan
    glColor3f(0.7, 0.2, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(300, 350);
    glVertex2i(500, 350);
    glVertex2i(500, 100);
    glVertex2i(300, 100);
    glEnd();

    // Pintu Depan
    glColor3f(0.7, 0.2, 0.9);
    glBegin(GL_POLYGON);
    glVertex2i(350, 250);
    glVertex2i(450, 250);
    glVertex2i(450, 100);
    glVertex2i(350, 100);
    glEnd();

    // Kunci Pintu
    glColor3f(0.3, 0.7, 0.9);
    glPointSize(15);
    glBegin(GL_POINTS);
    glVertex2i(370, 170);
    glEnd();

    //Dinding Samping
    glColor3f(0.1, 0.2, 0.3);
    glBegin(GL_POLYGON);
    glVertex2i(500, 350);
    glVertex2i(800, 350);
    glVertex2i(800, 100);
    glVertex2i(500, 100);
    glEnd();

    //Batang Pohon
    glColor3f(0.6, 0.4, 0);
    glBegin(GL_POLYGON);
    glVertex2i(100, 200);
    glVertex2i(150, 200);
    glVertex2i(150, 50);
    glVertex2i(100, 50);
    glEnd();

    //Daun / Pohon
    glColor3f(0,0.6,0);
    glBegin(GL_TRIANGLES);
    glVertex2i(120, 430);
    glVertex2i(0, 200);
    glVertex2i(250, 200);
    glEnd();

    // Jalan / Tanah
    glColor3f(0.5, 0.3, 0);
    glBegin(GL_POLYGON);
    glVertex2i(0, 100);
    glVertex2i(800, 100);
    glVertex2i(800, 0);
    glVertex2i(0, 0);
    glEnd();

    //Lingkaran
    float li;
    glColor3f(1.0, 0.65, 0.0);
    glBegin(GL_POLYGON);
    for(int i=0; i<360; i++){
        li = i*3.142/180;
        glVertex2f(200+80*cos(li),500+60*sin(li));
        }
    glEnd();

    glFlush();
}


int main(int argc, char ** argv)
{
    // Initialize
    glutInit(&argc, argv);
    // Mengatur Mode Display
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    //  Mengatur width & Heigth Window / Layar
    glutInitWindowSize(500, 500);
    // Nama / Judul Windows atau Jendela
    glutCreateWindow("UTS - Rumah Sederhana ");
    // Menjalankan Inisialisasi
    init();
    // Mengirim grafik atau gambar ke windows atau layar
    glutDisplayFunc(home);
    // Menampilkan
    glutMainLoop();
}
