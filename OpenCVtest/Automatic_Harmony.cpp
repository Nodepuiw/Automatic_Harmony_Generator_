#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

void exclude_lines(const Mat& _input_score, Mat* _output_score) {
	//---- �y������c���Ɖ��������������i��s��������j
	*_output_score = _input_score;
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
	Mat score = imread("./data/notes.png");
	Mat score2;

	imshow("Original_score", score);
	waitKey(0);

	exclude_lines(score, &score2);
	imshow("Score_with_no_lines", score2);
	waitKey(0);


	return 0;
}
