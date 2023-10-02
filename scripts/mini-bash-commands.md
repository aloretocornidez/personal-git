# Make multiple folders from directory
\ls obsidian-notes/notes/ | awk '{print /bin/bash}' | xargs mkdir
