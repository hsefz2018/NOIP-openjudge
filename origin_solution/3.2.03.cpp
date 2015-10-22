// Submission #3393416
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <list>
// 泥萌看这还是链表 (๑•̀ㅂ•́)و✧

static const int MAX_LINE_LEN = 144;
static const char *ENDING_MARK = "end";
typedef std::list<char *> student_list;

int main()
{
    student_list l;
    char *s;
    do {
        s = (char *)malloc(MAX_LINE_LEN * sizeof(char));
        gets(s);
        if (!strcmp(s, ENDING_MARK)) break;
        l.push_front(s);
    } while (1);
    for (student_list::iterator i = l.begin(); i != l.end(); ++i) {
        puts(*i);
        free(*i);
    }
    return 0;
}
