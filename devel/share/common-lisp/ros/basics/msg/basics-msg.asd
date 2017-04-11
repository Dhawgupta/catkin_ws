
(cl:in-package :asdf)

(defsystem "basics-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "complex" :depends-on ("_package_complex"))
    (:file "_package_complex" :depends-on ("_package"))
  ))