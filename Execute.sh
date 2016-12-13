#!/bin/sh

rm -rf execute.out
gcc AllTests.c CuTest.c TestStudent.c -o execute.out
./execute.out > result.txt
cat result.txt
grep -q "!!!FAILURES!!!" result.txt
if [ $? -eq 0 ]
then
    echo "BUILD FAILURES"
    exit 1
else
    echo "BUILD SUCCESS"
fi
