#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>


using namespace std;
using namespace cv;

Mat tracking(Mat p_mat);

int main()
{
	VideoCapture vc("1.mp4");

	Mat mainImg;

	while(1)
	{
		vc >> mainImg;
		if (mainImg.empty()) break;
		
		resize(mainImg, mainImg, Size(), 0.5, 0.5);//scalex, scaley

		mainImg = tracking(mainImg);


		imshow("Ball Tracking", mainImg);
		if (waitKey(1) == 27) break; //ESC

	}
	
	

}


Mat tracking(Mat p_mat)
{







	return p_mat;
}