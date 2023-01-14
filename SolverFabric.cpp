#include<iostream>
#include"SolverFabric.h"

//auto unique_api = SolverFabric::create(solver_type);

//il faudrait ensuite passer par un smart-pointer de la stl, par exemple un std::unique_ptr.


/*
GenericExample generic_example{};
generic_example.info<HypreAPI>();
generic_example.run(GenericExample::SolverType::Hypre); // hypre call
generic_example.info<PETScAPI>();
generic_example.run(GenericExample::SolverType::PETSc); // PETSc call
*/
std::unique_ptr<Uniqueapi> SolverFabric::create(GenericExample::SolverType solvertype){};
