#ifndef  FORMULA_PARSER_HPP_
#define  FORMULA_PARSER_HPP_
#include "token.hpp"
#include "formula.hpp"
#include <string>
#include <vector>

namespace tableaux {

	using tokens = std::vector<token>;

	class formula_parser {

	public:
		static formula_ptr parse_formula(const std::string& unparsed_formula);
	private:
		static tokens get_formula_tokens(const std::string& unparsed_formula);
		static formula_ptr assemble_formula(const tokens& tokens);
		static formula_ptr get_binary_formula(const tokens& tokens);
		static formula_ptr get_unary_formula(const tokens& tokens);
		static formula_ptr get_variable(const token& token);
		static formula_ptr get_subformula(const token& token);
	};
}

#endif
