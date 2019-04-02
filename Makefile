OBJ = $(shell ls *.cpp lib/*.cpp unittests/*.cpp | sed s/\.cpp/\.o/g)

TARGET=ctci
CC=g++
CFLAGS=-I.

%.o: %.cpp
	$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm  -f *.o */*.o

depend:
	makedepend lib/*.h lib/*.hpp lib/*.c* *.cpp unittests/*

# DO NOT DELETE

lib/BinaryTree.o: lib/vector.h lib/vector.hpp lib/BinaryTree.hpp
lib/BinaryTreeRenderer.o: lib/BinaryTree.h lib/vector.h lib/vector.hpp
lib/BinaryTreeRenderer.o: lib/BinaryTree.hpp
lib/DLinkedList.o: lib/DLinkedList.hpp
lib/LinkedList.o: lib/LinkedList.hpp
lib/Queue.o: lib/DLinkedList.h lib/DLinkedList.hpp /usr/include/assert.h
lib/Queue.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
lib/Queue.o: /usr/include/sys/_posix_availability.h lib/Queue.hpp
lib/SampleBinaryTrees.o: /usr/include/assert.h /usr/include/sys/cdefs.h
lib/SampleBinaryTrees.o: /usr/include/sys/_symbol_aliasing.h
lib/SampleBinaryTrees.o: /usr/include/sys/_posix_availability.h
lib/SampleBinaryTrees.o: /usr/include/time.h /usr/include/_types.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types.h
lib/SampleBinaryTrees.o: /usr/include/machine/_types.h
lib/SampleBinaryTrees.o: /usr/include/i386/_types.h
lib/SampleBinaryTrees.o: /usr/include/sys/_pthread/_pthread_types.h
lib/SampleBinaryTrees.o: /usr/include/Availability.h
lib/SampleBinaryTrees.o: /usr/include/AvailabilityInternal.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_clock_t.h
lib/SampleBinaryTrees.o: /usr/include/machine/types.h
lib/SampleBinaryTrees.o: /usr/include/i386/types.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_int8_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_int16_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_int32_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_int64_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_u_int8_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_u_int16_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_u_int32_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_u_int64_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_intptr_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_uintptr_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_null.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_size_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_time_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_timespec.h
lib/SampleBinaryTrees.o: /usr/include/math.h lib/BinaryTree.h lib/vector.h
lib/SampleBinaryTrees.o: lib/vector.hpp lib/BinaryTree.hpp lib/string.h
lib/Stack.o: lib/Stack.hpp /usr/include/assert.h /usr/include/sys/cdefs.h
lib/Stack.o: /usr/include/sys/_symbol_aliasing.h
lib/Stack.o: /usr/include/sys/_posix_availability.h lib/DLinkedList.h
lib/Stack.o: lib/DLinkedList.hpp
lib/Utils.o: /usr/include/stdio.h /usr/include/_stdio.h
lib/Utils.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
lib/Utils.o: /usr/include/sys/_posix_availability.h
lib/Utils.o: /usr/include/Availability.h /usr/include/AvailabilityInternal.h
lib/Utils.o: /usr/include/_types.h /usr/include/sys/_types.h
lib/Utils.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
lib/Utils.o: /usr/include/sys/_pthread/_pthread_types.h
lib/Utils.o: /usr/include/sys/_types/_va_list.h /usr/include/machine/types.h
lib/Utils.o: /usr/include/i386/types.h /usr/include/sys/_types/_int8_t.h
lib/Utils.o: /usr/include/sys/_types/_int16_t.h
lib/Utils.o: /usr/include/sys/_types/_int32_t.h
lib/Utils.o: /usr/include/sys/_types/_int64_t.h
lib/Utils.o: /usr/include/sys/_types/_u_int8_t.h
lib/Utils.o: /usr/include/sys/_types/_u_int16_t.h
lib/Utils.o: /usr/include/sys/_types/_u_int32_t.h
lib/Utils.o: /usr/include/sys/_types/_u_int64_t.h
lib/Utils.o: /usr/include/sys/_types/_intptr_t.h
lib/Utils.o: /usr/include/sys/_types/_uintptr_t.h
lib/Utils.o: /usr/include/sys/_types/_size_t.h
lib/Utils.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
lib/Utils.o: /usr/include/sys/_types/_off_t.h
lib/Utils.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
lib/Utils.o: /usr/include/secure/_common.h lib/string.h lib/vector.h
lib/Utils.o: lib/vector.hpp
lib/bubblesort.o: lib/Utils.h /usr/include/stdio.h /usr/include/_stdio.h
lib/bubblesort.o: /usr/include/sys/cdefs.h
lib/bubblesort.o: /usr/include/sys/_symbol_aliasing.h
lib/bubblesort.o: /usr/include/sys/_posix_availability.h
lib/bubblesort.o: /usr/include/Availability.h
lib/bubblesort.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
lib/bubblesort.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
lib/bubblesort.o: /usr/include/i386/_types.h
lib/bubblesort.o: /usr/include/sys/_pthread/_pthread_types.h
lib/bubblesort.o: /usr/include/sys/_types/_va_list.h
lib/bubblesort.o: /usr/include/machine/types.h /usr/include/i386/types.h
lib/bubblesort.o: /usr/include/sys/_types/_int8_t.h
lib/bubblesort.o: /usr/include/sys/_types/_int16_t.h
lib/bubblesort.o: /usr/include/sys/_types/_int32_t.h
lib/bubblesort.o: /usr/include/sys/_types/_int64_t.h
lib/bubblesort.o: /usr/include/sys/_types/_u_int8_t.h
lib/bubblesort.o: /usr/include/sys/_types/_u_int16_t.h
lib/bubblesort.o: /usr/include/sys/_types/_u_int32_t.h
lib/bubblesort.o: /usr/include/sys/_types/_u_int64_t.h
lib/bubblesort.o: /usr/include/sys/_types/_intptr_t.h
lib/bubblesort.o: /usr/include/sys/_types/_uintptr_t.h
lib/bubblesort.o: /usr/include/sys/_types/_size_t.h
lib/bubblesort.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
lib/bubblesort.o: /usr/include/sys/_types/_off_t.h
lib/bubblesort.o: /usr/include/sys/_types/_ssize_t.h
lib/bubblesort.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
lib/bubblesort.o: lib/string.h lib/vector.h lib/vector.hpp lib/bubblesort.hpp
lib/bucketsort.o: lib/vector.h lib/vector.hpp
lib/digraph.o: lib/string.h lib/vector.h lib/vector.hpp
lib/hash_table.o: lib/string.h lib/vector.h lib/vector.hpp
lib/hash_table.o: /usr/include/assert.h /usr/include/sys/cdefs.h
lib/hash_table.o: /usr/include/sys/_symbol_aliasing.h
lib/hash_table.o: /usr/include/sys/_posix_availability.h lib/hash_table.hpp
lib/heapsort.o: /usr/include/assert.h /usr/include/sys/cdefs.h
lib/heapsort.o: /usr/include/sys/_symbol_aliasing.h
lib/heapsort.o: /usr/include/sys/_posix_availability.h
lib/mergesort.o: lib/vector.h lib/vector.hpp
lib/vector.o: lib/vector.hpp
lib/Stack.o: /usr/include/assert.h /usr/include/sys/cdefs.h
lib/Stack.o: /usr/include/sys/_symbol_aliasing.h
lib/Stack.o: /usr/include/sys/_posix_availability.h lib/DLinkedList.h
lib/Stack.o: lib/DLinkedList.hpp
lib/bubblesort.o: lib/Utils.h /usr/include/stdio.h /usr/include/_stdio.h
lib/bubblesort.o: /usr/include/sys/cdefs.h
lib/bubblesort.o: /usr/include/sys/_symbol_aliasing.h
lib/bubblesort.o: /usr/include/sys/_posix_availability.h
lib/bubblesort.o: /usr/include/Availability.h
lib/bubblesort.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
lib/bubblesort.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
lib/bubblesort.o: /usr/include/i386/_types.h
lib/bubblesort.o: /usr/include/sys/_pthread/_pthread_types.h
lib/bubblesort.o: /usr/include/sys/_types/_va_list.h
lib/bubblesort.o: /usr/include/machine/types.h /usr/include/i386/types.h
lib/bubblesort.o: /usr/include/sys/_types/_int8_t.h
lib/bubblesort.o: /usr/include/sys/_types/_int16_t.h
lib/bubblesort.o: /usr/include/sys/_types/_int32_t.h
lib/bubblesort.o: /usr/include/sys/_types/_int64_t.h
lib/bubblesort.o: /usr/include/sys/_types/_u_int8_t.h
lib/bubblesort.o: /usr/include/sys/_types/_u_int16_t.h
lib/bubblesort.o: /usr/include/sys/_types/_u_int32_t.h
lib/bubblesort.o: /usr/include/sys/_types/_u_int64_t.h
lib/bubblesort.o: /usr/include/sys/_types/_intptr_t.h
lib/bubblesort.o: /usr/include/sys/_types/_uintptr_t.h
lib/bubblesort.o: /usr/include/sys/_types/_size_t.h
lib/bubblesort.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
lib/bubblesort.o: /usr/include/sys/_types/_off_t.h
lib/bubblesort.o: /usr/include/sys/_types/_ssize_t.h
lib/bubblesort.o: /usr/include/secure/_stdio.h /usr/include/secure/_common.h
lib/bubblesort.o: lib/string.h lib/vector.h lib/vector.hpp
lib/BinaryTreeRenderer.o: lib/BinaryTreeRenderer.h lib/BinaryTree.h
lib/BinaryTreeRenderer.o: lib/vector.h lib/vector.hpp lib/BinaryTree.hpp
lib/BinaryTreeRenderer.o: /usr/include/unistd.h /usr/include/_types.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_symbol_aliasing.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_posix_availability.h
lib/BinaryTreeRenderer.o: /usr/include/machine/_types.h
lib/BinaryTreeRenderer.o: /usr/include/i386/_types.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_pthread/_pthread_types.h
lib/BinaryTreeRenderer.o: /usr/include/sys/unistd.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_posix_vdisable.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_seek_set.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_size_t.h
lib/BinaryTreeRenderer.o: /usr/include/_types/_uint64_t.h
lib/BinaryTreeRenderer.o: /usr/include/_types/_uint32_t.h
lib/BinaryTreeRenderer.o: /usr/include/Availability.h
lib/BinaryTreeRenderer.o: /usr/include/AvailabilityInternal.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_ssize_t.h
lib/BinaryTreeRenderer.o: /usr/include/machine/types.h
lib/BinaryTreeRenderer.o: /usr/include/i386/types.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_int8_t.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_int16_t.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_int32_t.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_int64_t.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_u_int8_t.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_u_int16_t.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_u_int32_t.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_u_int64_t.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_intptr_t.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_uintptr_t.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_uid_t.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_gid_t.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_off_t.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_pid_t.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_useconds_t.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_null.h
lib/BinaryTreeRenderer.o: /usr/include/sys/select.h
lib/BinaryTreeRenderer.o: /usr/include/sys/appleapiopts.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_fd_def.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_timespec.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_timeval.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_time_t.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_suseconds_t.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_sigset_t.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_fd_setsize.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_fd_set.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_fd_clr.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_fd_isset.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_fd_zero.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_fd_copy.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_select.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_dev_t.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_mode_t.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_uuid_t.h
lib/BinaryTreeRenderer.o: /usr/include/gethostuuid.h /usr/include/stdio.h
lib/BinaryTreeRenderer.o: /usr/include/_stdio.h
lib/BinaryTreeRenderer.o: /usr/include/sys/_types/_va_list.h
lib/BinaryTreeRenderer.o: /usr/include/sys/stdio.h
lib/BinaryTreeRenderer.o: /usr/include/secure/_stdio.h
lib/BinaryTreeRenderer.o: /usr/include/secure/_common.h
lib/SampleBinaryTrees.o: /usr/include/assert.h /usr/include/sys/cdefs.h
lib/SampleBinaryTrees.o: /usr/include/sys/_symbol_aliasing.h
lib/SampleBinaryTrees.o: /usr/include/sys/_posix_availability.h
lib/SampleBinaryTrees.o: /usr/include/time.h /usr/include/_types.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types.h
lib/SampleBinaryTrees.o: /usr/include/machine/_types.h
lib/SampleBinaryTrees.o: /usr/include/i386/_types.h
lib/SampleBinaryTrees.o: /usr/include/sys/_pthread/_pthread_types.h
lib/SampleBinaryTrees.o: /usr/include/Availability.h
lib/SampleBinaryTrees.o: /usr/include/AvailabilityInternal.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_clock_t.h
lib/SampleBinaryTrees.o: /usr/include/machine/types.h
lib/SampleBinaryTrees.o: /usr/include/i386/types.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_int8_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_int16_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_int32_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_int64_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_u_int8_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_u_int16_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_u_int32_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_u_int64_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_intptr_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_uintptr_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_null.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_size_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_time_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_timespec.h
lib/SampleBinaryTrees.o: /usr/include/math.h lib/SampleBinaryTrees.h
lib/SampleBinaryTrees.o: lib/BinaryTree.h lib/vector.h lib/vector.hpp
lib/SampleBinaryTrees.o: lib/BinaryTree.hpp lib/string.h lib/Utils.h
lib/SampleBinaryTrees.o: /usr/include/stdio.h /usr/include/_stdio.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_va_list.h
lib/SampleBinaryTrees.o: /usr/include/sys/stdio.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_off_t.h
lib/SampleBinaryTrees.o: /usr/include/sys/_types/_ssize_t.h
lib/SampleBinaryTrees.o: /usr/include/secure/_stdio.h
lib/SampleBinaryTrees.o: /usr/include/secure/_common.h
lib/Utils.o: lib/Utils.h /usr/include/stdio.h /usr/include/_stdio.h
lib/Utils.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
lib/Utils.o: /usr/include/sys/_posix_availability.h
lib/Utils.o: /usr/include/Availability.h /usr/include/AvailabilityInternal.h
lib/Utils.o: /usr/include/_types.h /usr/include/sys/_types.h
lib/Utils.o: /usr/include/machine/_types.h /usr/include/i386/_types.h
lib/Utils.o: /usr/include/sys/_pthread/_pthread_types.h
lib/Utils.o: /usr/include/sys/_types/_va_list.h /usr/include/machine/types.h
lib/Utils.o: /usr/include/i386/types.h /usr/include/sys/_types/_int8_t.h
lib/Utils.o: /usr/include/sys/_types/_int16_t.h
lib/Utils.o: /usr/include/sys/_types/_int32_t.h
lib/Utils.o: /usr/include/sys/_types/_int64_t.h
lib/Utils.o: /usr/include/sys/_types/_u_int8_t.h
lib/Utils.o: /usr/include/sys/_types/_u_int16_t.h
lib/Utils.o: /usr/include/sys/_types/_u_int32_t.h
lib/Utils.o: /usr/include/sys/_types/_u_int64_t.h
lib/Utils.o: /usr/include/sys/_types/_intptr_t.h
lib/Utils.o: /usr/include/sys/_types/_uintptr_t.h
lib/Utils.o: /usr/include/sys/_types/_size_t.h
lib/Utils.o: /usr/include/sys/_types/_null.h /usr/include/sys/stdio.h
lib/Utils.o: /usr/include/sys/_types/_off_t.h
lib/Utils.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
lib/Utils.o: /usr/include/secure/_common.h lib/string.h lib/vector.h
lib/Utils.o: lib/vector.hpp /usr/include/assert.h /usr/include/stdlib.h
lib/Utils.o: /usr/include/sys/wait.h /usr/include/sys/_types/_pid_t.h
lib/Utils.o: /usr/include/sys/_types/_id_t.h /usr/include/sys/signal.h
lib/Utils.o: /usr/include/sys/appleapiopts.h /usr/include/machine/signal.h
lib/Utils.o: /usr/include/i386/signal.h /usr/include/machine/_mcontext.h
lib/Utils.o: /usr/include/i386/_mcontext.h
lib/Utils.o: /usr/include/mach/machine/_structs.h
lib/Utils.o: /usr/include/mach/i386/_structs.h
lib/Utils.o: /usr/include/sys/_pthread/_pthread_attr_t.h
lib/Utils.o: /usr/include/sys/_types/_sigaltstack.h
lib/Utils.o: /usr/include/sys/_types/_ucontext.h
lib/Utils.o: /usr/include/sys/_types/_sigset_t.h
lib/Utils.o: /usr/include/sys/_types/_uid_t.h /usr/include/sys/resource.h
lib/Utils.o: /usr/include/stdint.h /usr/include/_types/_uint8_t.h
lib/Utils.o: /usr/include/_types/_uint16_t.h /usr/include/_types/_uint32_t.h
lib/Utils.o: /usr/include/_types/_uint64_t.h /usr/include/_types/_intmax_t.h
lib/Utils.o: /usr/include/_types/_uintmax_t.h
lib/Utils.o: /usr/include/sys/_types/_timeval.h /usr/include/machine/endian.h
lib/Utils.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
lib/Utils.o: /usr/include/libkern/_OSByteOrder.h
lib/Utils.o: /usr/include/libkern/i386/_OSByteOrder.h /usr/include/alloca.h
lib/Utils.o: /usr/include/sys/_types/_ct_rune_t.h
lib/Utils.o: /usr/include/sys/_types/_rune_t.h
lib/Utils.o: /usr/include/sys/_types/_wchar_t.h
lib/Utils.o: /usr/include/sys/_types/_dev_t.h
lib/Utils.o: /usr/include/sys/_types/_mode_t.h /usr/include/uuid/uuid.h
lib/Utils.o: /usr/include/sys/_types/_uuid_t.h
lib/assembly-fun.o: /usr/include/assert.h /usr/include/sys/cdefs.h
lib/assembly-fun.o: /usr/include/sys/_symbol_aliasing.h
lib/assembly-fun.o: /usr/include/sys/_posix_availability.h
lib/digraph.o: lib/digraph.h lib/string.h lib/vector.h lib/vector.hpp
lib/string.o: lib/string.h /usr/include/assert.h /usr/include/sys/cdefs.h
lib/string.o: /usr/include/sys/_symbol_aliasing.h
lib/string.o: /usr/include/sys/_posix_availability.h
1.1-arraysAndStrings.o: /usr/include/assert.h /usr/include/sys/cdefs.h
1.1-arraysAndStrings.o: /usr/include/sys/_symbol_aliasing.h
1.1-arraysAndStrings.o: /usr/include/sys/_posix_availability.h lib/string.h
1.1-arraysAndStrings.o: lib/hash_table.h lib/vector.h lib/vector.hpp
1.1-arraysAndStrings.o: lib/hash_table.hpp
1.2-arraysAndStrings.o: /usr/include/assert.h /usr/include/sys/cdefs.h
1.2-arraysAndStrings.o: /usr/include/sys/_symbol_aliasing.h
1.2-arraysAndStrings.o: /usr/include/sys/_posix_availability.h lib/string.h
1.3-arraysAndStrings.o: /usr/include/assert.h /usr/include/sys/cdefs.h
1.3-arraysAndStrings.o: /usr/include/sys/_symbol_aliasing.h
1.3-arraysAndStrings.o: /usr/include/sys/_posix_availability.h
1.4-arraysAndStrings.o: /usr/include/stdlib.h /usr/include/Availability.h
1.4-arraysAndStrings.o: /usr/include/AvailabilityInternal.h
1.4-arraysAndStrings.o: /usr/include/_types.h /usr/include/sys/_types.h
1.4-arraysAndStrings.o: /usr/include/sys/cdefs.h
1.4-arraysAndStrings.o: /usr/include/sys/_symbol_aliasing.h
1.4-arraysAndStrings.o: /usr/include/sys/_posix_availability.h
1.4-arraysAndStrings.o: /usr/include/machine/_types.h
1.4-arraysAndStrings.o: /usr/include/i386/_types.h
1.4-arraysAndStrings.o: /usr/include/sys/_pthread/_pthread_types.h
1.4-arraysAndStrings.o: /usr/include/sys/wait.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_pid_t.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_id_t.h
1.4-arraysAndStrings.o: /usr/include/sys/signal.h
1.4-arraysAndStrings.o: /usr/include/sys/appleapiopts.h
1.4-arraysAndStrings.o: /usr/include/machine/signal.h
1.4-arraysAndStrings.o: /usr/include/i386/signal.h
1.4-arraysAndStrings.o: /usr/include/machine/_mcontext.h
1.4-arraysAndStrings.o: /usr/include/i386/_mcontext.h
1.4-arraysAndStrings.o: /usr/include/mach/machine/_structs.h
1.4-arraysAndStrings.o: /usr/include/mach/i386/_structs.h
1.4-arraysAndStrings.o: /usr/include/machine/types.h
1.4-arraysAndStrings.o: /usr/include/i386/types.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_int8_t.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_int16_t.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_int32_t.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_int64_t.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_u_int8_t.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_u_int16_t.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_u_int32_t.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_u_int64_t.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_intptr_t.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_uintptr_t.h
1.4-arraysAndStrings.o: /usr/include/sys/_pthread/_pthread_attr_t.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_sigaltstack.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_ucontext.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_sigset_t.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_size_t.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_uid_t.h
1.4-arraysAndStrings.o: /usr/include/sys/resource.h /usr/include/stdint.h
1.4-arraysAndStrings.o: /usr/include/_types/_uint8_t.h
1.4-arraysAndStrings.o: /usr/include/_types/_uint16_t.h
1.4-arraysAndStrings.o: /usr/include/_types/_uint32_t.h
1.4-arraysAndStrings.o: /usr/include/_types/_uint64_t.h
1.4-arraysAndStrings.o: /usr/include/_types/_intmax_t.h
1.4-arraysAndStrings.o: /usr/include/_types/_uintmax_t.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_timeval.h
1.4-arraysAndStrings.o: /usr/include/machine/endian.h
1.4-arraysAndStrings.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
1.4-arraysAndStrings.o: /usr/include/libkern/_OSByteOrder.h
1.4-arraysAndStrings.o: /usr/include/libkern/i386/_OSByteOrder.h
1.4-arraysAndStrings.o: /usr/include/alloca.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_ct_rune_t.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_rune_t.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_wchar_t.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_null.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_dev_t.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_mode_t.h
1.4-arraysAndStrings.o: /usr/include/assert.h /usr/include/string.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_rsize_t.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_errno_t.h
1.4-arraysAndStrings.o: /usr/include/sys/_types/_ssize_t.h
1.4-arraysAndStrings.o: /usr/include/strings.h /usr/include/secure/_strings.h
1.4-arraysAndStrings.o: /usr/include/secure/_common.h
1.4-arraysAndStrings.o: /usr/include/secure/_string.h
1.5-arraysAndStrings.o: /usr/include/assert.h /usr/include/sys/cdefs.h
1.5-arraysAndStrings.o: /usr/include/sys/_symbol_aliasing.h
1.5-arraysAndStrings.o: /usr/include/sys/_posix_availability.h
1.6-arraysAndStrings.o: /usr/include/assert.h /usr/include/sys/cdefs.h
1.6-arraysAndStrings.o: /usr/include/sys/_symbol_aliasing.h
1.6-arraysAndStrings.o: /usr/include/sys/_posix_availability.h lib/Utils.h
1.6-arraysAndStrings.o: /usr/include/stdio.h /usr/include/_stdio.h
1.6-arraysAndStrings.o: /usr/include/Availability.h
1.6-arraysAndStrings.o: /usr/include/AvailabilityInternal.h
1.6-arraysAndStrings.o: /usr/include/_types.h /usr/include/sys/_types.h
1.6-arraysAndStrings.o: /usr/include/machine/_types.h
1.6-arraysAndStrings.o: /usr/include/i386/_types.h
1.6-arraysAndStrings.o: /usr/include/sys/_pthread/_pthread_types.h
1.6-arraysAndStrings.o: /usr/include/sys/_types/_va_list.h
1.6-arraysAndStrings.o: /usr/include/machine/types.h
1.6-arraysAndStrings.o: /usr/include/i386/types.h
1.6-arraysAndStrings.o: /usr/include/sys/_types/_int8_t.h
1.6-arraysAndStrings.o: /usr/include/sys/_types/_int16_t.h
1.6-arraysAndStrings.o: /usr/include/sys/_types/_int32_t.h
1.6-arraysAndStrings.o: /usr/include/sys/_types/_int64_t.h
1.6-arraysAndStrings.o: /usr/include/sys/_types/_u_int8_t.h
1.6-arraysAndStrings.o: /usr/include/sys/_types/_u_int16_t.h
1.6-arraysAndStrings.o: /usr/include/sys/_types/_u_int32_t.h
1.6-arraysAndStrings.o: /usr/include/sys/_types/_u_int64_t.h
1.6-arraysAndStrings.o: /usr/include/sys/_types/_intptr_t.h
1.6-arraysAndStrings.o: /usr/include/sys/_types/_uintptr_t.h
1.6-arraysAndStrings.o: /usr/include/sys/_types/_size_t.h
1.6-arraysAndStrings.o: /usr/include/sys/_types/_null.h
1.6-arraysAndStrings.o: /usr/include/sys/stdio.h
1.6-arraysAndStrings.o: /usr/include/sys/_types/_off_t.h
1.6-arraysAndStrings.o: /usr/include/sys/_types/_ssize_t.h
1.6-arraysAndStrings.o: /usr/include/secure/_stdio.h
1.6-arraysAndStrings.o: /usr/include/secure/_common.h lib/string.h
1.6-arraysAndStrings.o: lib/vector.h lib/vector.hpp
1.7-arraysAndStrings.o: lib/Utils.h /usr/include/stdio.h
1.7-arraysAndStrings.o: /usr/include/_stdio.h /usr/include/sys/cdefs.h
1.7-arraysAndStrings.o: /usr/include/sys/_symbol_aliasing.h
1.7-arraysAndStrings.o: /usr/include/sys/_posix_availability.h
1.7-arraysAndStrings.o: /usr/include/Availability.h
1.7-arraysAndStrings.o: /usr/include/AvailabilityInternal.h
1.7-arraysAndStrings.o: /usr/include/_types.h /usr/include/sys/_types.h
1.7-arraysAndStrings.o: /usr/include/machine/_types.h
1.7-arraysAndStrings.o: /usr/include/i386/_types.h
1.7-arraysAndStrings.o: /usr/include/sys/_pthread/_pthread_types.h
1.7-arraysAndStrings.o: /usr/include/sys/_types/_va_list.h
1.7-arraysAndStrings.o: /usr/include/machine/types.h
1.7-arraysAndStrings.o: /usr/include/i386/types.h
1.7-arraysAndStrings.o: /usr/include/sys/_types/_int8_t.h
1.7-arraysAndStrings.o: /usr/include/sys/_types/_int16_t.h
1.7-arraysAndStrings.o: /usr/include/sys/_types/_int32_t.h
1.7-arraysAndStrings.o: /usr/include/sys/_types/_int64_t.h
1.7-arraysAndStrings.o: /usr/include/sys/_types/_u_int8_t.h
1.7-arraysAndStrings.o: /usr/include/sys/_types/_u_int16_t.h
1.7-arraysAndStrings.o: /usr/include/sys/_types/_u_int32_t.h
1.7-arraysAndStrings.o: /usr/include/sys/_types/_u_int64_t.h
1.7-arraysAndStrings.o: /usr/include/sys/_types/_intptr_t.h
1.7-arraysAndStrings.o: /usr/include/sys/_types/_uintptr_t.h
1.7-arraysAndStrings.o: /usr/include/sys/_types/_size_t.h
1.7-arraysAndStrings.o: /usr/include/sys/_types/_null.h
1.7-arraysAndStrings.o: /usr/include/sys/stdio.h
1.7-arraysAndStrings.o: /usr/include/sys/_types/_off_t.h
1.7-arraysAndStrings.o: /usr/include/sys/_types/_ssize_t.h
1.7-arraysAndStrings.o: /usr/include/secure/_stdio.h
1.7-arraysAndStrings.o: /usr/include/secure/_common.h lib/string.h
1.7-arraysAndStrings.o: lib/vector.h lib/vector.hpp /usr/include/assert.h
1.8-arraysAndStrings.o: /usr/include/string.h /usr/include/_types.h
1.8-arraysAndStrings.o: /usr/include/sys/_types.h /usr/include/sys/cdefs.h
1.8-arraysAndStrings.o: /usr/include/sys/_symbol_aliasing.h
1.8-arraysAndStrings.o: /usr/include/sys/_posix_availability.h
1.8-arraysAndStrings.o: /usr/include/machine/_types.h
1.8-arraysAndStrings.o: /usr/include/i386/_types.h
1.8-arraysAndStrings.o: /usr/include/sys/_pthread/_pthread_types.h
1.8-arraysAndStrings.o: /usr/include/Availability.h
1.8-arraysAndStrings.o: /usr/include/AvailabilityInternal.h
1.8-arraysAndStrings.o: /usr/include/sys/_types/_size_t.h
1.8-arraysAndStrings.o: /usr/include/sys/_types/_null.h
1.8-arraysAndStrings.o: /usr/include/sys/_types/_rsize_t.h
1.8-arraysAndStrings.o: /usr/include/machine/types.h
1.8-arraysAndStrings.o: /usr/include/i386/types.h
1.8-arraysAndStrings.o: /usr/include/sys/_types/_int8_t.h
1.8-arraysAndStrings.o: /usr/include/sys/_types/_int16_t.h
1.8-arraysAndStrings.o: /usr/include/sys/_types/_int32_t.h
1.8-arraysAndStrings.o: /usr/include/sys/_types/_int64_t.h
1.8-arraysAndStrings.o: /usr/include/sys/_types/_u_int8_t.h
1.8-arraysAndStrings.o: /usr/include/sys/_types/_u_int16_t.h
1.8-arraysAndStrings.o: /usr/include/sys/_types/_u_int32_t.h
1.8-arraysAndStrings.o: /usr/include/sys/_types/_u_int64_t.h
1.8-arraysAndStrings.o: /usr/include/sys/_types/_intptr_t.h
1.8-arraysAndStrings.o: /usr/include/sys/_types/_uintptr_t.h
1.8-arraysAndStrings.o: /usr/include/sys/_types/_errno_t.h
1.8-arraysAndStrings.o: /usr/include/sys/_types/_ssize_t.h
1.8-arraysAndStrings.o: /usr/include/strings.h /usr/include/secure/_strings.h
1.8-arraysAndStrings.o: /usr/include/secure/_common.h
1.8-arraysAndStrings.o: /usr/include/secure/_string.h /usr/include/assert.h
11.1-sortingAndSearching.o: /usr/include/assert.h /usr/include/sys/cdefs.h
11.1-sortingAndSearching.o: /usr/include/sys/_symbol_aliasing.h
11.1-sortingAndSearching.o: /usr/include/sys/_posix_availability.h
12.1-testing.o: /usr/include/assert.h /usr/include/sys/cdefs.h
12.1-testing.o: /usr/include/sys/_symbol_aliasing.h
12.1-testing.o: /usr/include/sys/_posix_availability.h
13.1-cAndCpp.o: /usr/include/assert.h /usr/include/sys/cdefs.h
13.1-cAndCpp.o: /usr/include/sys/_symbol_aliasing.h
13.1-cAndCpp.o: /usr/include/sys/_posix_availability.h
2.1-linkedLists.o: /usr/include/assert.h /usr/include/sys/cdefs.h
2.1-linkedLists.o: /usr/include/sys/_symbol_aliasing.h
2.1-linkedLists.o: /usr/include/sys/_posix_availability.h lib/LinkedList.h
2.1-linkedLists.o: lib/LinkedList.hpp
2.2-linkedLists.o: lib/LinkedList.h lib/LinkedList.hpp /usr/include/assert.h
2.2-linkedLists.o: /usr/include/sys/cdefs.h
2.2-linkedLists.o: /usr/include/sys/_symbol_aliasing.h
2.2-linkedLists.o: /usr/include/sys/_posix_availability.h
2.3-linkedLists.o: lib/LinkedList.h lib/LinkedList.hpp /usr/include/assert.h
2.3-linkedLists.o: /usr/include/sys/cdefs.h
2.3-linkedLists.o: /usr/include/sys/_symbol_aliasing.h
2.3-linkedLists.o: /usr/include/sys/_posix_availability.h
2.4-linkedLists.o: lib/LinkedList.h lib/LinkedList.hpp /usr/include/assert.h
2.4-linkedLists.o: /usr/include/sys/cdefs.h
2.4-linkedLists.o: /usr/include/sys/_symbol_aliasing.h
2.4-linkedLists.o: /usr/include/sys/_posix_availability.h
2.5-linkedLists.o: lib/LinkedList.h lib/LinkedList.hpp /usr/include/assert.h
2.5-linkedLists.o: /usr/include/sys/cdefs.h
2.5-linkedLists.o: /usr/include/sys/_symbol_aliasing.h
2.5-linkedLists.o: /usr/include/sys/_posix_availability.h
2.6-linkedLists.o: lib/LinkedList.h lib/LinkedList.hpp /usr/include/assert.h
2.6-linkedLists.o: /usr/include/sys/cdefs.h
2.6-linkedLists.o: /usr/include/sys/_symbol_aliasing.h
2.6-linkedLists.o: /usr/include/sys/_posix_availability.h
2.7-linkedLists.o: lib/LinkedList.h lib/LinkedList.hpp /usr/include/assert.h
2.7-linkedLists.o: /usr/include/sys/cdefs.h
2.7-linkedLists.o: /usr/include/sys/_symbol_aliasing.h
2.7-linkedLists.o: /usr/include/sys/_posix_availability.h
3.1-stacksAndQueues.o: /usr/include/assert.h /usr/include/sys/cdefs.h
3.1-stacksAndQueues.o: /usr/include/sys/_symbol_aliasing.h
3.1-stacksAndQueues.o: /usr/include/sys/_posix_availability.h
3.3-stacksAndQueues.o: lib/Stack.h lib/Stack.hpp /usr/include/assert.h
3.3-stacksAndQueues.o: /usr/include/sys/cdefs.h
3.3-stacksAndQueues.o: /usr/include/sys/_symbol_aliasing.h
3.3-stacksAndQueues.o: /usr/include/sys/_posix_availability.h
3.3-stacksAndQueues.o: lib/DLinkedList.h lib/DLinkedList.hpp lib/vector.h
3.3-stacksAndQueues.o: lib/vector.hpp
3.4-stacksAndQueues.o: lib/Stack.h lib/Stack.hpp /usr/include/assert.h
3.4-stacksAndQueues.o: /usr/include/sys/cdefs.h
3.4-stacksAndQueues.o: /usr/include/sys/_symbol_aliasing.h
3.4-stacksAndQueues.o: /usr/include/sys/_posix_availability.h
3.4-stacksAndQueues.o: lib/DLinkedList.h lib/DLinkedList.hpp
3.5-stacksAndQueues.o: lib/Stack.h lib/Stack.hpp /usr/include/assert.h
3.5-stacksAndQueues.o: /usr/include/sys/cdefs.h
3.5-stacksAndQueues.o: /usr/include/sys/_symbol_aliasing.h
3.5-stacksAndQueues.o: /usr/include/sys/_posix_availability.h
3.5-stacksAndQueues.o: lib/DLinkedList.h lib/DLinkedList.hpp
3.6-stacksAndQueues.o: /usr/include/assert.h /usr/include/sys/cdefs.h
3.6-stacksAndQueues.o: /usr/include/sys/_symbol_aliasing.h
3.6-stacksAndQueues.o: /usr/include/sys/_posix_availability.h lib/Stack.h
3.6-stacksAndQueues.o: lib/Stack.hpp lib/DLinkedList.h lib/DLinkedList.hpp
3.6-stacksAndQueues.o: lib/Utils.h /usr/include/stdio.h /usr/include/_stdio.h
3.6-stacksAndQueues.o: /usr/include/Availability.h
3.6-stacksAndQueues.o: /usr/include/AvailabilityInternal.h
3.6-stacksAndQueues.o: /usr/include/_types.h /usr/include/sys/_types.h
3.6-stacksAndQueues.o: /usr/include/machine/_types.h
3.6-stacksAndQueues.o: /usr/include/i386/_types.h
3.6-stacksAndQueues.o: /usr/include/sys/_pthread/_pthread_types.h
3.6-stacksAndQueues.o: /usr/include/sys/_types/_va_list.h
3.6-stacksAndQueues.o: /usr/include/machine/types.h /usr/include/i386/types.h
3.6-stacksAndQueues.o: /usr/include/sys/_types/_int8_t.h
3.6-stacksAndQueues.o: /usr/include/sys/_types/_int16_t.h
3.6-stacksAndQueues.o: /usr/include/sys/_types/_int32_t.h
3.6-stacksAndQueues.o: /usr/include/sys/_types/_int64_t.h
3.6-stacksAndQueues.o: /usr/include/sys/_types/_u_int8_t.h
3.6-stacksAndQueues.o: /usr/include/sys/_types/_u_int16_t.h
3.6-stacksAndQueues.o: /usr/include/sys/_types/_u_int32_t.h
3.6-stacksAndQueues.o: /usr/include/sys/_types/_u_int64_t.h
3.6-stacksAndQueues.o: /usr/include/sys/_types/_intptr_t.h
3.6-stacksAndQueues.o: /usr/include/sys/_types/_uintptr_t.h
3.6-stacksAndQueues.o: /usr/include/sys/_types/_size_t.h
3.6-stacksAndQueues.o: /usr/include/sys/_types/_null.h
3.6-stacksAndQueues.o: /usr/include/sys/stdio.h
3.6-stacksAndQueues.o: /usr/include/sys/_types/_off_t.h
3.6-stacksAndQueues.o: /usr/include/sys/_types/_ssize_t.h
3.6-stacksAndQueues.o: /usr/include/secure/_stdio.h
3.6-stacksAndQueues.o: /usr/include/secure/_common.h lib/string.h
3.6-stacksAndQueues.o: lib/vector.h lib/vector.hpp
3.7-stacksAndQueues.o: lib/DLinkedList.h lib/DLinkedList.hpp
3.7-stacksAndQueues.o: /usr/include/assert.h /usr/include/sys/cdefs.h
3.7-stacksAndQueues.o: /usr/include/sys/_symbol_aliasing.h
3.7-stacksAndQueues.o: /usr/include/sys/_posix_availability.h
4.1-treesAndGraphs.o: /usr/include/assert.h /usr/include/sys/cdefs.h
4.1-treesAndGraphs.o: /usr/include/sys/_symbol_aliasing.h
4.1-treesAndGraphs.o: /usr/include/sys/_posix_availability.h lib/BinaryTree.h
4.1-treesAndGraphs.o: lib/vector.h lib/vector.hpp lib/BinaryTree.hpp
4.2-treesAndGraphs.o: /usr/include/assert.h /usr/include/sys/cdefs.h
4.2-treesAndGraphs.o: /usr/include/sys/_symbol_aliasing.h
4.2-treesAndGraphs.o: /usr/include/sys/_posix_availability.h lib/vector.h
4.2-treesAndGraphs.o: lib/vector.hpp lib/digraph.h lib/string.h
4.3-treesAndGraphs.o: lib/BinaryTree.h lib/vector.h lib/vector.hpp
4.3-treesAndGraphs.o: lib/BinaryTree.hpp /usr/include/assert.h
4.3-treesAndGraphs.o: /usr/include/sys/cdefs.h
4.3-treesAndGraphs.o: /usr/include/sys/_symbol_aliasing.h
4.3-treesAndGraphs.o: /usr/include/sys/_posix_availability.h
4.4-treesAndGraphs.o: lib/BinaryTree.h lib/vector.h lib/vector.hpp
4.4-treesAndGraphs.o: lib/BinaryTree.hpp /usr/include/assert.h
4.4-treesAndGraphs.o: /usr/include/sys/cdefs.h
4.4-treesAndGraphs.o: /usr/include/sys/_symbol_aliasing.h
4.4-treesAndGraphs.o: /usr/include/sys/_posix_availability.h
4.5-treesAndGraphs.o: lib/BinaryTree.h lib/vector.h lib/vector.hpp
4.5-treesAndGraphs.o: lib/BinaryTree.hpp /usr/include/assert.h
4.5-treesAndGraphs.o: /usr/include/sys/cdefs.h
4.5-treesAndGraphs.o: /usr/include/sys/_symbol_aliasing.h
4.5-treesAndGraphs.o: /usr/include/sys/_posix_availability.h
4.6-treesAndGraphs.o: /usr/include/assert.h /usr/include/sys/cdefs.h
4.6-treesAndGraphs.o: /usr/include/sys/_symbol_aliasing.h
4.6-treesAndGraphs.o: /usr/include/sys/_posix_availability.h lib/BinaryTree.h
4.6-treesAndGraphs.o: lib/vector.h lib/vector.hpp lib/BinaryTree.hpp
4.7-treesAndGraphs.o: lib/SampleBinaryTrees.h /usr/include/assert.h
4.7-treesAndGraphs.o: /usr/include/sys/cdefs.h
4.7-treesAndGraphs.o: /usr/include/sys/_symbol_aliasing.h
4.7-treesAndGraphs.o: /usr/include/sys/_posix_availability.h
4.7-treesAndGraphs.o: /usr/include/time.h /usr/include/_types.h
4.7-treesAndGraphs.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
4.7-treesAndGraphs.o: /usr/include/i386/_types.h
4.7-treesAndGraphs.o: /usr/include/sys/_pthread/_pthread_types.h
4.7-treesAndGraphs.o: /usr/include/Availability.h
4.7-treesAndGraphs.o: /usr/include/AvailabilityInternal.h
4.7-treesAndGraphs.o: /usr/include/sys/_types/_clock_t.h
4.7-treesAndGraphs.o: /usr/include/machine/types.h /usr/include/i386/types.h
4.7-treesAndGraphs.o: /usr/include/sys/_types/_int8_t.h
4.7-treesAndGraphs.o: /usr/include/sys/_types/_int16_t.h
4.7-treesAndGraphs.o: /usr/include/sys/_types/_int32_t.h
4.7-treesAndGraphs.o: /usr/include/sys/_types/_int64_t.h
4.7-treesAndGraphs.o: /usr/include/sys/_types/_u_int8_t.h
4.7-treesAndGraphs.o: /usr/include/sys/_types/_u_int16_t.h
4.7-treesAndGraphs.o: /usr/include/sys/_types/_u_int32_t.h
4.7-treesAndGraphs.o: /usr/include/sys/_types/_u_int64_t.h
4.7-treesAndGraphs.o: /usr/include/sys/_types/_intptr_t.h
4.7-treesAndGraphs.o: /usr/include/sys/_types/_uintptr_t.h
4.7-treesAndGraphs.o: /usr/include/sys/_types/_null.h
4.7-treesAndGraphs.o: /usr/include/sys/_types/_size_t.h
4.7-treesAndGraphs.o: /usr/include/sys/_types/_time_t.h
4.7-treesAndGraphs.o: /usr/include/sys/_types/_timespec.h /usr/include/math.h
4.7-treesAndGraphs.o: lib/BinaryTree.h lib/vector.h lib/vector.hpp
4.7-treesAndGraphs.o: lib/BinaryTree.hpp lib/string.h
4.8-treesAndGraphs.o: /usr/include/math.h /usr/include/sys/cdefs.h
4.8-treesAndGraphs.o: /usr/include/sys/_symbol_aliasing.h
4.8-treesAndGraphs.o: /usr/include/sys/_posix_availability.h
4.8-treesAndGraphs.o: /usr/include/Availability.h
4.8-treesAndGraphs.o: /usr/include/AvailabilityInternal.h
4.8-treesAndGraphs.o: /usr/include/assert.h lib/SampleBinaryTrees.h
4.8-treesAndGraphs.o: /usr/include/time.h /usr/include/_types.h
4.8-treesAndGraphs.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
4.8-treesAndGraphs.o: /usr/include/i386/_types.h
4.8-treesAndGraphs.o: /usr/include/sys/_pthread/_pthread_types.h
4.8-treesAndGraphs.o: /usr/include/sys/_types/_clock_t.h
4.8-treesAndGraphs.o: /usr/include/machine/types.h /usr/include/i386/types.h
4.8-treesAndGraphs.o: /usr/include/sys/_types/_int8_t.h
4.8-treesAndGraphs.o: /usr/include/sys/_types/_int16_t.h
4.8-treesAndGraphs.o: /usr/include/sys/_types/_int32_t.h
4.8-treesAndGraphs.o: /usr/include/sys/_types/_int64_t.h
4.8-treesAndGraphs.o: /usr/include/sys/_types/_u_int8_t.h
4.8-treesAndGraphs.o: /usr/include/sys/_types/_u_int16_t.h
4.8-treesAndGraphs.o: /usr/include/sys/_types/_u_int32_t.h
4.8-treesAndGraphs.o: /usr/include/sys/_types/_u_int64_t.h
4.8-treesAndGraphs.o: /usr/include/sys/_types/_intptr_t.h
4.8-treesAndGraphs.o: /usr/include/sys/_types/_uintptr_t.h
4.8-treesAndGraphs.o: /usr/include/sys/_types/_null.h
4.8-treesAndGraphs.o: /usr/include/sys/_types/_size_t.h
4.8-treesAndGraphs.o: /usr/include/sys/_types/_time_t.h
4.8-treesAndGraphs.o: /usr/include/sys/_types/_timespec.h lib/BinaryTree.h
4.8-treesAndGraphs.o: lib/vector.h lib/vector.hpp lib/BinaryTree.hpp
4.8-treesAndGraphs.o: lib/string.h lib/Utils.h /usr/include/stdio.h
4.8-treesAndGraphs.o: /usr/include/_stdio.h
4.8-treesAndGraphs.o: /usr/include/sys/_types/_va_list.h
4.8-treesAndGraphs.o: /usr/include/sys/stdio.h
4.8-treesAndGraphs.o: /usr/include/sys/_types/_off_t.h
4.8-treesAndGraphs.o: /usr/include/sys/_types/_ssize_t.h
4.8-treesAndGraphs.o: /usr/include/secure/_stdio.h
4.8-treesAndGraphs.o: /usr/include/secure/_common.h lib/BinaryTreeRenderer.h
4.9-treesAndGraphs.o: lib/BinaryTree.h lib/vector.h lib/vector.hpp
4.9-treesAndGraphs.o: lib/BinaryTree.hpp lib/SampleBinaryTrees.h
4.9-treesAndGraphs.o: /usr/include/assert.h /usr/include/sys/cdefs.h
4.9-treesAndGraphs.o: /usr/include/sys/_symbol_aliasing.h
4.9-treesAndGraphs.o: /usr/include/sys/_posix_availability.h
4.9-treesAndGraphs.o: /usr/include/time.h /usr/include/_types.h
4.9-treesAndGraphs.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
4.9-treesAndGraphs.o: /usr/include/i386/_types.h
4.9-treesAndGraphs.o: /usr/include/sys/_pthread/_pthread_types.h
4.9-treesAndGraphs.o: /usr/include/Availability.h
4.9-treesAndGraphs.o: /usr/include/AvailabilityInternal.h
4.9-treesAndGraphs.o: /usr/include/sys/_types/_clock_t.h
4.9-treesAndGraphs.o: /usr/include/machine/types.h /usr/include/i386/types.h
4.9-treesAndGraphs.o: /usr/include/sys/_types/_int8_t.h
4.9-treesAndGraphs.o: /usr/include/sys/_types/_int16_t.h
4.9-treesAndGraphs.o: /usr/include/sys/_types/_int32_t.h
4.9-treesAndGraphs.o: /usr/include/sys/_types/_int64_t.h
4.9-treesAndGraphs.o: /usr/include/sys/_types/_u_int8_t.h
4.9-treesAndGraphs.o: /usr/include/sys/_types/_u_int16_t.h
4.9-treesAndGraphs.o: /usr/include/sys/_types/_u_int32_t.h
4.9-treesAndGraphs.o: /usr/include/sys/_types/_u_int64_t.h
4.9-treesAndGraphs.o: /usr/include/sys/_types/_intptr_t.h
4.9-treesAndGraphs.o: /usr/include/sys/_types/_uintptr_t.h
4.9-treesAndGraphs.o: /usr/include/sys/_types/_null.h
4.9-treesAndGraphs.o: /usr/include/sys/_types/_size_t.h
4.9-treesAndGraphs.o: /usr/include/sys/_types/_time_t.h
4.9-treesAndGraphs.o: /usr/include/sys/_types/_timespec.h /usr/include/math.h
4.9-treesAndGraphs.o: lib/string.h
5.1-bitManipulation.o: lib/Utils.h /usr/include/stdio.h /usr/include/_stdio.h
5.1-bitManipulation.o: /usr/include/sys/cdefs.h
5.1-bitManipulation.o: /usr/include/sys/_symbol_aliasing.h
5.1-bitManipulation.o: /usr/include/sys/_posix_availability.h
5.1-bitManipulation.o: /usr/include/Availability.h
5.1-bitManipulation.o: /usr/include/AvailabilityInternal.h
5.1-bitManipulation.o: /usr/include/_types.h /usr/include/sys/_types.h
5.1-bitManipulation.o: /usr/include/machine/_types.h
5.1-bitManipulation.o: /usr/include/i386/_types.h
5.1-bitManipulation.o: /usr/include/sys/_pthread/_pthread_types.h
5.1-bitManipulation.o: /usr/include/sys/_types/_va_list.h
5.1-bitManipulation.o: /usr/include/machine/types.h /usr/include/i386/types.h
5.1-bitManipulation.o: /usr/include/sys/_types/_int8_t.h
5.1-bitManipulation.o: /usr/include/sys/_types/_int16_t.h
5.1-bitManipulation.o: /usr/include/sys/_types/_int32_t.h
5.1-bitManipulation.o: /usr/include/sys/_types/_int64_t.h
5.1-bitManipulation.o: /usr/include/sys/_types/_u_int8_t.h
5.1-bitManipulation.o: /usr/include/sys/_types/_u_int16_t.h
5.1-bitManipulation.o: /usr/include/sys/_types/_u_int32_t.h
5.1-bitManipulation.o: /usr/include/sys/_types/_u_int64_t.h
5.1-bitManipulation.o: /usr/include/sys/_types/_intptr_t.h
5.1-bitManipulation.o: /usr/include/sys/_types/_uintptr_t.h
5.1-bitManipulation.o: /usr/include/sys/_types/_size_t.h
5.1-bitManipulation.o: /usr/include/sys/_types/_null.h
5.1-bitManipulation.o: /usr/include/sys/stdio.h
5.1-bitManipulation.o: /usr/include/sys/_types/_off_t.h
5.1-bitManipulation.o: /usr/include/sys/_types/_ssize_t.h
5.1-bitManipulation.o: /usr/include/secure/_stdio.h
5.1-bitManipulation.o: /usr/include/secure/_common.h lib/string.h
5.1-bitManipulation.o: lib/vector.h lib/vector.hpp
5.2-bitManipulation.o: /usr/include/limits.h /usr/include/sys/cdefs.h
5.2-bitManipulation.o: /usr/include/sys/_symbol_aliasing.h
5.2-bitManipulation.o: /usr/include/sys/_posix_availability.h
5.2-bitManipulation.o: /usr/include/machine/limits.h
5.2-bitManipulation.o: /usr/include/i386/limits.h /usr/include/i386/_limits.h
5.2-bitManipulation.o: /usr/include/sys/syslimits.h /usr/include/assert.h
5.2-bitManipulation.o: lib/Utils.h /usr/include/stdio.h /usr/include/_stdio.h
5.2-bitManipulation.o: /usr/include/Availability.h
5.2-bitManipulation.o: /usr/include/AvailabilityInternal.h
5.2-bitManipulation.o: /usr/include/_types.h /usr/include/sys/_types.h
5.2-bitManipulation.o: /usr/include/machine/_types.h
5.2-bitManipulation.o: /usr/include/i386/_types.h
5.2-bitManipulation.o: /usr/include/sys/_pthread/_pthread_types.h
5.2-bitManipulation.o: /usr/include/sys/_types/_va_list.h
5.2-bitManipulation.o: /usr/include/machine/types.h /usr/include/i386/types.h
5.2-bitManipulation.o: /usr/include/sys/_types/_int8_t.h
5.2-bitManipulation.o: /usr/include/sys/_types/_int16_t.h
5.2-bitManipulation.o: /usr/include/sys/_types/_int32_t.h
5.2-bitManipulation.o: /usr/include/sys/_types/_int64_t.h
5.2-bitManipulation.o: /usr/include/sys/_types/_u_int8_t.h
5.2-bitManipulation.o: /usr/include/sys/_types/_u_int16_t.h
5.2-bitManipulation.o: /usr/include/sys/_types/_u_int32_t.h
5.2-bitManipulation.o: /usr/include/sys/_types/_u_int64_t.h
5.2-bitManipulation.o: /usr/include/sys/_types/_intptr_t.h
5.2-bitManipulation.o: /usr/include/sys/_types/_uintptr_t.h
5.2-bitManipulation.o: /usr/include/sys/_types/_size_t.h
5.2-bitManipulation.o: /usr/include/sys/_types/_null.h
5.2-bitManipulation.o: /usr/include/sys/stdio.h
5.2-bitManipulation.o: /usr/include/sys/_types/_off_t.h
5.2-bitManipulation.o: /usr/include/sys/_types/_ssize_t.h
5.2-bitManipulation.o: /usr/include/secure/_stdio.h
5.2-bitManipulation.o: /usr/include/secure/_common.h lib/string.h
5.2-bitManipulation.o: lib/vector.h lib/vector.hpp /usr/include/stdlib.h
5.2-bitManipulation.o: /usr/include/sys/wait.h
5.2-bitManipulation.o: /usr/include/sys/_types/_pid_t.h
5.2-bitManipulation.o: /usr/include/sys/_types/_id_t.h
5.2-bitManipulation.o: /usr/include/sys/signal.h
5.2-bitManipulation.o: /usr/include/sys/appleapiopts.h
5.2-bitManipulation.o: /usr/include/machine/signal.h
5.2-bitManipulation.o: /usr/include/i386/signal.h
5.2-bitManipulation.o: /usr/include/machine/_mcontext.h
5.2-bitManipulation.o: /usr/include/i386/_mcontext.h
5.2-bitManipulation.o: /usr/include/mach/machine/_structs.h
5.2-bitManipulation.o: /usr/include/mach/i386/_structs.h
5.2-bitManipulation.o: /usr/include/sys/_pthread/_pthread_attr_t.h
5.2-bitManipulation.o: /usr/include/sys/_types/_sigaltstack.h
5.2-bitManipulation.o: /usr/include/sys/_types/_ucontext.h
5.2-bitManipulation.o: /usr/include/sys/_types/_sigset_t.h
5.2-bitManipulation.o: /usr/include/sys/_types/_uid_t.h
5.2-bitManipulation.o: /usr/include/sys/resource.h /usr/include/stdint.h
5.2-bitManipulation.o: /usr/include/_types/_uint8_t.h
5.2-bitManipulation.o: /usr/include/_types/_uint16_t.h
5.2-bitManipulation.o: /usr/include/_types/_uint32_t.h
5.2-bitManipulation.o: /usr/include/_types/_uint64_t.h
5.2-bitManipulation.o: /usr/include/_types/_intmax_t.h
5.2-bitManipulation.o: /usr/include/_types/_uintmax_t.h
5.2-bitManipulation.o: /usr/include/sys/_types/_timeval.h
5.2-bitManipulation.o: /usr/include/machine/endian.h
5.2-bitManipulation.o: /usr/include/i386/endian.h /usr/include/sys/_endian.h
5.2-bitManipulation.o: /usr/include/libkern/_OSByteOrder.h
5.2-bitManipulation.o: /usr/include/libkern/i386/_OSByteOrder.h
5.2-bitManipulation.o: /usr/include/alloca.h
5.2-bitManipulation.o: /usr/include/sys/_types/_ct_rune_t.h
5.2-bitManipulation.o: /usr/include/sys/_types/_rune_t.h
5.2-bitManipulation.o: /usr/include/sys/_types/_wchar_t.h
5.2-bitManipulation.o: /usr/include/sys/_types/_dev_t.h
5.2-bitManipulation.o: /usr/include/sys/_types/_mode_t.h
5.3-bitManipulation.o: /usr/include/math.h /usr/include/sys/cdefs.h
5.3-bitManipulation.o: /usr/include/sys/_symbol_aliasing.h
5.3-bitManipulation.o: /usr/include/sys/_posix_availability.h
5.3-bitManipulation.o: /usr/include/Availability.h
5.3-bitManipulation.o: /usr/include/AvailabilityInternal.h
5.3-bitManipulation.o: /usr/include/assert.h
5.4-bitManipulation.o: /usr/include/assert.h /usr/include/sys/cdefs.h
5.4-bitManipulation.o: /usr/include/sys/_symbol_aliasing.h
5.4-bitManipulation.o: /usr/include/sys/_posix_availability.h
5.5-bitManipulation.o: /usr/include/assert.h /usr/include/sys/cdefs.h
5.5-bitManipulation.o: /usr/include/sys/_symbol_aliasing.h
5.5-bitManipulation.o: /usr/include/sys/_posix_availability.h
5.6-bitManipulation.o: /usr/include/assert.h /usr/include/sys/cdefs.h
5.6-bitManipulation.o: /usr/include/sys/_symbol_aliasing.h
5.6-bitManipulation.o: /usr/include/sys/_posix_availability.h
5.7-bitManipulation.o: /usr/include/assert.h /usr/include/sys/cdefs.h
5.7-bitManipulation.o: /usr/include/sys/_symbol_aliasing.h
5.7-bitManipulation.o: /usr/include/sys/_posix_availability.h lib/vector.h
5.7-bitManipulation.o: lib/vector.hpp
7.3-mathematicsAndProbability.o: /usr/include/assert.h
7.3-mathematicsAndProbability.o: /usr/include/sys/cdefs.h
7.3-mathematicsAndProbability.o: /usr/include/sys/_symbol_aliasing.h
7.3-mathematicsAndProbability.o: /usr/include/sys/_posix_availability.h
7.4-mathematicsAndProbability.o: /usr/include/assert.h
7.4-mathematicsAndProbability.o: /usr/include/sys/cdefs.h
7.4-mathematicsAndProbability.o: /usr/include/sys/_symbol_aliasing.h
7.4-mathematicsAndProbability.o: /usr/include/sys/_posix_availability.h
8.10-objectOrientedDesign.o: lib/hash_table.h lib/string.h lib/vector.h
8.10-objectOrientedDesign.o: lib/vector.hpp /usr/include/assert.h
8.10-objectOrientedDesign.o: /usr/include/sys/cdefs.h
8.10-objectOrientedDesign.o: /usr/include/sys/_symbol_aliasing.h
8.10-objectOrientedDesign.o: /usr/include/sys/_posix_availability.h
8.10-objectOrientedDesign.o: lib/hash_table.hpp lib/Utils.h
8.10-objectOrientedDesign.o: /usr/include/stdio.h /usr/include/_stdio.h
8.10-objectOrientedDesign.o: /usr/include/Availability.h
8.10-objectOrientedDesign.o: /usr/include/AvailabilityInternal.h
8.10-objectOrientedDesign.o: /usr/include/_types.h /usr/include/sys/_types.h
8.10-objectOrientedDesign.o: /usr/include/machine/_types.h
8.10-objectOrientedDesign.o: /usr/include/i386/_types.h
8.10-objectOrientedDesign.o: /usr/include/sys/_pthread/_pthread_types.h
8.10-objectOrientedDesign.o: /usr/include/sys/_types/_va_list.h
8.10-objectOrientedDesign.o: /usr/include/machine/types.h
8.10-objectOrientedDesign.o: /usr/include/i386/types.h
8.10-objectOrientedDesign.o: /usr/include/sys/_types/_int8_t.h
8.10-objectOrientedDesign.o: /usr/include/sys/_types/_int16_t.h
8.10-objectOrientedDesign.o: /usr/include/sys/_types/_int32_t.h
8.10-objectOrientedDesign.o: /usr/include/sys/_types/_int64_t.h
8.10-objectOrientedDesign.o: /usr/include/sys/_types/_u_int8_t.h
8.10-objectOrientedDesign.o: /usr/include/sys/_types/_u_int16_t.h
8.10-objectOrientedDesign.o: /usr/include/sys/_types/_u_int32_t.h
8.10-objectOrientedDesign.o: /usr/include/sys/_types/_u_int64_t.h
8.10-objectOrientedDesign.o: /usr/include/sys/_types/_intptr_t.h
8.10-objectOrientedDesign.o: /usr/include/sys/_types/_uintptr_t.h
8.10-objectOrientedDesign.o: /usr/include/sys/_types/_size_t.h
8.10-objectOrientedDesign.o: /usr/include/sys/_types/_null.h
8.10-objectOrientedDesign.o: /usr/include/sys/stdio.h
8.10-objectOrientedDesign.o: /usr/include/sys/_types/_off_t.h
8.10-objectOrientedDesign.o: /usr/include/sys/_types/_ssize_t.h
8.10-objectOrientedDesign.o: /usr/include/secure/_stdio.h
8.10-objectOrientedDesign.o: /usr/include/secure/_common.h
9.1-recursionAndDynamicProgramming.o: /usr/include/assert.h
9.1-recursionAndDynamicProgramming.o: /usr/include/sys/cdefs.h
9.1-recursionAndDynamicProgramming.o: /usr/include/sys/_symbol_aliasing.h
9.1-recursionAndDynamicProgramming.o: /usr/include/sys/_posix_availability.h
9.4-recursionAndDynamicProgramming.o: /usr/include/assert.h
9.4-recursionAndDynamicProgramming.o: /usr/include/sys/cdefs.h
9.4-recursionAndDynamicProgramming.o: /usr/include/sys/_symbol_aliasing.h
9.4-recursionAndDynamicProgramming.o: /usr/include/sys/_posix_availability.h
9.4-recursionAndDynamicProgramming.o: lib/vector.h lib/vector.hpp
9.6-recursionAndDynamicProgramming.o: lib/string.h lib/vector.h
9.6-recursionAndDynamicProgramming.o: lib/vector.hpp /usr/include/assert.h
9.6-recursionAndDynamicProgramming.o: /usr/include/sys/cdefs.h
9.6-recursionAndDynamicProgramming.o: /usr/include/sys/_symbol_aliasing.h
9.6-recursionAndDynamicProgramming.o: /usr/include/sys/_posix_availability.h
9.7-recursionAndDynamicProgramming.o: /usr/include/unistd.h
9.7-recursionAndDynamicProgramming.o: /usr/include/_types.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/cdefs.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_symbol_aliasing.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_posix_availability.h
9.7-recursionAndDynamicProgramming.o: /usr/include/machine/_types.h
9.7-recursionAndDynamicProgramming.o: /usr/include/i386/_types.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_pthread/_pthread_types.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/unistd.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_posix_vdisable.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_seek_set.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_size_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/_types/_uint64_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/_types/_uint32_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/Availability.h
9.7-recursionAndDynamicProgramming.o: /usr/include/AvailabilityInternal.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_ssize_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/machine/types.h
9.7-recursionAndDynamicProgramming.o: /usr/include/i386/types.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_int8_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_int16_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_int32_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_int64_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_u_int8_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_u_int16_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_u_int32_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_u_int64_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_intptr_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_uintptr_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_uid_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_gid_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_off_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_pid_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_useconds_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_null.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/select.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/appleapiopts.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_fd_def.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_timespec.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_timeval.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_time_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_suseconds_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_sigset_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_fd_setsize.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_fd_set.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_fd_clr.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_fd_isset.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_fd_zero.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_fd_copy.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_select.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_dev_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_mode_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/sys/_types/_uuid_t.h
9.7-recursionAndDynamicProgramming.o: /usr/include/gethostuuid.h
9.7-recursionAndDynamicProgramming.o: /usr/include/assert.h
9.8-recursionAndDynamicProgramming.o: lib/vector.h lib/vector.hpp
9.8-recursionAndDynamicProgramming.o: lib/numeric.h /usr/include/assert.h
9.8-recursionAndDynamicProgramming.o: /usr/include/sys/cdefs.h
9.8-recursionAndDynamicProgramming.o: /usr/include/sys/_symbol_aliasing.h
9.8-recursionAndDynamicProgramming.o: /usr/include/sys/_posix_availability.h
9.x.0-recursionAndDynamicProgramming.o: /usr/include/assert.h
9.x.0-recursionAndDynamicProgramming.o: /usr/include/sys/cdefs.h
9.x.0-recursionAndDynamicProgramming.o: /usr/include/sys/_symbol_aliasing.h
9.x.0-recursionAndDynamicProgramming.o: /usr/include/sys/_posix_availability.h
main.o: lib/Utils.h /usr/include/stdio.h /usr/include/_stdio.h
main.o: /usr/include/sys/cdefs.h /usr/include/sys/_symbol_aliasing.h
main.o: /usr/include/sys/_posix_availability.h /usr/include/Availability.h
main.o: /usr/include/AvailabilityInternal.h /usr/include/_types.h
main.o: /usr/include/sys/_types.h /usr/include/machine/_types.h
main.o: /usr/include/i386/_types.h /usr/include/sys/_pthread/_pthread_types.h
main.o: /usr/include/sys/_types/_va_list.h /usr/include/machine/types.h
main.o: /usr/include/i386/types.h /usr/include/sys/_types/_int8_t.h
main.o: /usr/include/sys/_types/_int16_t.h /usr/include/sys/_types/_int32_t.h
main.o: /usr/include/sys/_types/_int64_t.h
main.o: /usr/include/sys/_types/_u_int8_t.h
main.o: /usr/include/sys/_types/_u_int16_t.h
main.o: /usr/include/sys/_types/_u_int32_t.h
main.o: /usr/include/sys/_types/_u_int64_t.h
main.o: /usr/include/sys/_types/_intptr_t.h
main.o: /usr/include/sys/_types/_uintptr_t.h
main.o: /usr/include/sys/_types/_size_t.h /usr/include/sys/_types/_null.h
main.o: /usr/include/sys/stdio.h /usr/include/sys/_types/_off_t.h
main.o: /usr/include/sys/_types/_ssize_t.h /usr/include/secure/_stdio.h
main.o: /usr/include/secure/_common.h lib/string.h lib/vector.h
main.o: lib/vector.hpp lib/LinkedList.h lib/LinkedList.hpp lib/Stack.h
main.o: lib/Stack.hpp /usr/include/assert.h lib/DLinkedList.h
main.o: lib/DLinkedList.hpp unittests/testdlinkedlist.h
main.o: unittests/testlinkedlist.h unittests/testvector.h
main.o: unittests/teststack.h unittests/testqeueue.h unittests/testsorting.h
main.o: unittests/testbinarytree.h unittests/testbinarytreerenderer.h
main.o: unittests/teststring.h
unittests/testbinarytree.o: /usr/include/assert.h /usr/include/sys/cdefs.h
unittests/testbinarytree.o: /usr/include/sys/_symbol_aliasing.h
unittests/testbinarytree.o: /usr/include/sys/_posix_availability.h
unittests/testbinarytree.o: /usr/include/math.h /usr/include/Availability.h
unittests/testbinarytree.o: /usr/include/AvailabilityInternal.h
unittests/testbinarytree.o: unittests/testhelper.h unittests/testbinarytree.h
unittests/testbinarytree.o: lib/Utils.h /usr/include/stdio.h
unittests/testbinarytree.o: /usr/include/_stdio.h /usr/include/_types.h
unittests/testbinarytree.o: /usr/include/sys/_types.h
unittests/testbinarytree.o: /usr/include/machine/_types.h
unittests/testbinarytree.o: /usr/include/i386/_types.h
unittests/testbinarytree.o: /usr/include/sys/_pthread/_pthread_types.h
unittests/testbinarytree.o: /usr/include/sys/_types/_va_list.h
unittests/testbinarytree.o: /usr/include/machine/types.h
unittests/testbinarytree.o: /usr/include/i386/types.h
unittests/testbinarytree.o: /usr/include/sys/_types/_int8_t.h
unittests/testbinarytree.o: /usr/include/sys/_types/_int16_t.h
unittests/testbinarytree.o: /usr/include/sys/_types/_int32_t.h
unittests/testbinarytree.o: /usr/include/sys/_types/_int64_t.h
unittests/testbinarytree.o: /usr/include/sys/_types/_u_int8_t.h
unittests/testbinarytree.o: /usr/include/sys/_types/_u_int16_t.h
unittests/testbinarytree.o: /usr/include/sys/_types/_u_int32_t.h
unittests/testbinarytree.o: /usr/include/sys/_types/_u_int64_t.h
unittests/testbinarytree.o: /usr/include/sys/_types/_intptr_t.h
unittests/testbinarytree.o: /usr/include/sys/_types/_uintptr_t.h
unittests/testbinarytree.o: /usr/include/sys/_types/_size_t.h
unittests/testbinarytree.o: /usr/include/sys/_types/_null.h
unittests/testbinarytree.o: /usr/include/sys/stdio.h
unittests/testbinarytree.o: /usr/include/sys/_types/_off_t.h
unittests/testbinarytree.o: /usr/include/sys/_types/_ssize_t.h
unittests/testbinarytree.o: /usr/include/secure/_stdio.h
unittests/testbinarytree.o: /usr/include/secure/_common.h lib/string.h
unittests/testbinarytree.o: lib/vector.h lib/vector.hpp
unittests/testbinarytree.o: lib/SampleBinaryTrees.h /usr/include/time.h
unittests/testbinarytree.o: /usr/include/sys/_types/_clock_t.h
unittests/testbinarytree.o: /usr/include/sys/_types/_time_t.h
unittests/testbinarytree.o: /usr/include/sys/_types/_timespec.h
unittests/testbinarytree.o: lib/BinaryTree.h lib/BinaryTree.hpp
unittests/testbinarytreerenderer.o: /usr/include/assert.h
unittests/testbinarytreerenderer.o: /usr/include/sys/cdefs.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_symbol_aliasing.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_posix_availability.h
unittests/testbinarytreerenderer.o: /usr/include/sys/stat.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types.h
unittests/testbinarytreerenderer.o: /usr/include/machine/_types.h
unittests/testbinarytreerenderer.o: /usr/include/i386/_types.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_pthread/_pthread_types.h
unittests/testbinarytreerenderer.o: /usr/include/Availability.h
unittests/testbinarytreerenderer.o: /usr/include/AvailabilityInternal.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_timespec.h
unittests/testbinarytreerenderer.o: /usr/include/machine/types.h
unittests/testbinarytreerenderer.o: /usr/include/i386/types.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_int8_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_int16_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_int32_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_int64_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_u_int8_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_u_int16_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_u_int32_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_u_int64_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_intptr_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_uintptr_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_blkcnt_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_blksize_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_dev_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_ino_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_ino64_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_mode_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_nlink_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_uid_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_gid_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_off_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_time_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_s_ifmt.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_filesec_t.h
unittests/testbinarytreerenderer.o: unittests/testhelper.h
unittests/testbinarytreerenderer.o: unittests/testbinarytreerenderer.h
unittests/testbinarytreerenderer.o: lib/Utils.h /usr/include/stdio.h
unittests/testbinarytreerenderer.o: /usr/include/_stdio.h
unittests/testbinarytreerenderer.o: /usr/include/_types.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_va_list.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_size_t.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_null.h
unittests/testbinarytreerenderer.o: /usr/include/sys/stdio.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_ssize_t.h
unittests/testbinarytreerenderer.o: /usr/include/secure/_stdio.h
unittests/testbinarytreerenderer.o: /usr/include/secure/_common.h
unittests/testbinarytreerenderer.o: lib/string.h lib/vector.h lib/vector.hpp
unittests/testbinarytreerenderer.o: lib/SampleBinaryTrees.h
unittests/testbinarytreerenderer.o: /usr/include/time.h
unittests/testbinarytreerenderer.o: /usr/include/sys/_types/_clock_t.h
unittests/testbinarytreerenderer.o: /usr/include/math.h lib/BinaryTree.h
unittests/testbinarytreerenderer.o: lib/BinaryTree.hpp
unittests/testbinarytreerenderer.o: lib/BinaryTreeRenderer.h
unittests/testdlinkedlist.o: unittests/testdlinkedlist.h
unittests/testdlinkedlist.o: unittests/testhelper.h lib/DLinkedList.h
unittests/testdlinkedlist.o: lib/DLinkedList.hpp /usr/include/assert.h
unittests/testdlinkedlist.o: /usr/include/sys/cdefs.h
unittests/testdlinkedlist.o: /usr/include/sys/_symbol_aliasing.h
unittests/testdlinkedlist.o: /usr/include/sys/_posix_availability.h
unittests/testlinkedlist.o: unittests/testlinkedlist.h unittests/testhelper.h
unittests/testlinkedlist.o: lib/LinkedList.h lib/LinkedList.hpp
unittests/testlinkedlist.o: /usr/include/stdio.h /usr/include/_stdio.h
unittests/testlinkedlist.o: /usr/include/sys/cdefs.h
unittests/testlinkedlist.o: /usr/include/sys/_symbol_aliasing.h
unittests/testlinkedlist.o: /usr/include/sys/_posix_availability.h
unittests/testlinkedlist.o: /usr/include/Availability.h
unittests/testlinkedlist.o: /usr/include/AvailabilityInternal.h
unittests/testlinkedlist.o: /usr/include/_types.h /usr/include/sys/_types.h
unittests/testlinkedlist.o: /usr/include/machine/_types.h
unittests/testlinkedlist.o: /usr/include/i386/_types.h
unittests/testlinkedlist.o: /usr/include/sys/_pthread/_pthread_types.h
unittests/testlinkedlist.o: /usr/include/sys/_types/_va_list.h
unittests/testlinkedlist.o: /usr/include/machine/types.h
unittests/testlinkedlist.o: /usr/include/i386/types.h
unittests/testlinkedlist.o: /usr/include/sys/_types/_int8_t.h
unittests/testlinkedlist.o: /usr/include/sys/_types/_int16_t.h
unittests/testlinkedlist.o: /usr/include/sys/_types/_int32_t.h
unittests/testlinkedlist.o: /usr/include/sys/_types/_int64_t.h
unittests/testlinkedlist.o: /usr/include/sys/_types/_u_int8_t.h
unittests/testlinkedlist.o: /usr/include/sys/_types/_u_int16_t.h
unittests/testlinkedlist.o: /usr/include/sys/_types/_u_int32_t.h
unittests/testlinkedlist.o: /usr/include/sys/_types/_u_int64_t.h
unittests/testlinkedlist.o: /usr/include/sys/_types/_intptr_t.h
unittests/testlinkedlist.o: /usr/include/sys/_types/_uintptr_t.h
unittests/testlinkedlist.o: /usr/include/sys/_types/_size_t.h
unittests/testlinkedlist.o: /usr/include/sys/_types/_null.h
unittests/testlinkedlist.o: /usr/include/sys/stdio.h
unittests/testlinkedlist.o: /usr/include/sys/_types/_off_t.h
unittests/testlinkedlist.o: /usr/include/sys/_types/_ssize_t.h
unittests/testlinkedlist.o: /usr/include/secure/_stdio.h
unittests/testlinkedlist.o: /usr/include/secure/_common.h
unittests/testlinkedlist.o: /usr/include/assert.h
unittests/testqeueue.o: unittests/testqeueue.h lib/Queue.h lib/DLinkedList.h
unittests/testqeueue.o: lib/DLinkedList.hpp /usr/include/assert.h
unittests/testqeueue.o: /usr/include/sys/cdefs.h
unittests/testqeueue.o: /usr/include/sys/_symbol_aliasing.h
unittests/testqeueue.o: /usr/include/sys/_posix_availability.h lib/Queue.hpp
unittests/testqeueue.o: unittests/testhelper.h
unittests/testsorting.o: unittests/testsorting.h lib/bubblesort.h lib/Utils.h
unittests/testsorting.o: /usr/include/stdio.h /usr/include/_stdio.h
unittests/testsorting.o: /usr/include/sys/cdefs.h
unittests/testsorting.o: /usr/include/sys/_symbol_aliasing.h
unittests/testsorting.o: /usr/include/sys/_posix_availability.h
unittests/testsorting.o: /usr/include/Availability.h
unittests/testsorting.o: /usr/include/AvailabilityInternal.h
unittests/testsorting.o: /usr/include/_types.h /usr/include/sys/_types.h
unittests/testsorting.o: /usr/include/machine/_types.h
unittests/testsorting.o: /usr/include/i386/_types.h
unittests/testsorting.o: /usr/include/sys/_pthread/_pthread_types.h
unittests/testsorting.o: /usr/include/sys/_types/_va_list.h
unittests/testsorting.o: /usr/include/machine/types.h
unittests/testsorting.o: /usr/include/i386/types.h
unittests/testsorting.o: /usr/include/sys/_types/_int8_t.h
unittests/testsorting.o: /usr/include/sys/_types/_int16_t.h
unittests/testsorting.o: /usr/include/sys/_types/_int32_t.h
unittests/testsorting.o: /usr/include/sys/_types/_int64_t.h
unittests/testsorting.o: /usr/include/sys/_types/_u_int8_t.h
unittests/testsorting.o: /usr/include/sys/_types/_u_int16_t.h
unittests/testsorting.o: /usr/include/sys/_types/_u_int32_t.h
unittests/testsorting.o: /usr/include/sys/_types/_u_int64_t.h
unittests/testsorting.o: /usr/include/sys/_types/_intptr_t.h
unittests/testsorting.o: /usr/include/sys/_types/_uintptr_t.h
unittests/testsorting.o: /usr/include/sys/_types/_size_t.h
unittests/testsorting.o: /usr/include/sys/_types/_null.h
unittests/testsorting.o: /usr/include/sys/stdio.h
unittests/testsorting.o: /usr/include/sys/_types/_off_t.h
unittests/testsorting.o: /usr/include/sys/_types/_ssize_t.h
unittests/testsorting.o: /usr/include/secure/_stdio.h
unittests/testsorting.o: /usr/include/secure/_common.h lib/string.h
unittests/testsorting.o: lib/vector.h lib/vector.hpp lib/bubblesort.hpp
unittests/testsorting.o: lib/quicksort.h lib/mergesort.h lib/insertionsort.h
unittests/testsorting.o: lib/selectionsort.h lib/shellsort.h lib/bucketsort.h
unittests/testsorting.o: lib/radixsort.h lib/heapsort.h /usr/include/assert.h
unittests/testsorting.o: unittests/testhelper.h
unittests/teststack.o: unittests/teststack.h lib/Stack.h lib/Stack.hpp
unittests/teststack.o: /usr/include/assert.h /usr/include/sys/cdefs.h
unittests/teststack.o: /usr/include/sys/_symbol_aliasing.h
unittests/teststack.o: /usr/include/sys/_posix_availability.h
unittests/teststack.o: lib/DLinkedList.h lib/DLinkedList.hpp
unittests/teststack.o: unittests/testhelper.h
unittests/teststring.o: /usr/include/assert.h /usr/include/sys/cdefs.h
unittests/teststring.o: /usr/include/sys/_symbol_aliasing.h
unittests/teststring.o: /usr/include/sys/_posix_availability.h lib/vector.h
unittests/teststring.o: lib/vector.hpp unittests/testhelper.h
unittests/teststring.o: unittests/teststring.h lib/string.h
unittests/testvector.o: unittests/testvector.h lib/vector.h lib/vector.hpp
unittests/testvector.o: lib/string.h unittests/testhelper.h
unittests/testvector.o: /usr/include/assert.h /usr/include/sys/cdefs.h
unittests/testvector.o: /usr/include/sys/_symbol_aliasing.h
unittests/testvector.o: /usr/include/sys/_posix_availability.h
