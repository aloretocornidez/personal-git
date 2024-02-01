
str="'$*'"


if [ -z "$str" ]
then
git add . && git commit -a -m "$str" && git push
else

git add . && git commit -a -m "using script to update" && git push
fi


