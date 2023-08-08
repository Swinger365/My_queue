namespace MyQueue{
    //Очередь основана на такой структуре как односвязный список и снизу его структура
    struct Node{
        double data;
        Node *next;
    };
    //Создание очереди
    Node *make_queue(double data){
        Node *new_node = new Node;
        new_node->data = data;
        new_node->next = 0;
        return new_node;
    }//Node *make_queue
    //Добавление в очередь
    void enqueue(Node **end,double data){
        Node *new_node = new Node;
        new_node->data = data;
        new_node->next = 0;
        (*end)->next = new_node;
        *end = new_node;
    }//enqueue
    //Удаление из очереди
    double dequeue(Node **start){
        double tmp_data = (*start)->data;
        Node *tmp_node = *start;
        *start = (*start)->next;
        delete tmp_node;
        return tmp_data;
    }//dequeue
    //Посмотреть данные на начале очереди
    inline double pick(Node *start){
        return start->data;
    }//double pick
}