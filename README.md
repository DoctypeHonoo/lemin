<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174770992-1d81aca2-0cfc-4db9-a570-eec8c897ca00.png" />
</p>
<h1 align="center">
   Lemin
</h1>

---

## Motivation : 

Le Lemin est un projet de milieu d'année à Epitech dont le principe est de créer un algorithme qui va calculer la manière la plus rapide pour que des fourmis arrive d'une certaine zone de la fourmilière à une autre, sachant qu'elles ne peuvent pas être plus d'une dans une "pièce" de la foumilière en même temps.

---

## Description :
qu
La fourmilière est donc représenté avec des pièces, connecté entre elles par des tunnels. Si deux pièces sont relié par un tunnel, alors une fourmi peut naviguer entre celles-ci.
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174772818-a1645ccd-dd43-405d-9115-6b88a4f94210.png">
</p>
Le programme va tout d'abord prendre un fichier contenant plusieurs informations en paramètre, et va l'analyser afin de ne garder que ce qu'il souhaite : 
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174781673-d3e96357-fca7-47b4-8070-3cd3afe871a2.png">
</p>
Dans cette exemple, le premier chiffre correspond au nombre de fourmi, les lignes commençant par un "#" sont des commentaires, celles commençant par "##" sont les pièces de départ et d'arrivée. Pour finir les ligne avec trois chiffres sont les pièces (le premier chiffre correspond au nom de la piece et les deux suivants sont sa position) et les lignes contenant un "-" sont les tunnels qui indique les passages entre les pièces (les chiffres avant et après le "-" sont les noms des pièces).

Après cela, le but du programme va donc être d'afficher les données recupérées dans un certain ordre, suivis de tout les mouvements nécessaires afin que les fourmis atteignent leur destination.

<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174784133-95516d73-df2e-4450-bf3d-541f4dc39b25.png">
</p>

---

## Fonctions Autorisées : 

- read, write, malloc, free, getline

---

## Installer & Lancer le Projet :

Ouvrez un terminal et dirigez vous ou vous souhaitez que le projet soit installé, puis exécutez les commandes suivantes : 
```bash
$ git clone git@github.com:DoctypeHonoo/42sh.git
$ cd 42sh
$ make
```
Le binaire se trouvera alors à la racine du projet, et il vous suffira de le lancer comme ceci : 
```bash
$ ./42sh
```
<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174632028-6e1fda10-d7cb-45e9-8c58-7c2d207b5091.png">
</p>

---

## Comment l'utiliser ? : 

Le terminal **42sh** s'utilise comme tout autre terminal, il vous est possible d'utiliser n'importe quel binaire interne, tel que *ls*, *cat*, *grep*, et bien d'autre, mais aussi les fonctions builtins, tel que *cd*, *setenv*, *unsetenv* et *env*. Notre **42sh** possède aussi le *repeat*, les *alias*, les *if*, ainsi que le *where*. Un système de variable a aussi été implémenté, et est fonctionnel. Pour finir notre **42sh** dispose aussi des séparateurs ";", des redirections ">", "<", ">>", et "<<", les pipes "|" et enfin, les "&&" et les "||".

Les fonctionnalités manquantes sont, certaines fonctions systèmes comme *foreach* et *which*, les globbings et les parenthèses.

Pour finir, notre **42sh** dispose d'une partie "musique", avec plusieurs commande tel que *play*, *pause*, *song* qui vont permettre de jouer de la musique dans un terminal tout en continuant à l'utiliser.

<p align="center">
  <img src="https://user-images.githubusercontent.com/91092610/174633287-8bd8b8ae-a562-4978-99da-c5b08c485989.png">
  <img src="https://user-images.githubusercontent.com/91092610/174634380-70ca82e6-a3eb-41c4-b07f-ebbfceb77f91.png">
</p>
