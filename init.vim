" Uncomment this to enable by default:
" set list " To enable by default
" Or use your leader key + l to toggle on/off
map <leader>l :set list!<CR> " Toggle tabs and EOL

" Color scheme (terminal)
set termguicolors

" Filetypes autocmds to compile and run

autocmd filetype python nnoremap <F4> :w <bar> exec '!python '.shellescape('%')<CR>
autocmd filetype c nnoremap <F4> :w <bar> exec '!gcc -lm '.shellescape('%').' -o /tmp/'.shellescape('%:r').' && /tmp/'.shellescape('%:r')<CR>
autocmd filetype cpp nnoremap <F4> :w <bar> exec '!g++ -std=c++17 '.shellescape('%').' -o /tmp/'.shellescape('%:r').' && /tmp/'.shellescape('%:r')<CR>
autocmd filetype haskell nnoremap <F4> :w <bar> exec '!ghci '.shellescape('%')<CR>
autocmd filetype ruby nnoremap <F4> :w <bar> exec '!ruby '.shellescape('%')<CR>

autocmd filetype python inoremap <F4> <esc> :w <bar> exec '!python '.shellescape('%')<CR>
autocmd filetype c inoremap <F4> <esc>:w <bar> exec '!gcc -lm '.shellescape('%').' -o '.shellescape('%:r').' && /tmp/'.shellescape('%:r')<CR>
autocmd filetype cpp inoremap <F4> <esc>:w <bar> exec '!g++ -std=c++17 '.shellescape('%').' -o /tmp/'.shellescape('%:r').' && /tmp/'.shellescape('%:r')<CR>
autocmd filetype haskell inoremap <F4> <esc>:w <bar> exec '!ghci '.shellescape('%')<CR>
autocmd filetype ruby inoremap <F4> <esc> :w <bar> exec '!ruby '.shellescape('%')<CR>


" New lines not commented
autocmd FileType * setlocal formatoptions-=c formatoptions-=r formatoptions-=o

" Vim runner options
" Use key mappings setting from this plugin by default.
let g:runner_use_default_mapping = 1

" Save file first before compile and run by default.
let g:runner_is_save_first = 1

" Print a timestamp on the top of output by default.
let g:runner_print_timestamp = 1

" Print time usage of do all actions by default.
let g:runner_print_time_usage = 1

" Show the comment information by default.
let g:runner_show_info = 1

" Not auto remove tmp file by default.
let g:runner_auto_remove_tmp = 0

" Use <F5> to compile and run code by default.
" Feel free to change mapping you like.
let g:runner_run_key = "<F5>"

" Set tmp dir for output.
let g:runner_tmp_dir = "/tmp/vim-runner/"

" Section: work with other plugins
" w0rp/ale
let g:runner_is_with_ale = 0
" iamcco/markdown-preview.vim
let g:runner_is_with_md = 0

" Section: executable settings
let g:runner_c_executable = "gcc"
let g:runner_cpp_executable = "g++"
let g:runner_rust_executable = "cargo"
let g:runner_python_executable = "python3"

" Section: compile options settings
let g:runner_c_compile_options = "-std=c11 -Wall"
let g:runner_cpp_compile_options = "-std=c++11 -Wall"
let g:runner_rust_compile_options = ""

" Section: run options settings
let g:runner_c_run_options = ""
let g:runner_cpp_run_options = ""
let g:runner_rust_run_backtrace = 1
let g:runner_rust_run_options = ""

" GVIM
" set guifont=Monaco\ Nerd\ Font\ Mono\ 15
" set guifont=CaskaydiaCove\ Nerd\ Font\ 15

"Last line
set showmode
set showcmd


