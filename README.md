# Agenda Student

## Descripción

En el mundo actual, el tiempo es un recurso valioso, y disponer de una herramienta eficaz y versátil para organizar todas las actividades planificadas se convierte en algo esencial. Por eso he creado un programa, que es una agenda virtual que permite guardar elementos, programar eventos y tareas de forma más fácil y ordenada. Agenda Student es un proyecto creado para cumplir la función de una agenda, un programa que permite a estudiantes y profesores gestionar sus agendas añadiendo, borrando y mostrando varios puntos efectivos de la misma. La agenda será un conjunto de instrucciones que permitirán al usuario realizar las tareas de programación de eventos y tareas de forma eficiente y organizada.

La programación orientada a objetos ha permitido diseñar una agenda flexible. Cada persona se presentará como un objeto, para el que se creará un objeto agenda, cada evento y tarea se almacenará dentro de esa agenda. Todos estos objetos dispondrán de métodos específicos que faciliten su manipulación.

Además, dentro de este proyecto se han implementado conceptos como herencia, sobrecarga, polimorfismo, entre otros. El objetivo principal es proporcionar una herramienta eficaz que se adapte a las necesidades básicas del usuario, principalmente para actividades académicas. La flexibilidad y funcionalidad de nuestra agenda le permitirá tener un control total sobre su tiempo, optimizando tareas, guardando eventos, asegurando que todo esté bajo control.

## Eventos

En la sección de eventos, se mantiene un registro del compromiso y las actividades ha realizar. Ayuda a generar una visión general del tiempo que se tiene y permite planificar de manera más efectiva cada día de la semana. La clase Event se agrega a la clase tipo Agenda, lo cual estamos representando una relación de agregación, esta relación nos permite acceder y manipular fácilmente los eventos dentro de agenda.

## Tareas

Se puede priorizar los deberes y ordenarlos según su importancia y plazos de entrega. Permite enfocar en las tareas de más importancia o en las que están próximos a una entrega. Al agendar deberes, se puede priorizar los deberes y ordenarlos según su importancia y plazos de entrega. Permite enfocar en las tareas de más importancia o en las que están próximos a una entrega. De la misma manera que con la clase event, se agrega a la clase tipo Agenda, lo cual, estamos representando una relación de agregación entre Event y Agenda.

## ¿Qué problematica resuelve el proyecto?

Mi proyecto, principalmente, va hacia estudiantes y profesores que tienen muchos problemas con sus actividades diarias, entre las problemáticas que voy a tratar de resolverlo son:
- Desorganización y falta de tiempo: Muchos de los estudiantes, especialmente los universitarios, luchan por mantenerse organizados y administrar efectivamente su tiempo. La agenda proporcionará una herramienta centralizada para planificar y organizar sus eventos, tareas y notas.
- Pérdida de información importante: Los estudiantes pueden perder notas o información relevante si no tienen un buen sistema de organización para almacenarla. Además, permitirá guardar notas de manera fácil y accesible, lo que ayudará a tener un sistema centralizado de información importante.
- Dificultad para hacer seguimiento de las tareas y deberes: Los estudiantes tienen a menudo múltiples tareas. Mantener un seguimiento de todas sus tareas puede ser angustioso y propenso a errores. La agenda permitirá visualizar claramente las fechas de vencimiento, lo que les ayudará a completar las tareas de manera más efectiva.

## Consideraciones

- No se cuenta con una base de datos, por lo que, al finalizar eel programa se borra después de terminar de ejecutara el programa.
- Los datos se deben generar desde cero, es decir, el usuario debe ingresar todos los datos desde cero.
- No se puede editar los datos de la persona una vez registradas, esto es, debido a que no quiero que el proyecto sea muy largo y no se llene de mucha información en el main.
- No se usan algunas funciones que están declaradas (especialmente los setters), debido a que si se usan, el programa seria demasiado extenso. Se consideran diversas situaciones en las que se quiere eliminar, por ejemplo, en la clase Agenda, se tiene la opción para eliminar tareas y eventos.

## ¿Cómo correr en la terminal?

Para poder correrlo en la terminal del sistema operativo de la mac se usan los siguientes comandos:
- Cambiar de dirección con: cd (Dirección de los archivos .cpp)
- Compilar en Mac con: “g++ -o (nombre del ejecutable) main.cpp”
- Correr: ./(nombre de ejecutable)

## Casos de falla
Se han detectado algunos casos en los que el proyecto no funcionaría de manera correcta.
1.	Cuando se le pide al usuario ingresar datos numéricos, por falta de tiempo no se pudo evaluar cuando se ingresan variables numéricas en vez de datos numéricos, falla el programa.
2.	Solo los valores de name (nombre), title (titulo) y location (locación) valen poner espacios y “-“, sin embargo, si se trata de poner espacios  y guiones con otros valores de string va a fallar el programa.
3.	Todos los nombres dee usuario o ussername tienen que ser diferente, debido a que ese es el patrón de búsqueda, si se crea un tipo de persona con el mismo nombre de usuario, las acciones que el usuario solicite hacer se hará a la primera persona que se agregó.
