# reset
# make debug
echo -e "#-----------------#\n#test 1 => ref 60 50 70 \n##"
./bin/push_swap 60 50 70
echo -e "#-----------------#\n#test 2 => ref 70 60 50 \n##"
./bin/push_swap 70 60 50
echo -e "#-----------------#\n#test 3 => ref 70 50 60 \n##"
./bin/push_swap 70 50 60
echo -e "#-----------------#\n#test 4 => ref 50 70 60 \n##"
./bin/push_swap 50 70 60
echo -e "#-----------------#\n#test 5 => ref 60 70 50 \n##"
./bin/push_swap 60 70 50
echo -e "#-----------------#\n#test 6 => ref 50 90 60 80 70 \n##"
./bin/push_swap 50 90 60 80 70
echo -e "#-----------------#\n#test 7 => ref 75 90 60 80 70 \n##"
./bin/push_swap 75 90 60 80 70
# echo -e "#-----------------#\n#test 7 => ref  \n##"
# ./bin/push_swap
# echo -e "#-----------------#\n#test 1 => ref  \n##"
