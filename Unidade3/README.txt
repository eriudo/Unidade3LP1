Aluno: Erildo Gomes de Medeiros Júnior Costa
Matricula: 20170076054
UNIVERSIDADE FEDERAL DO RIO GRANDE DO NORTE - BTI 2018.1

Para compilar o programa: $ make
Para executar: ./bin/executavel
Os arquivos .txt que serão lidos pelo programa, estão contidos na pasta docs
Doxygen na pasta Doc

Link github: https://github.com/eriudo/Unidade3LP1.git

Passo 1 e 2: Os arquivos que contém as informações sobre os sapos e pistas são 
"sapinho.txt" e "fases.txt" e a leitura ocorre no main.cpp na linha 74 e 95,
respectivamente.

Passo 3: Menu da corrida é mostrado com as opções a se fazer, o menu se encontra
no arquivo "main.cpp" da linha 110 a 115.

a) Para ver as estatísticas dos sapos, foi criada uma funçao dados_sapo que é 
chamada no arquivo "main.cpp" a partir do switch case, na linha 125, ja a funcionalidade
da função é encontrada no arquivo "corrida.cpp" linha 106 a 118.
b) Da mesma forma como as estatísticas dos sapos se encontra na linha 127 do aquivo
"main.cpp" a sua chamada, e sua execução no arquivo "corrida.cpp" linhas 119 a 127.
c) A corrida é iniciada na função run que é chamada no arquivo "main.cpp" linha 130,
executada no arquivo "corrida.cpp" entre as linhas 128 a 235.
d) A criaçao do sapo se da a partir da funçao addsapo no arquivo "main.cpp" que é 
chamada dentro do switch na linha 122 e executada na linha 39 até a 62
e) A criação de uma pista tambem é no arquivo "main.cpp", na linha 119 a partir da 
função addciruito ela é chamada, e executada na linha 25 até a 37.

Passo 4: Uma corrida é iniciada a partir da função run, quando o usuario escolhe a 
a pista atraves do numero de identificação e digita s ou i, podemos ver isso no
arquivo "corrida.cpp" a partir da linha 128.
a) A parte de seleção do circuito é feito na linha 136 do arquivo "corrida.cpp"
até a linha 148.
b) Os sapos são mostrados nas linhas 144 ate a 147 no arquivo "corrida.cpp"
c) O start da corrida se da na linha 152 do arquivo "corrida.cpp" a partir da 
seleção do s ou do i.

Passo 5: A corrida começa a partir do momento que o usuario ja definiu a pista
e ja deu o start. Todos os items do passo 5 se encontram dentro do arquivo
 "corrida.cpp".
a) os sapos são mostrados depois da logica dos pulos, que começa na linha 154 e 
termina com a impressão dos sapos na linha 170.
b) na linha 171 e 172 é emitido a ultima mensagem do sapo quando ele acaba a corrida
que é dizendo exatamente que o sapo tal acabou a corrida.
c) o Raking da corrida é exibido na linha 202 a linha 210.
que é exatamente informando que ele acabou a corrida.

Passo 6: Os arquivos dos sapos e das pistas são adicionados a partir de uma função
chamada add_arqsapo e add_arqcircuito no arquivo "corrida.cpp", se encontra nas linhas
57 começando com o add_arqsapo até a linha 105 onde finaliza a função add_arqcircuito.
Ja as estatísticas estão sendo salvas na linha 215 ate a linha 230 no arquivo "corrida.cpp"


