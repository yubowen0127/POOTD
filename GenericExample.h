#include<iostream>
#include<vector>

class GenericExample{

	public:
		template<typename T>;
		enum SolverType{Hypre,PETSc};
		virtual ~GenericExample()= default;

		//......
}
