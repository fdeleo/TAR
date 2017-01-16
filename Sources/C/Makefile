# Universidade Federal do Rio de Janeiro 
# Escola Politecnica 
# Departamento de Eletronica e de Computacao 
# Prof. Marcelo Luiz Drumond Lanza 
# EEL 270 - Computacao II - Turma 2015/2
# Autor: Felipe Campos De Leo 
#
# $Author$ 
# $Date$ 
# $Log$ 

# Macros do Compilador e do LinkEditor 
CC = gcc
LD = gcc

# Flags de Compilacao e LinkEdicao
CFLAGS = -Wall
LFLAGS = -Wall

# Diretorios para instalacao e desinstalacao (TESTAR)
# Diretorios Privados
DIRETORIORAIZ = /private/EEL270/2015-2/TAR/
DIRETORIOBINARIES = $(DIRETORIORAIZ)/Binaries
DIRETORIODATA = $(DIRETORIORAIZ)/Data
DIRETORIOCOOKIES = $(DIRETORIODATA)/Cookies
# Diretorios Publicos
DIRETORIOCLIENTE = /public/EEL270/2015-2/TAR
DIRETORIOCGIS = $(DIRETORIOCLIENTE)/CGIs

# Macros dos objetos a serem criados
TARERRORS = tarErrors.o 
TARUSERINTERFACE = tarUserInterface.o 
TARFUNCTIONS = tarFunctions.o 
TAR = tar.o 
TARCLEANABEYANCES = tarCleanAbeyances.o 

# Macros dos Executaveis
FUNCOESOBRIGATORIAS = tarerrors\
	 taruserinterface\


# Macro para todos os executaveis do sistema	 
EXECS = $(FUNCOESOBRIGATORIAS)\
	

# Regra Implicita
.c.o:   # nenhuma dependencia explicita
	$(CC) $(CFLAGS) -c $<

all: $(EXECS)

funcoesobrigatorias: $(FUNCOESOBRIGATORIAS)

# exemplo_001: exemplo_001.o
#       $(LD) $(LFLAGS) -o exemplo_001 exemplo_001.o

tarerrors: $(TARERRORS)
	$(LD) $(LFLAGS) -o $@ $(TARERRORS)

taruserinterface: $(TARUSERINTERFACE)
	$(LD) $(LFLAGS) -o $@ $(TARUSERINTERFACE)
	
clean:
	rm -f *.o $(EXECS)
	
install:
# Compilacao dos arquivos

# Mover os que ficarao na parte privada

# Mover os que ficarao na parte publica    

deinstall:
# Remover todos os arquivos de instalacao

	
# $RCSFile$	 

 
 