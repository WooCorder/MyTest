#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>


#define DIFFERENCE_FRAME_THRESHOLD 3
#define FILE_NAME "1.mp4"

using namespace std;
using namespace cv;


Mat ballTracking(Mat p_mat);

void main()
{
	VideoCapture first_vc("1.mp4");
	VideoCapture second_vc("1.mp4");
	VideoCapture third_vc("1.mp4");

	Mat first_img, second_img, third_img;
	int differenceFrame = 0;

	for (int frameCount = 0; first_img.data != NULL; frameCount++)
	{
		first_vc >> first_img;

		if (frameCount > DIFFERENCE_FRAME_THRESHOLD)
			second_vc >> second_img;

		if (frameCount > DIFFERENCE_FRAME_THRESHOLD * 2)
			third_vc >> third_img;

		imshow("pre video", first_img);
		imshow("video", second_img);

		if (waitKey(10) == 27) break; //ESC
	}

	destroyAllWindows();

	return;
}



Mat ballTracking(Mat p_mat)
{
	//for (int frameCount = 0; after_frame.data != NULL; frameCount++)
	{

	}

	return p_mat;

}