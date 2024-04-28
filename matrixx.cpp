#include"matrixx.hpp"
#include<iostream>
namespace mx {
		matrixx::matrixx(int n_N, int n_M) {
			N = n_N;
			M = n_M;
			matrix = new int*[N];
			for (int i = 0; i < N; i++) {
				matrix[i] = new int[M];
			}
		}

		matrixx::matrixx(matrixx& other) {
			N = other.N;
			M = other.M;
			matrix = new int*[N];
			for (int i = 0; i < N; i++) {
				int* matr_str = new int[M];
				std::copy(other.matrix[i], other.matrix[i] + M, matr_str);
				matrix[i] = matr_str;
			}
		}

		void matrixx::operator=(matrixx& other) {
			for (int i = 0; i < N; i++) {
				delete[] matrix[i];
			}
			delete[] matrix;
			M = other.M;
			N = other.N;
			matrix = new int*[N];
			for (int i = 0; i < N; i++) {
				int* matr_str = new int[M];
				std::copy(other.matrix[i], other.matrix[i] + M, matr_str);
				matrix[i] = matr_str;
			}
		}

		void matrixx::print() {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					std::cout << matrix[i][j] << " ";
				}
				std::cout << std::endl;
			}
		}

		matrixx::~matrixx() {
			for (int i = 0; i < N; i++) {
				delete[] matrix[i];
			}
			delete[] matrix;
		}
}