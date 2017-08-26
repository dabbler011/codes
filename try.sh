echo "Enter first file name "
read file1
echo "Enter second file name "
read file2

cmp $file1 $file2 > error

total=`wc -c error | cut -f 7 -d " "`
echo $total

if [ $total -eq 0 ]
then
        echo "Both file's contents are same"else
        echo "Both file's contents are not same"
fi