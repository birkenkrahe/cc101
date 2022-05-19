;; bury a directory buffer with 'a'
(put 'dired-find-alternate-file 'disabled nil)

;; require ob-sqlite and ob-sql (for compilation in org src blocks) & tangle
(require 'ob-sqlite)
(require 'ob-sql)
(require 'ob-emacs-lisp)
(require 'ob-R)
(require 'ob-C)
(require 'ob-shell)

;; active Babel languages
(org-babel-do-load-languages
 'org-babel-load-languages
 '((R . t)
   (sql . t)
   (shell . t)
   (emacs-lisp . t)
   (C . t)))

;; Syntax highlight code in your SRC blocks The last variable removes
;; the annoying “Do you want to execute” your code when you type:
;; C-c C-c
(setq org-confirm-babel-evaluate nil
      org-src-fontify-natively t
      org-src-tab-acts-natively t)

;; get packages from MELPA package manager
(require 'package)
(add-to-list 'package-archives
             '("melpa-stable" . "https://stable.melpa.org/packages/"))

;; require org-tempo so that <s <TAB> self-insert works
(require 'org-tempo)

;; remove GUI tool bar and menu bar
(menu-bar-mode -1)
(tool-bar-mode -1)
(toggle-scroll-bar -1)

;; enable recentf mode and bind it to
(recentf-mode 1)
(global-set-key (kbd "C-x rf") 'recentf-open-files)

(setq-default org-hide-emphasis-markers t)
