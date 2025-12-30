#include<stdio.h>
#include<stdlib.h>

int main()
{
    printf("Hola, Mundo que hay de nuevo!\n");
    printf("Comandos de Git para administrar los cambios\n");
    printf("git init -> Inicializa un repositorio Git\n");
    printf("git status -> Muestra el estado del repositorio\n");
    printf("git add <archivo> -> Agrega un archivo al área de preparación\n");
    printf("git commit -m \"mensaje\" -> Crea un commit con un mensaje\n");
    printf("git log --oneline -> Muestra el historial de commits en una línea\n");
    printf("git reset --hard <commit_id> -> Restaura el repositorio a un commit específico\n");
/////////////////////////SEGUNDO VIDEO/////////////////////////////////////////////////////////

    printf("git add . -> Agrega todos los archivos modificados al área de preparación\n");
    printf("git commit a -m \"mensaje\" -> Agrega y crea un commit en un solo paso\n");
    printf("git commit --amend -> Modifica el último commit\n");//cuando se instalo VSC se configuro que el editor de texto
    //para este tipo de cambios con --amend sea el mismo VSC por lo tanto cuando se ejecuta abrira una nueva ventana de VSC
    //con el mensaje del ultimo commit para editarlo, para guardar los del comando --amend se debe hacer Ctrl+S y para salir de VSC se debe hacer Ctrl+Q
////////////////////////TERCER VIDEO//////////////////////////////////////////////
    printf("git remote add origin <url_del_repositorio> -> Conecta el repositorio local con un repositorio remoto como Github\n");
    printf("git remote -v -> Muestra las URL de los repositorios remotos conectados\n");
    printf("git remote remove origin -> Desconecta el repositorio remoto\n");
    printf("git push -u origin main -> Sube los cambios al repositorio remoto en la rama main\n");
    // en este caso puede ser que no se realicen los cambios ya que el nombre de la ubicacion de los archivos sea distinto, puede ser "main" o "master"
    //para nustro caso es master por lo que si queremos realizar los cambios debemos escribir master despues de la ruta de origen
    printf("git pull origin main -> Descarga y fusiona los cambios del repositorio remoto a la rama principal local\n");
    printf("git clone <url_del_repositorio> -> Esto creará una copia local completa del repositorio, incluyendo todo el historial de cambios y todas las ramas.");
///////////////////////////////////////////////////////////////////////////////////////
    system("pause");
    return 0;
}

