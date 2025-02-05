#include <iostream>
// ПАТТЕРНЫ ПРОЕКТИРОВАНИЯ
//идиома для конкретного языка
//паттерн - рисунок блока кода, общий алгоритм решения (обобщение)
// 
// паттерн - это общее описание хорошего способа решения задач
//Цель паттерна - распознать возможность применения хорошего решения проблемы
// 
// Антипаттерн - часто повторяемое плохое решение, которое не рекомендуется использовать
// Цель - обнаружить плохую ситуацию и предложить подход к ее устранению
// 
// Под паттерном проектирования (design pattern) будем понимать описание взаимодейстия объектов и классов,
// адаптирования для решения задач.
// В общем случае каждый паттерн состиоит из таких составляющих:
// 1) Имя 
// 2) задача
// 3) Решения
// 4) Результаты
// Цель и проблемы должны совпадать с результатами, а не с задачами
// при разработке дизайна системы следует руководствоваться такими базовыми принципами{
//		Всегда формировать простой дизайн{
//			Из двух предложенных решений, как правило, личшим является то, что проще  
//		}
//		Слабая зависимость{
//			Дизайн модуля должен быть таким, чтобы в случае его модификации зависимые фрагменты системы 
//			не требовали или почти не требовали изменений
// 
// 
//		}
//  
// }
// Признаки плохого дизайна кода{
// 
//		Дубляж кода
//		Большие методы
//		Большие классы
//		зависть
//		Нарушение приватности
//		Нарушение завещания
//		Ленивый класс
//		Черезмерна Сложность
//		Черезмерно длинные идентификаторы
//}
// 
// Принципы выбора паттернов проектирования{
//		Решайте проблему, а не раздувайте функционал
//		Первична задача а не паттерн
//		Не вводите сложные паттерны там где можно обойтись простыми
//		Абстрагируйтесь от деталей реализации до того как начнете писать код
// 
// }
// Объектно ориентированом анализе и проектированяи (ООАП){
//		Архитектурные паттерны
//		Паттерны проектирования
//		Паттерны Анализа
//		паттерны тестирования 
//		паттерны реализации
// 
// 
// }
// 3 паттерна проектирования разделенные по назначению{
//	Порождающие паттерны (Creational Patterns)
//	Структурные паттерны (Structal Patterns)
//	Поведенческие паттерны
// 
// 
// }
// принципы SOLID
// 
// паттерны GRASP
// 
// //пораждающие паттерны
// 
// Abstract Factory
// Builder
// Factory Method 
// Prototype
// Singleton почти не используют
// 
// Abstract Factory/Абстрактная фабрика
// Также известный под именем: Toolking/инструментарий
// От нее вы можете что то получить
// позволяет использовать конкретные классы продуктов
// Упрощает замену семейтсв продуктов
// 
// Цель паттерна{
//		У ВАС ЕСТЬ РАЗНЫЕ КЛАССЫ, КОТОРЫЕ НУЖНО КАК ТО СОЕДИНЯТЬ 
//		должны создавать ансамбль
//		 
//}
//	
// при необходимости добавления нового типа продуктов нужно изменять абстрактную фабрику и каждую из конкретных фабрик 
//
// 
// Builder 
// Цель паттерна{
//	Отделяет процесс конструктирования сложного объекта от его представления так,
//	что в результате одного и того же процесса конструирования получаются разные представления
// 
// }
//	Есть возможность изменять внутреннею структуру создаваемого продукта
// 
// Повышение модульносити за счет разделения распорядителя и строителя
// 
// пошаговое построение продукта
//  
//Prototype. Название. Цель 
// Прототип
// Цель{
//		Определяет виды создаваемых объектов с помощью экземпляра -
//		 прототипа и создает новые объекты путем копирования этого прототипа
		Копирует сам себя и отправляет куда-нибудь
// }
// Клиентский код должен создавать объекты ничего не зная об их классе, или о том какие даннные они содержат
// Классы создаваемых объектоа определяются во время выполнения 
// Экземпляры класса могут пребывать в не очень большом количестве состояний
// 
// Добавление/удаление новых типов продкутов во время выполнения
// Определение ноавх типов продуктоа без необходимости наследования
// использование диспетчера прототипов
// 
// Singleton/Одиночка 
// Паттерн следует использовать когда{
//	должен существовать только один экземпляр заданного класса
//  
// }
//
//Цель{
// Должен обеспечить иолько одну точку доступа к общему для всей программы ресурсу 
// 
// }	
// !!!Должны быть удалены конструкторы
// //паттерн Адаптер(только если вы не работали с кодом несколько лет)
// 
// Цель:
// Дать пользователю воспользоваться каким то интерфейсом привычным для него способом
// Даже если сервисный код не поддерживает этот интерфейс
//
// 
// Мост
// 
// Цель: отделить абстракцию от ее реализации, для того, чтобы они могли изменяться независимо друг от друга
// 
// Задача: при расширении проекта у существующих классов вводятся одинаковые подтипы
// Пользователи и администраторы становятся удаленными и локальными
// 
// Проблема: Если полагаться на наследование то при внемении какого то еще подкласса дерево наследования раздувается черезмерно
//"green"
// 
// 
// 
// Компоновщик
// 
// Цель: Облегчить работу, когда вам нужен контерйнер содержащий не только объекты но и контерйнеры
// 
// Задача: В догоаор заключаемый фирмой входит заключение договоров с субподрядчиками.
// Нужно работать с корневым договором как с самодостаточным элементом не предоставляя инфу клиенту о субподрядчике
// 
// Проблема:
// Паттерн бессмыслен если структуру нельзя представить в виде дерева
// 
// 
// Декоратор
// 
// Цель: Позволяет динамически добавлять объектам новую функциональность, оборачивая из в полезные "обёртки"
// 
// Задача: Разделить монолитный класс на компоненты реализации
// 
// Проблемы:
// Такая же ошибка что и у моста, но в другой плоскости 
// 
// 
// // ПОВЕДЕНЧЕСКЕ ПАТТЕРНЫ
// 
// Chain of RResponsibility(Cor, chain of command)
// Цель: для того чтобы позволять объекту отправлять команду, не имея информации об объекте получающих ее
// обновление на лету
// 
// 
// Когдв программа должна обрабатывать разнообразные запросы несколькимим способами, 
// но заранее неизвестно, какие конкретно запросы будут приходить и какие обработчики для них понадобятся(поиск в системе)
// 
// Когда важно, чтобы обработчики выполнялись один за другим в строгом порядке 
// 
// 
// паттерн Command 
// Цель: инкапсулирует команды в некотром объекте
// 
// Проблема Из разных частей программы требуется доступ к одной и той же логике
// один и тот же алгоритм из разных точек программы
// 
// 
// 
// 
// Паттерн State(нужно дружить)
// Цель Дать возможность объектам менять поведение в зависимости от своего состояния
// Проблема: В коде есть объект, который должен менять свое поведение, в зависимости от своего состояния
// 
// 
// Паттерн Strategy
// 
// Цель: Дать возможность взаимозаменять алгоритмы прямо во время исполнения программы
// Проблема: В коде есть объект который должен менять свое поведение в зависимости от состояния программы
// Решение одной и той же задачи абсолютно разными способами
// как передать какому то другому коду определённый алгоритм, один единственный
// 
// 

// //Архитектурные паттерны
//Монолитная архитектура
// 
// 5 основных слоев программы{
// 
//		 UI/API
//		Viever/представление
//		Controller/управление
//		Model/Domainlogiс
//		DAL/уровень доступа к данным
// }
// 
// нет прямого доступа от несоседних слоев между собой
// 
// MVP(минимальные требования к продукту, с которыми его можно будет высылать на рынок){
// 
//		Presenter
//		Viewer
//		Model
// }
// 
// Модель (англ. Model) предоставляет данные для пользовательского интерфейса. Логика
//	Представление(англ.View) реализует отображение данных(Модели) и маршрутизацию пользовательских команд или событий Presenterʼу. конвертация и проверка
//	Presenter управляет Моделью и Представлением.Например извлекает данные из Модели и форматирует их для отображения в Представлении.Представление
// 
// 
// MVC{
//		Model
//		Viewer
//		Controller
//	
// 
// }
// Модель (Model) предоставляет данные и реагирует на команды контроллера, изменяя своё состояние, определяет логику взаимодействия данных между собой. Также как и в mvp но есть прямой доступ к viewer
// Представление (View) отвечает за отображение данных модели пользователю, реагируя на изменения модели.
// Контроллер (Controller) интерпретирует действия пользователя, оповещая модель о необходимости изменений
// 
// MVVM(Все старое это плохое){
//		Viewer
//		Viev - model
//		Model
// }
// 
// СДЕЛАТЬ ЗАПУСКАЕМЫМ ПРОЕКТОМ CONSOLE UI
// 
// СТРУКТУРНЫЕ ПАТТЕРНЫ
// Обеспечивают скелет паттернов, организуют связь различных классов 
// в программе между собой, без использования наследования
// Т.е. это прослойка между классами, которые могут находится в разных
// частях программы, обемпечивающая их грамотное взаимодействие
//
// 
//
int main() {
	
	
	return 0;
}
