# --------------------------
# Alunos:
# --------------------------
.data
  BISSEXTO:  .word 2016 2012 2008 2004 2000
	                 1916 1911 1908 1904 1900
							     1861 1857 1852 1846 1844
							     1728 1727 1726 1725 1723
  LINHA:     .word 4
  COLUNA:    .word 5
	CNT:       .word 0
	RESULTADO: .word 0 0 0 0 0
  TEXTO_1:   .asciiz "Qual linha deseja verificar?"
	TEXTO_2:   .asciiz "Total de anos bisextos: "
	TEXTO_3:   .asciiz "\nOs anos bisextos são: "
	TEXTO_4:   .asciiz ","

.text                   
.globl  main            

main:
  # Colocar aqui o seu codigo!
	li	  $v0, 10
	syscall
  jr    $ra

imprimir:
  # Colocar aqui o seu codigo!
  jr    $ra

f_bissexto:
  # Colocar aqui o seu codigo!
  jr   $ra