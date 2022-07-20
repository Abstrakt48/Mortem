#.DEFAULT_GOAL := build_engine

all: build_game run_game

CC = g++
CFLAGS = -Wall -Wextra -ggdb -O3
LIBS = -lm -lGL -lGLU -lglfw

SRC_DIRS=\
mortem/engine/*.cpp \
mortem/game/*.cpp \
mortem/launcher/*.cpp \
mortem/launcher/linux/*.cpp

INCLUDE_DIRS=mortem/

BUILD_FILE = build/Mortem

build_game:
	${CC} ${CFLAGS} ${SRC_DIRS} -I ${INCLUDE_DIRS} -o ${BUILD_FILE} ${LIBS}

run_game:
	./${BUILD_FILE}