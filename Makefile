MAKE := make
all:
    $(MAKE) -C ./src/useful_functions
    $(MAKE) -C ./src/adaptors_for_containers
    $(MAKE) -C ./src/pairs_and_tuples