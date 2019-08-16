#ifndef LFORTRAN_PICKLE_H
#define LFORTRAN_PICKLE_H

#include <lfortran/ast.h>

namespace LFortran {

    std::string pickle(LFortran::AST::expr_t &ast);

}

#endif // LFORTRAN_PICKLE_H
