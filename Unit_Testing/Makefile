run-test-all: test-all
	./relation_op_test
	./arithmatic_op_test
	./io_op_test
	./exception_test

test-all: relation_op_test arithmatic_op_test io_op_test exception_test

run-relation_op_test: relation_op_test
	./relation_op_test

relation_op_test: Fraction.h Fraction.cpp relation_op_test.cpp
	g++ -Wall -o relation_op_test Fraction.cpp relation_op_test.cpp
	
run-arithmatic_op_test: arithmatic_op_test
	./arithmatic_op_test
	
arithmatic_op_test: Fraction.h Fraction.cpp arithmatic_op_test.cpp
	g++ -Wall -o arithmatic_op_test Fraction.cpp arithmatic_op_test.cpp
	
run-io_op_test: io_op_test
	./io_op_test

io_op_test: Fraction.h Fraction.cpp io_op_test.cpp
	g++ -Wall -o io_op_test Fraction.cpp io_op_test.cpp
	
run-exception_test: exception_test
	./exception_test

exception_test: Fraction.h Fraction.cpp exception_test
	g++ -Wall -o exception_test Fraction.cpp exception_test.cpp
	

clear:
	rm relation_op_test
	rm arithmatic_op_test
	rm io_op_tes
	rm exception_test