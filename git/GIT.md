### notes on git 
[How can I undo pushed commits using git?](https://stackoverflow.com/questions/22682870/how-can-i-undo-pushed-commits-using-git)
[How do I delete a file from a Git repository?](https://stackoverflow.com/questions/2047465/how-do-i-delete-a-file-from-a-git-repository)

git reset --hard 'xxxxx' 
git clean -f -d 
git push -f 

# where 'xxxxx' is a tag or branch id

###

Use git rm.

If you want to remove the file from the Git repository and the filesystem, use:

git rm file1.txt
git commit -m "remove file1.txt"
But if you want to remove the file only from the Git repository and not remove it from the filesystem, use:

git rm --cached file1.txt
git commit -m "remove file1.txt"
And to push changes to remote repo

git push origin branch_name