#!/bin/bash

make re

./account > perso.log

if diff <(cut -d' ' -f2- perso.log) <(cut -d' ' -f2-  19920104_091532.log) > /dev/null; then
	echo " Everything is perfect !";
else
	echo " Something is different !";
fi

rm perso.log