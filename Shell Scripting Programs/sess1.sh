echo Enter number of elements
read n
echo Enter the Array elements
i=1
while [ $i -le $n ]
do
read a[$i]
i=`expr $i + 1`
done
del=0
echo ${a[@]/$del}

