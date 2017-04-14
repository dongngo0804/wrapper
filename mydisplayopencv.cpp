#include <opencv/cv.h> //main OpenCV header
#include <opencv/highgui.h> //GUI header
#include "mydisplay.h"
using namespace std;

int Display::initiate_display()
{
    IplImage* img = cvLoadImage( "banner.jpg" );
    cvNamedWindow( "Viva La Vida", CV_WINDOW_AUTOSIZE );
    cvShowImage("Viva La Vida", img);
    cvWaitKey(0);
    cvReleaseImage( &img );
    cvDestroyWindow( "Viva La Vida" );
    return 0;
}
