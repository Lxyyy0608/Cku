#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main() 
{
    // 加载图像
    Mat image = imread("/Users/xyl/Desktop/test/resourse/1.jpg"); // 替换图像路径
    if (image.empty()) 
    {
        cout << "无法加载图像" << endl;
        return -1;
    }

    // 显示原始图像
    imshow("原始图像", image);
    if (waitKey(0) == 27) 
    { // 按ESC键退出
        destroyWindow("原始图像");
    } 
    else 
    {
        return 0; // 如果按的不是ESC键，则退出程序
    }

    // 检测边缘， Canny 函数用于边缘检测，参数100和200是检测的阈值
    Mat edgeDetected;
    Canny(image, edgeDetected, 100, 200); // 边缘检测参数可以调整
    imshow("边缘检测", edgeDetected);
    if (waitKey(0) == 27) 
    {
        destroyWindow("边缘检测");
    } 
    else 
    {
        return 0;
    }

    // 膨胀操作，dilate 函数用于膨胀图像，Mat() 使用默认结构元素
    Mat dilatedImage;
    dilate(edgeDetected, dilatedImage, Mat());
    imshow("膨胀操作", dilatedImage);
    if (waitKey(0) == 27) 
    {
        destroyWindow("膨胀操作");
    } 
    else 
    {
        return 0;
    }

    // 侵蚀操作，erode 函数用于侵蚀图像，Mat() 使用默认结构元素
    Mat erodedImage;
    erode(dilatedImage, erodedImage, Mat());
    imshow("侵蚀操作", erodedImage);
    if (waitKey(0) == 27) 
    {
        destroyWindow("侵蚀操作");
    } 
    else 
    {
        return 0;
    }

    // 改变图像大小， resize 函数用于改变图像大小，这里将图像缩放为原始大小的50%
    Mat resizedImage;
    resize(image, resizedImage, Size(), 0.5, 0.5); // 缩放为原始大小的50%
    imshow("缩放后的图像", resizedImage);
    if (waitKey(0) == 27) 
    {
        destroyWindow("缩放后的图像");
    } 
    else 
    {
        return 0;
    }

    return 0;
}
