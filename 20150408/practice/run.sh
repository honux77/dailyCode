# Read from the file file.txt and output the tenth line to stdout.
for i in $(seq 1 10)
do
    read line
done < "file.txt"
echo $line
