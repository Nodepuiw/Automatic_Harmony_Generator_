#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

void exclude_lines(const Mat& _input_score, Mat* _output_score) {
	//---- �y������c�������������i��s��������)
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
	//---- �c���Ɖ����̏����ꂽ�y������A�������𔲂��o���C���̒��ŗ֊s���ȉ~���ۂ���������Ƃ��Ē��o����H�H
}

void determine_notes(const Mat& _input_score, Mat& _input_ellipse, int* _output_note) {
	//---- _input_ellipse(�ȉ~���ۂ��A������)�̏d�S�����o�D���̉摜�ʏ�ł�y���W�����Ƃ̊y���Ɣ�ׂāC����ɉ����ĉ����𓯒�
}

void optimal_harmonic_notes(char* code_name, int _input_note, int* _output_note) {
	//---- �R�[�h�l�[���Ɠ��͉�����C�œK�ȃn���艹�𓱏o
}

int main() {
	Mat score = imread("./data/score_2.png");
	Mat score2;
	Mat gray_score;
	Mat gauss_score;

	imshow("Original_score", score);
	waitKey(0);

	//---- �O���[�X�P�[����
	threshold(score, gray_score, 100, 255, THRESH_BINARY);
	imshow("Gray_score", gray_score);
	waitKey(0);
	//----

	//---- gaussian filter 

	//---- 

	exclude_lines(gray_score, &score2);


	return 0;
}
