#pragma once
namespace mx {
	class matrixx {
		int N, M;
		int** matrix;
	public:
		matrixx(int n_N, int n_M);

		matrixx(matrixx& other);

		void operator=(matrixx& other);

		void print();

		~matrixx();

	};
}
