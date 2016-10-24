imap <F2> <ESC>:w<CR>i
au BufNewFile,BufRead *.py
    set textwidth=79  " lines longer than 79 columns will be broken
    set shiftwidth=4  " operation >> indents 4 columns; << unindents 4 columns
    set tabstop=4     " a hard TAB displays as 4 columns
    set expandtab     " insert spaces when hitting TABs
    set softtabstop=4 " insert/delete 4 spaces when hitting a TAB/BACKSPACE
    set shiftround    " round indent to multiple of 'shiftwidth'
    set number
    set autoindent    " align the new line indent with the previous line
au BufNewFile,BufRead *.c
    set shiftwidth=4  " operation >> indents 4 columns; << unindents 4 columns
    set tabstop=4     " a hard TAB displays as 4 columns
    set expandtab     " insert spaces when hitting TABs
    set softtabstop=4 " insert/delete 4 spaces when hitting a
    set shiftround    " round indent to multiple of
    set autoindent    " align the new line indent with the
    set number
    set dictionary=/usr/share/dict/words
    set smartindent
    set cindent

    
this sjg sknfs    
    
au BufNewFile *.c 0r ~/.vimtest
