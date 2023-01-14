#include"LLA.h"


LocalLinearAlgebra::Matrix::Matirx(int const& rowi, int const& coli, double const& val){
	row = rowi;
	colum = coli;
	valeur = val;

	meb = Vector(row * colum);

}


void LocalLinearAlgebra::mult(Matrix A_local,Vector x_local, Vector tmp_local){
	for(int i=0;i<A_local.row;i++){
		for(int j=0;j<x_local.size(),j++){
			tmp_local[i]+=A_local*x_local;
		}
	}
}


// "r_local = t";
void LocalLinearAlgebra::copy(Vector tmp_local,Vector r_local){

	for(int i=0;i<r_local.size();i++){
		r_local[i]=tmp_local[i];
	}
}


// "r_local -= b_local";
void LocalLinearAlgebra::axpy(double n ,Vector b_local,Vector r_local){
	for(int i=0;i<r_local.size();i++){
		r_local[i] += n*b_local[i];
	}
}


// norm_local = ||r_local||
double  LocalLinearAlgebra::norm2(Vector r_local){
	double n =0;
	for(int i =0;i<r_local.size();i++){
		n += pow(r_local[i],2);}
	return sqrt(n);
}


