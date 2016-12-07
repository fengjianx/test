echo "Hello fengjian"
your_name="fengjian"
echo $your_name
your_name="merlin"
echo $your_name
mysite="www.fengjian.com"
readonly mysite
your_name="jian"
greeting="hello,"$your_name"!"
greeting_1="hello,${your_name}"
echo $greeting $greeting_1
string="abcdfengjian"
echo ${#string}
string="fengjian is a great people"
echo ${string:4:4}
echo `expr index "$string" j`
array_name=(apple pine pear orange banana)
echo ${array_name[@]}
length=${#array_name[@]}
echo ${length}
length=${#array_name[3]}
echo ${length}
length=${#array_name[*]}
echo ${length}
echo "the document needs to be handled: $0"
echo "this is the first argument: $1"
echo "this is the second argument: $2"
echo "this is the third argument: $3"
echo "the number of arguments is: $#"
echo "show the argument in string: $*"
echo "--\$* case--"
for i in "$*";do
	echo $i
done

echo "--\$@ case--"
for i in "$@";do
	echo $i
done
my_array=(A B C D "e")
echo "the first array element is:${my_array[0]}"
echo "the second array element is: ${my_array[1]}"
echo "the third array element is: ${my_array[2]}"
echo "the fourth array element is: ${my_array[3]}"
echo "the fifth array element is: ${my_array[4]}"
echo "the elements in array are: ${my_array[@]}"
echo "the elements in array are: ${my_array[*]}"
echo "the length of the array is: ${#my_array[@]}"
echo "the length of the array is:${#my_array[*]}"
val=`expr 2 + 2`
echo "the sum of val is: ${val}"
a=10
b=20
val=`expr $a + $b`
echo "a+b: $val"
val=`expr $a - $b`
echo "a-b: $val"
val=`expr $a \* $b`
echo "a*b: $val"
val=`expr $b / $a`
echo "b/a: $val"
val=`expr $b % $a`
echo "b%a: $val"

if [ $a==$b ]
then 
	echo "a=b"
fi
if [ $a!=$b ] 
then
	echo "a!=b"
fi 


