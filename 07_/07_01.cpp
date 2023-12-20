#include <opencv2/opencv.hpp>
#include <iostream>

int main() 
{
    // （1）加载并显示一张图像
    cv::Mat image = cv::imread("/Users/xyl/Desktop/test/resourse/1.jpg"); // 替换图片路径
    if (image.empty()) 
    {
        std::cout << "Could not open or find the image." << std::endl;
        return -1;// 图像加载失败时，输出错误信息并退出程序
    }
    cv::imshow("Image", image);// 在窗口中显示加载的图像
    if (cv::waitKey(0) == 27) 
    { // 按 Esc 键退出
        cv::destroyAllWindows();// 关闭所有窗口
    }

    // （2）加载一个视频
    cv::VideoCapture video("/Users/xyl/Desktop/test/resourse/2.mp4"); // 替换视频文件路径
    if (!video.isOpened()) 
    {
        std::cout << "Error opening video file." << std::endl;
        return -1;// 视频加载失败时，输出错误信息并退出程序
    }
    cv::Mat frame;// 用于存储每一帧的图像
    while (true) 
    {
        video >> frame;// 从视频流中读取下一帧
        if (frame.empty()) 
        {
            break;// 如果帧为空，则表示视频结束，退出循环
        }
        cv::imshow("Video", frame);// 显示当前帧
        if (cv::waitKey(25) == 27) 
        { // 每25毫秒检查一次，如果按下 Esc，则退出
            break;
        }
    }
    video.release();// 释放视频文件资源
    cv::destroyAllWindows();// 关闭所有窗口

    // （3）开启计算机摄像头
    cv::VideoCapture camera(0); // 0 代表默认摄像头
    if (!camera.isOpened()) 
    {
        std::cout << "Error opening camera." << std::endl;
        return -1;// 摄像头开启失败时，输出错误信息并退出程序
    }
    while (true) 
    {
        camera >> frame;// 从摄像头流中读取下一帧
        if (frame.empty()) 
        {
            break;// 如果帧为空，则表示摄像头关闭或发生错误，退出循环
        }
        cv::imshow("Camera", frame);
        if (cv::waitKey(25) == 27) 
        { // 按 Esc 键退出
            break;
        }
    }
    camera.release();// 释放摄像头资源
    cv::destroyAllWindows();// 关闭所有窗口

    return 0;
}
