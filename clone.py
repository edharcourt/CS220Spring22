#!/usr/bin/python3
"""
Utility for cloning all repos
"""
# Modified from
# https://stackoverflow.com/questions/2953462/pinging-servers-in-python

import platform    # For getting the operating system name
import subprocess  # For executing a shell command


if __name__ == "__main__":
    reponames  = open("repos.txt")
    success = True
    for repo in reponames:
        repo = repo.strip()  # get rid of eol
        command = ['git', 'clone', repo]
        cp = subprocess.run(command, capture_output=True)
        print(cp.stdout)
        print(cp.stderr)
