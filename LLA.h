#ifndef LOCAL_LINEAR_ALGEBRA_H
#define LOCAL_LINEAR_ALGEBRA_H



#include<iostream>
#include<vector>
#include<cmath>

class LocalLinearAlgebra{

	public:
		using Vector = std::vector<double>;

		struct Matrix{
			public:
				int const& row;
				int const& colum;
				double const& valeur;
				std::vector<Vector> meb;

				Matrix(int const& rowi,int const& coli,double const& val){
					row= rowi;
					colum= coli;
					valeur= val;
					}
				void add_valeur(int const& rowi,int const& coli,double const& val);
		};

		void static mult(Matrix A_local, Vector x_local, Vector tmp_local);
//		LocalLinearAlgebra::mult(A_local, x_local, tmp_local);
		
		void static copy(Vector tmp_local, Vector r_local);
//		LocalLinearAlgebra::copy(tmp_local, r_local);
		
		void static apxy(duoble n, Vector b_local, Vector r_local);
//		LocalLinearAlgebra::axpy(-1., b_local, r_local);

		double static norm2(Vector r_local);
//		auto norm_local = LocalLinearAlgebra::norm2(r_local);
};




struct ResidualNorms{
	double norm1;
	double norm2;

};




#endif
