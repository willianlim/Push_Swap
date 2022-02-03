# /bim/ba
# reset
# make debug
echo -e "\n#-----------------#\n#test 1 => ref 60 50 70 \n##"
ARG="60 50 70"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 2 => ref 70 60 50 \n##"
ARG="70 60 50"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 3 => ref 70 50 60 \n##"
ARG="70 50 60"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 4 => ref 50 70 60 \n##"
ARG="50 70 60"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 5 => ref 60 70 50 \n##"
ARG="60 70 50"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 6 => ref 50 55 60 80 70 \n##"
ARG="50 55 60 80 70"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 7 => ref 55 50 60 80 70 \n##"
ARG="55 50 60 80 70"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 8 => ref 61 55 60 80 70 \n##"
ARG="61 55 60 80 70"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 9 => ref 55 61 60 80 70 \n##"
ARG="55 61 60 80 70"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 10 => ref 65 61 60 80 70 \n##"
ARG="65 61 60 80 70"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 11 => ref 61 65 60 80 70 \n##"
ARG="61 65 60 80 70"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 12 => ref 81 90 60 80 70 \n##"
ARG="81 90 60 80 70"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 13 => ref 90 81 60 80 70 \n##"
ARG="90 81 60 80 70"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 14 => ref 75 81 60 80 70 \n##"
ARG="75 81 60 80 70"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 15 => ref 81 75 60 80 70 \n##"
ARG="81 75 60 80 70"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 16 => ref 71 75 60 80 70 \n##"
ARG="71 75 60 80 70"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 17 => ref 75 71 60 80 70 \n##"
ARG="75 71 60 80 70"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 18 => ref 2 4 1 3 5 \n##"
ARG="2 4 1 3 5"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 19 => ref 3 4 2 5 1 \n##"
ARG="3 4 2 5 1"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 20 => ref 5 2 3 1 4 \n##"
ARG="5 2 3 1 4"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 21 => ref 3 5 4 2 1 \n##"
ARG="3 5 4 2 1"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 22 => ref 3 2 5 4 1 \n##"
ARG="3 2 5 4 1"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 23 => ref 3 5 2 1 4 \n##"
ARG="3 5 2 1 4"; ./bin/push_swap $ARG | ./checker_linux $ARG

echo -e "\n#-----------------#\n#test 24 => ref 2 1 5 4 3 \n##"
ARG="2 1 5 4 3"; ./bin/push_swap $ARG | ./checker_linux $ARG

# echo -e "#-----------------#\n#test 8 => ref 90 100 60 80 70 \n##"
# ./bin/push_swap 90 100 60 80 70
# echo -e "#-----------------#\n#test 8 => ref 90 100 60 80 70 \n##"
# ./bin/push_swap 90 100 60 80 70
# echo -e "#-----------------#\n#test 8 => ref 90 100 60 80 70 \n##"
# ./bin/push_swap 90 100 60 80 70
# echo -e "#-----------------#\n#test 8 => ref 90 100 60 80 70 \n##"
# ./bin/push_swap 90 100 60 80 70

# echo -e "#-----------------#\n#test 7 => ref  \n##"
# ./bin/push_swap
# echo -e "#-----------------#\n#test 1 => ref  \n##"
