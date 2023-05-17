#include<windows.h>
#include<gl\glut.h>
#include <math.h>
#define PI 3.1415926
int i;
int jari2;
int jumlah_titik;
int x_tengah;
int y_tengah;

struct Coordinate {
    double x;
    double y;
};


void badan(){
    Coordinate coordinates[100] = {
        {13.72, 11.21},
        {13.44, 10.24},
        {13.26, 9.49},
        {13.16, 8.69},
        {13, 8},
        {12.99, 7.41},
        {12.99, 6.77},
        {13, 6},
        {13.1, 5.42},
        {13.21, 4.59},
        {13.36, 3.99},
        {13.49, 3.48},
        {14.05, 3.33},
        {14.75, 3.21},
        {15.59, 3.2},
        {16.2, 3.22},
        {16.76, 3.44},
        {17.05, 4.28},
        {17.16, 4.52},
        {17.79, 4.49},
        {18.31, 4.51},
        {18.39, 4.18},
        {18.6, 3.65},
        {18.68, 3.28},
        {19.23, 3.15},
        {19.78, 3.1},
        {20.44, 3.06},
        {21.53, 3.1},
        {21.77, 3.42},
        {22, 4},
        {22.18, 4.38},
        {22.79, 4.53},
        {23.52, 4.54},
        {23.74, 4.47},
        {23.76, 4.11},
        {23.99, 3.59},
        {24.22, 3.42},
        {24.57, 3.34},
        {25.25, 3.24},
        {25.85, 3.21},
        {26.42, 3.32},
        {27.04, 3.36},
        {27.29, 3.53},
        {27.61, 4.34},
        {27.78, 5.06},
        {27.84, 5.78},
        {27.89, 6.81},
        {28, 8},
        {27.74, 8.7},
        {27.51, 9.64},
        {27.28, 10.62},
        {28.02, 10.67},
        {28.38, 10.79},
        {28.82, 11.25},
        {29.12, 11.81},
        {29.37, 11.96},
        {29.52, 12.25},
        {29.53, 12.62},
        {29.35, 13.07},
        {29.05, 13.4},
        {28.67, 13.69},
        {28.7, 13.35},
        {28.66, 13.18},
        {28.45, 12.79},
        {28.4, 12.5},
        {28.42, 12.15},
        {28.58, 11.97},
        {28.72, 11.76},
        {28.5, 11.5},
        {28.19, 11.27},
        {27.79, 11.14},
        {27.31, 11.25},
        {26.9, 11.46},
        {26.36, 12.32},
        {25.87, 12.94},
        {25.59, 13.27},
        {25.1, 13.7},
        {24.95, 13.3},
        {24.85, 12.98},
        {24.66, 12.56},
        {24.4, 12.12},
        {23.93, 11.59},
        {23.43, 11.11},
        {22.84, 10.73},
        {22.2, 10.46},
        {21.43, 10.18},
        {20.69, 10.05},
        {19.86, 9.93},
        {18.93, 9.86},
        {18, 9.91},
        {17, 10},
        {16.3, 10.1},
        {15.49, 10.33},
        {14.82, 10.62},
        {13.72 , 11.21}
        };

    glClear(GL_COLOR_BUFFER_BIT); // perlu di clear dulu sebelum menggambar sesuatu dalam window
    glPointSize(8.0); // untuk mengatur ukuran diameter pada titik sudut
    glColor3f(1.0f, 0.9569f, 0.6f); // untuk mengatur warna dari sebuah objek yang digambar
    // Mengaktifkan mode pemulusan poligon
    glEnable(GL_POLYGON_SMOOTH);

    // Mengatur mode pewarnaan poligon menjadi GL_SMOOTH
    glShadeModel(GL_SMOOTH);

    // Mengatur mode penggambaran poligon menjadi GL_POLYGON
    glPolygonMode(GL_FRONT_AND_BACK, GL_POLYGON);
    glBegin(GL_POLYGON); // untuk menggambar dengan bentuk polygon
    for (int i = 0; i < 100; ++i) {
        glVertex2f(coordinates[i].x * 10, coordinates[i].y * 10);
//    glVertex2f(60.32727 * 3, 34.06106 * 3); //g
//    glVertex2f(69.98684 * 3, 40.26734 * 3); //h
//    glVertex2f(67.26077 * 3, 43.63038 * 3); //i
    }
    glEnd();

}


void badan_garis(){
    Coordinate coordinates[101] = {
        {13.72, 11.21},
        {13.44, 10.24},
        {13.26, 9.49},
        {13.16, 8.69},
        {13, 8},
        {12.99, 7.41},
        {12.99, 6.77},
        {13, 6},
        {13.1, 5.42},
        {13.21, 4.59},
        {13.36, 3.99},
        {13.49, 3.48},
        {14.05, 3.33},
        {14.75, 3.21},
        {15.59, 3.2},
        {16.2, 3.22},
        {16.76, 3.44},
        {17.05, 4.28},
        {17.16, 4.52},
        {17.79, 4.49},
        {18.31, 4.51},
        {18.39, 4.18},
        {18.6, 3.65},
        {18.68, 3.28},
        {19.23, 3.15},
        {19.78, 3.1},
        {20.44, 3.06},
        {21.53, 3.1},
        {21.77, 3.42},
        {22, 4},
        {22.18, 4.38},
        {22.79, 4.53},
        {23.52, 4.54},
        {23.74, 4.47},
        {23.76, 4.11},
        {23.99, 3.59},
        {24.22, 3.42},
        {24.57, 3.34},
        {25.25, 3.24},
        {25.85, 3.21},
        {26.42, 3.32},
        {27.04, 3.36},
        {27.29, 3.53},
        {27.61, 4.34},
        {27.78, 5.06},
        {27.84, 5.78},
        {27.89, 6.81},
        {28, 8},
        {27.74, 8.7},
        {27.51, 9.64},
        {27.28, 10.62},
        {28.02, 10.67},
        {28.38, 10.79},
        {28.82, 11.25},
        {29.12, 11.81},
        {29.37, 11.96},
        {29.52, 12.25},
        {29.53, 12.62},
        {29.35, 13.07},
        {29.05, 13.4},
        {28.67, 13.69},
        {28.7, 13.35},
        {28.66, 13.18},
        {28.45, 12.79},
        {28.4, 12.5},
        {28.42, 12.15},
        {28.58, 11.97},
        {28.72, 11.76},
        {28.5, 11.5},
        {28.19, 11.27},
        {27.79, 11.14},
        {27.31, 11.25},
        {26.9, 11.46},
        {26.36, 12.32},
        {25.87, 12.94},
        {25.59, 13.27},
        {25.1, 13.7},
        {24.95, 13.3},
        {24.85, 12.98},
        {24.66, 12.56},
        {24.4, 12.12},
        {23.93, 11.59},
        {23.43, 11.11},
        {22.84, 10.73},
        {22.2, 10.46},
        {21.43, 10.18},
        {20.69, 10.05},
        {19.86, 9.93},
        {18.93, 9.86},
        {18, 9.91},
        {17, 10},
        {16.3, 10.1},
        {15.49, 10.33},
        {14.82, 10.62},
        {13.72, 11.21},
        {13.72, 11.21}
    };

    glClear(GL_COLOR); // perlu di clear dulu sebelum menggambar sesuatu dalam window
    glPointSize(8.0); // untuk mengatur ukuran diameter pada titik sudut
    glColor3f(0.0f, 0.0f, 0.0f); // untuk mengatur warna dari sebuah objek yang digambar
    glBegin(GL_LINE_STRIP); // untuk menggambar dengan bentuk polygon
    for (int i = 0; i < 101; ++i) {
        glVertex2f(coordinates[i].x * 10, coordinates[i].y * 10);
//    glVertex2f(60.32727 * 3, 34.06106 * 3); //g
//    glVertex2f(69.98684 * 3, 40.26734 * 3); //h
//    glVertex2f(67.26077 * 3, 43.63038 * 3); //i
    }
    glEnd();

}

void kepala (){
    glClear(GL_COLOR);
    glPointSize(8.0);
    glColor3f(1.0f, 0.9f, 0.8f);
    glBegin(GL_POLYGON);
    jari2 =1200;
    jumlah_titik = 100;
    x_tengah = 2750;
    y_tengah = 3000;
    for(i=0; i<= jumlah_titik; i++){
        float sudut= i*(2*PI/jumlah_titik);
        float x = x_tengah + jari2 * cos(sudut);
        float y = y_tengah + jari2 * sin(sudut);
//        note, semakin besar angka pada x/y maka semakin mengerucut
//        contoh x dibuat lebih besar dari y maka lingkaran horizontal akan mengerucut
        glVertex2f((x / 15), (y /20) + 10 );
    }
    glEnd();


}

void kepala_garis(){
    glClear(GL_COLOR);
    glPointSize(15.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_STRIP);
    for(i=0; i<= jumlah_titik; i++){
        float sudut= i*(2*PI/jumlah_titik);
        float x = x_tengah + jari2 * cos(sudut);
        float y = y_tengah + jari2 * sin(sudut);
//        note, semakin besar angka pada x/y maka semakin mengerucut
//        contoh x dibuat lebih besar dari y maka lingkaran horizontal akan mengerucut
        glVertex2f((x / 15), (y /20) + 10 );
    }
    glEnd();
}


void tandukKanan(){
    Coordinate coordinate[10] = {
        {4.35, 6.25},
        {5, 6.5},
        {5.34, 7.53},
        {5.48, 8.88},
        {6, 8 },
        {6.2, 7.15},
        {6.25, 6.23 + 1},
        {5.89 , 5.48 + 1},
        {5.08, 4.89 + 1},
        {4.35, 6.25},
    };

    glClear(GL_COLOR); // perlu di clear dulu sebelum menggambar sesuatu dalam window
    glPointSize(10.0); // untuk mengatur ukuran diameter pada titik sudut
    glColor3f(0.4f, 0.2f, 0.0f); // untuk mengatur warna dari sebuah objek yang digambar


    glBegin(GL_POLYGON); // untuk menggambar dengan bentuk polygon
    for (int i = 0; i <= 10; ++i) {
        glVertex2f((coordinate[i].x) * 40 + 20, (coordinate[i].y) * 26 + 4);
//    glVertex2f(60.32727 * 3, 34.06106 * 3); //g
//    glVertex2f(69.98684 * 3, 40.26734 * 3); //h
//    glVertex2f(67.26077 * 3, 43.63038 * 3); //i
    }
    glEnd();
}

void tandukKiri(){
    Coordinate coordinate[10] = {
        {1.5, 3.26},
        {0.81, 2.67},
        {0.36, 1.86},
        {0.52, 1.28},
        {0.89, 0.73},
        {1.44, 0.16},
        {1.82, 0.68},
        {2.55, 1.07},
        {1.62, 1.47},
        {1.5, 3.26}
    };

    glClear(GL_COLOR); // perlu di clear dulu sebelum menggambar sesuatu dalam window
    glPointSize(10.0); // untuk mengatur ukuran diameter pada titik sudut
    glColor3f(0.4f, 0.2f, 0.0f); // untuk mengatur warna dari sebuah objek yang digambar
    glBegin(GL_POLYGON); // untuk menggambar dengan bentuk polygon
    for (int i = 0; i <= 10; ++i) {
        glVertex2f((coordinate[i].x) * 25 + 80, (coordinate[i].y) * 25 + 150);
    }
    glEnd();
}

void mataKiriKecil()
{
    glClear(GL_COLOR);
    glColor3f(0.0f, 0.0f, 1.0f); // Warna putih

    glBegin(GL_POLYGON);
    GLdouble theta;
    int circle_points = 100;
    glColor3f(0,0,0); // hitam
    for(i=0; i<circle_points; i++)
    {
        theta = 2*PI*i/circle_points;
        glVertex2f(170.0+10*cos(theta) - 20,210.0+10*sin(theta) - 60);
    }
    glEnd();
}


void mataKananKecil()
{
    glClear(GL_COLOR);
    glColor3f(0.0f, 0.0f, 1.0f); // Warna putih

    glBegin(GL_POLYGON);
    GLdouble theta;
    int circle_points = 100;
    glColor3f(0,0,0); // hitam
    for(i=0; i<circle_points; i++)
    {
        theta = 2*PI*i/circle_points;
        glVertex2f(170.0+10*cos(theta) + 50,210.0+10*sin(theta) - 60);
    }
    glEnd();
}

void mataKiriBesar(){
    glClear(GL_COLOR);
    glColor3f(0.8f, 0.7f, 0.6f);
    glBegin(GL_POLYGON);
    GLdouble theta;
    int circle_points = 60;
    for(i=0; i<circle_points; i++)
        {
            theta = 2 * PI * i / circle_points;
            // Mengubah posisi mata menggunakan rumus transformasi
            GLdouble x = 180.0 + 35 * cos(theta) - 30;
            GLdouble y = 200.0 + 30 * sin(theta) - 35;
            // Menerapkan rotasi mata sebesar 20 derajat
            GLdouble radians = 20.0 * PI / 180.0;
            GLdouble rotatedX = (x - 180.0) * cos(radians) - (y - 200.0) * sin(radians) + 180.0;
            GLdouble rotatedY = (x - 180.0) * sin(radians) + (y - 200.0) * cos(radians) + 200.0;
            glVertex2f(rotatedX, rotatedY);
        }
    glEnd();
}
void mulut() {
    glClear(GL_COLOR);
    glColor3f(0.0f, 0.0f, 0.0f); // Warna putih
    glLineWidth(8.0f);

    // Kaki belakang
    glBegin(GL_LINE_STRIP);
        glVertex2f(150.0f + 15, 60.0f + 60);
        glVertex2f(170.0f + 15, 70.0f + 60);
        glVertex2f(190.0f + 15, 60.0f + 60);
    glEnd();
}

void alis() {
    glColor3f(0.0f, 0.0f, 0.0f); // Warna hitam
    glLineWidth(3.0f);

    // Alis mata kiri
    glBegin(GL_LINE_STRIP);
    glVertex2f(150.0f - 20.0f, 170.0f + 15.0f);
    glVertex2f(170.0f - 20.0f, 185.0f + 15.0f);
    glVertex2f(190.0f - 20.0f, 170.0f + 15.0f);
    glEnd();

    // Alis mata kanan
    glBegin(GL_LINE_STRIP);
    glVertex2f(200.0f, 170.0f + 10.0f);
    glVertex2f(220.0f, 185.0f + 10.0f);
    glVertex2f(240.0f, 170.0f + 10.0f);
    glEnd();
}

void kaki() {
    glColor3f(0.5f, 0.5f, 0.5f); // Warna abu-abu
    glLineWidth(6.0f);

    glClear(GL_COLOR);
    glColor3f(0.498f, 0.498f, 0.498f);
    glBegin(GL_POLYGON);
    GLdouble theta;
    int circle_points = 30; // Mengurangi jumlah titik untuk menghasilkan setengah lingkaran
    for (int i = 0; i <= circle_points; i++)
    {
        theta = PI * i / circle_points;
        // Mengubah posisi mata menggunakan rumus transformasi
        GLdouble x = 180.0 + 15 * cos(theta) - 30;
        GLdouble y = 200.0 + 10 * sin(theta) - 35;
        // Menerapkan rotasi mata sebesar 180 derajat
        GLdouble radians = 180.0 * PI / 180.0;
        GLdouble rotatedX = (x - 180.0) * cos(radians) - (y - 200.0) * sin(radians) + 180.0;
        GLdouble rotatedY = (x - 180.0) * sin(radians) + (y - 200.0) * cos(radians) + 200.0;
        glVertex2f(rotatedX - 60, rotatedY - 200);
    }
    glEnd();

    // Kaki kanan depan
    glBegin(GL_POLYGON);
    for (int i = 0; i <= circle_points; i++)
    {
        theta = PI * i / circle_points;
        // Mengubah posisi mata menggunakan rumus transformasi
        GLdouble x = 180.0 + 15 * cos(theta) - 30;
        GLdouble y = 200.0 + 10 * sin(theta) - 35;
        // Menerapkan rotasi mata sebesar 180 derajat
        GLdouble radians = 180.0 * PI / 180.0;
        GLdouble rotatedX = (x - 180.0) * cos(radians) - (y - 200.0) * sin(radians) + 180.0;
        GLdouble rotatedY = (x - 180.0) * sin(radians) + (y - 200.0) * cos(radians) + 200.0;
        glVertex2f(rotatedX - 5, rotatedY - 200);
    }
    glEnd();

    // Kaki belakang
    glBegin(GL_POLYGON);
    for (int i = 0; i <= circle_points; i++)
    {
        theta = PI * i / circle_points;
        // Mengubah posisi mata menggunakan rumus transformasi
        GLdouble x = 180.0 + 15 * cos(theta) - 30;
        GLdouble y = 200.0 + 10 * sin(theta) - 35;
        // Menerapkan rotasi mata sebesar 180 derajat
        GLdouble radians = 180.0 * PI / 180.0;
        GLdouble rotatedX = (x - 180.0) * cos(radians) - (y - 200.0) * sin(radians) + 180.0;
        GLdouble rotatedY = (x - 180.0) * sin(radians) + (y - 200.0) * cos(radians) + 200.0;
        glVertex2f(rotatedX + 45, rotatedY - 200);
    }
    glEnd();
}


void telingaKiri(){
    glClear(GL_COLOR);

    Coordinate coordinate[6] = {
        {2.5, 1},
        {1.37, 1.7},
        {0.28, 1.39},
        {0.48, 0.52},
        {1.23, 0.37},
        {2.5, 1}
    };

    glClear(GL_COLOR); // perlu di clear dulu sebelum menggambar sesuatu dalam window
    glPointSize(10.0); // untuk mengatur ukuran diameter pada titik sudut
    glColor3f(1.0f, 0.776f, 0.4f); // untuk mengatur warna dari sebuah objek yang digambar
    glBegin(GL_POLYGON); // untuk menggambar dengan bentuk polygon
    for (int i = 0; i <= 6; ++i) {
        glVertex2f((coordinate[i].x) * 25 + 70, (coordinate[i].y) * 25 + 130);
    }
    glEnd();
}


void telingaKanan(){
    glClear(GL_COLOR);

    Coordinate coordinate[6] = {
        {2.79, 1.14},
        {2.81, 1.87},
        {1.89, 1.96},
        {0.83, 1.44},
        {0.73, 0.55},
        {2.79, 1.14}
    };

    glClear(GL_COLOR); // perlu di clear dulu sebelum menggambar sesuatu dalam window
    glPointSize(10.0); // untuk mengatur ukuran diameter pada titik sudut
    glColor3f(1.0f, 0.776f, 0.4f); // untuk mengatur warna dari sebuah objek yang digambar
    glBegin(GL_POLYGON); // untuk menggambar dengan bentuk polygon
    for (int i = 0; i <= 6; ++i) {
        glVertex2f((coordinate[i].x) * 25 + 220, (coordinate[i].y) * 25 + 130);
    }
    glEnd();
}

void bintik1()
{
    glClear(GL_COLOR);
    glColor3f(219.0f/255.0f, 124.0f/255.0f, 15.0f/255.0f); // Warna putih

    glBegin(GL_POLYGON);
    GLdouble theta;
    int circle_points = 100;
    for(i=0; i<circle_points; i++)
    {
        theta = 2*PI*i/circle_points;
        glVertex2f(170.0+10*cos(theta) + 100,210.0+10*sin(theta) - 140);
    }
    glEnd();
}

void bintik2()
{
    glClear(GL_COLOR);
    glColor3f(219.0f/255.0f, 124.0f/255.0f, 15.0f/255.0f); // Warna putih

    glBegin(GL_POLYGON);
    GLdouble theta;
    int circle_points = 100;
    for(i=0; i<circle_points; i++)
    {
        theta = 2*PI*i/circle_points;
        glVertex2f(170.0+10*cos(theta) - 10,210.0+10*sin(theta) - 130);
    }
    glEnd();
}

void bintik3()
{
    glClear(GL_COLOR);
    glColor3f(219.0f/255.0f, 124.0f/255.0f, 15.0f/255.0f); // Warna putih

    glBegin(GL_POLYGON);
    GLdouble theta;
    int circle_points = 100;
    for(i=0; i<circle_points; i++)
    {
        theta = 2*PI*i/circle_points;
        glVertex2f(170.0+10*cos(theta) + 90,210.0+10*sin(theta) - 100);
    }
    glEnd();
}


void Display(){

    badan();

    telingaKiri();
    telingaKanan();

    tandukKanan();
    tandukKiri();

    kepala();

    mataKiriBesar();
    mataKiriKecil();
    mataKananKecil();
    mulut();
    alis();
    kaki();

    bintik1();
    bintik2();
    bintik3();
    badan_garis();
    kepala_garis();

    glFlush();
}

void reshape(int width, int height){

    // mengatur berapa besar window yang terlihat
    glViewport(0, 0, (GLsizei)width, (GLsizei)height);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluOrtho2D(0.0, 400.0, 0.0, 250.0);
}

void init(){
    glClearColor(1.0f, 0.0f, 0.0f, 0.0f);
}

int main(int args, char* argv[]){
    glutInitDisplayMode(GLUT_DEPTH|GLUT_SINGLE|GLUT_RGBA);
    glutInitWindowSize(600.0,400.0);
    glutCreateWindow("201110199 | Agus Kurniadin Khaer UTS Gambar Sapi");
    init();
    glutDisplayFunc(Display);
    glutReshapeFunc(reshape);
    glutMainLoop();
}
