#!/bin/bash
echo "Процессов пользователя:";
echo "$USER";
ps -fu --no-headers | wc -l ;
echo "Процессов пользователя root:";
ps -fu root --no-headers | wc -l ;
