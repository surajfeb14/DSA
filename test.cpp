void insertbefore(node *head)
{
    node *temp, *next;
    int flag = 0, pre;
    temp = (node *)malloc(sizeof(node));
    cout << "Enter the element you want to enter before an element of list: ";
    cin >> temp -> data;
    cout << "\nEnter the element before which you want to enter the element: ";
    cin >> pre;
    next = head;
    if(next == NULL)
        cout << "Linked list is empty, cannot enter element before another element.";
    else
    {
        while(next != NULL)
        {
            if(next -> data == pre)
            {
                flag = 1;
                break;
            }
            else
            {
            	next = next -> link;
			}
                
        }
    }
    if(flag == 1)
    {
        temp -> link = next;
        next = temp;
        display(head);
    }
    else
    {
        cout << "\nThe element "<< pre <<" is not present in the array.";
    }
}