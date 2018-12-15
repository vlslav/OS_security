#!/bin/bash

ps -eo euid,ruid,comm | perl ./script.pl
