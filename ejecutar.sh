#!/bin/bash

./BubbleSort < ~/Downloads/1.txt > Bubble1_Output.txt
./BubbleSort < ~/Downloads/2.txt > Bubble2_Output.txt
./BubbleSort < ~/Downloads/3.txt > Bubble3_Output.txt
./BubbleSort < ~/Downloads/4.txt > Bubble4_Output.txt

./QuickSort < ~/Downloads/1.txt > Quick1_Output.txt
./QuickSort < ~/Downloads/2.txt > Quick2_Output.txt
./QuickSort < ~/Downloads/3.txt > Quick3_Output.txt
./QuickSort < ~/Downloads/4.txt > Quick4_Output.txt

./HeapSort < ~/Downloads/1.txt > Heap1_Output.txt
./HeapSort < ~/Downloads/2.txt > Heap2_Output.txt
./HeapSort < ~/Downloads/3.txt > Heap3_Output.txt
./HeapSort < ~/Downloads/4.txt > Heap4_Output.txt

shutdown -h now
