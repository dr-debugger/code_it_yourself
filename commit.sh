#!/usr/bin/bash
current_dir=$(pwd)
read -r -p "Enter commit msg: " commit_msg
read -p "Enter branch: " branch
echo "commiting into $branch branch from $current_dir"
read -p "Y/N: " consent
consent=$(echo $consent | tr 'a-z' 'A-Z')
if [ "$consent" == "Y" ];
then
  git add . && git commit -m "$commit_msg" && git push origin $branch
fi