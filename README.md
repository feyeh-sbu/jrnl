# JRNL: the command-line journaling utility

## Description

This command-line tool will automatically maintain an ongoing journal to help you document your progress on scientific research, software development, or anything in-between!

---

## Specification

### Installation

1. Download `jrnl.exe`.
2. Add the path to `jrnl.exe` to your PATH environment variable.


### Usage

    jrnl [DIR]

By default, `jrnl` will operate in the current directory that your terminal is operating from. You can provide an optional argument `DIR` which specifies the directory you want `jrnl` to operate in.

### Commands

`scan`: scans the directory for new files to add to include in your next journal entry  
`note`: create a new text-only journal entry, without any accompanying images.