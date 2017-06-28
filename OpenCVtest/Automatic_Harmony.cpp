#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

void exclude_lines(const Mat& _input_score, Mat* _output_score) {
	//---- 楽譜から縦線を除く処理（先行研究あり)
	Sobel(_input_score, *_output_score, CV_32F, 0, 1);
	threshold(*_output_score, *_output_score, 100, 255, THRESH_BINARY_INV);
	imshow("without_vertical_lines", *_output_score);
	waitKey(0);

	Sobel(*_output_score, *_output_score, CV_32F, 1, 0);
	threshold(*_output_score, *_output_score, 100, 255, THRESH_BINARY_INV);
	imshow("without_horizontal_lines", *_output_score);
	waitKey(0);
}

void extract_notes(const Mat& _input_noline_score, int* notes_array) {
	//---- 縦線と横線の除かれた楽譜から連結成分を抜き出し，その中で輪郭が楕円っぽいやつを音符として抽出する？？
}

void determine_notes(const Mat& _input_score, Mat& _input_ellipse, int* _output_note) {
	//---- _input_ellipse(楕円っぽい連結成分)の重心を検出．その画像面上でのy座標をもとの楽譜と比べて，それに応じて音高を同定
}

void optimal_harmonic_notes(char* code_name, int _input_note, int* _output_note) {
	//---- コードネームと入力音から，最適なハモり音を導出
}

int main() {
	Mat score = imread("./data/score_2.png");
	Mat score2;
	Mat gray_score;
	Mat gauss_score;

	imshow("Original_score", score);
	waitKey(0);

	//---- グレースケール化
	threshold(score, gray_score, 100, 255, THRESH_BINARY);
	imshow("Gray_score", gray_score);
	waitKey(0);
	//----

	//---- gaussian filter 

	//---- 

	exclude_lines(gray_score, &score2);


	return 0;
}
