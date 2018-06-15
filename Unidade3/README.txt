Aluno: Erildo Gomes de Medeiros J�nior Costa
Matricula: 20170076054
UNIVERSIDADE FEDERAL DO RIO GRANDE DO NORTE - BTI 2018.1

Para compilar o programa: $ make
Para executar: ./bin/executavel
Os arquivos .txt que ser�o lidos pelo programa, est�o contidos na pasta docs
Doxygen na pasta Doc

Link github: https://github.com/eriudo/Unidade3LP1.git

Passo 1 e 2: Os arquivos que cont�m as informa��es sobre os sapos e pistas s�o 
"sapinho.txt" e "fases.txt" e a leitura ocorre no main.cpp na linha 74 e 95,
respectivamente.

Passo 3: Menu da corrida � mostrado com as op��es a se fazer, o menu se encontra
no arquivo "main.cpp" da linha 110 a 115.

a) Para ver as estat�sticas dos sapos, foi criada uma fun�ao dados_sapo que � 
chamada no arquivo "main.cpp" a partir do switch case, na linha 125, ja a funcionalidade
da fun��o � encontrada no arquivo "corrida.cpp" linha 106 a 118.
b) Da mesma forma como as estat�sticas dos sapos se encontra na linha 127 do aquivo
"main.cpp" a sua chamada, e sua execu��o no arquivo "corrida.cpp" linhas 119 a 127.
c) A corrida � iniciada na fun��o run que � chamada no arquivo "main.cpp" linha 130,
executada no arquivo "corrida.cpp" entre as linhas 128 a 235.
d) A cria�ao do sapo se da a partir da fun�ao addsapo no arquivo "main.cpp" que � 
chamada dentro do switch na linha 122 e executada na linha 39 at� a 62
e) A cria��o de uma pista tambem � no arquivo "main.cpp", na linha 119 a partir da 
fun��o addciruito ela � chamada, e executada na linha 25 at� a 37.

Passo 4: Uma corrida � iniciada a partir da fun��o run, quando o usuario escolhe a 
a pista atraves do numero de identifica��o e digita s ou i, podemos ver isso no
arquivo "corrida.cpp" a partir da linha 128.
a) A parte de sele��o do circuito � feito na linha 136 do arquivo "corrida.cpp"
at� a linha 148.
b) Os sapos s�o mostrados nas linhas 144 ate a 147 no arquivo "corrida.cpp"
c) O start da corrida se da na linha 152 do arquivo "corrida.cpp" a partir da 
sele��o do s ou do i.

Passo 5: A corrida come�a a partir do momento que o usuario ja definiu a pista
e ja deu o start. Todos os items do passo 5 se encontram dentro do arquivo
 "corrida.cpp".
a) os sapos s�o mostrados depois da logica dos pulos, que come�a na linha 154 e 
termina com a impress�o dos sapos na linha 170.
b) na linha 171 e 172 � emitido a ultima mensagem do sapo quando ele acaba a corrida
que � dizendo exatamente que o sapo tal acabou a corrida.
c) o Raking da corrida � exibido na linha 202 a linha 210.
que � exatamente informando que ele acabou a corrida.

Passo 6: Os arquivos dos sapos e das pistas s�o adicionados a partir de uma fun��o
chamada add_arqsapo e add_arqcircuito no arquivo "corrida.cpp", se encontra nas linhas
57 come�ando com o add_arqsapo at� a linha 105 onde finaliza a fun��o add_arqcircuito.
Ja as estat�sticas est�o sendo salvas na linha 215 ate a linha 230 no arquivo "corrida.cpp"


