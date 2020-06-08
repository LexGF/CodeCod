#include "abstract_chatbot.h"
AbstractChatBot::AbstractChatBot()
{
}

// Возможное устройство метода reply, в вашем классе
/*
 *  std::string reply(const std::string &text){
 *  // преобразовать text к нижнему регистру
 *  if ( text.find("привет") ){
 *      return "Привет!";       }
 *  else if ( ... ){
 *  //    ...
 *          }
 * }
 *
 * */
/*
 * Это очень простой пример, но возможно вы захотите использовать регулярные выражения
 * для сравнения введённого сообщения пользователя и набора шаблонных сообщений,
 * на которые чат бот будет реагировать особым образом
 *
 * Документация по регулярным выражениям:
 * https://ru.cppreference.com/w/cpp/regex
*/