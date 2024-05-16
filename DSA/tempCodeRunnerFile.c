
    char x;
    do
    {
        printf("Add a node? Y/N ");
        scanf("%1s", &x);
        if (x == 'y' || x == 'Y')
        {
            int d;
            printf("Enter the Data: ");
            scanf("%d", &d);
            appendNode(d, &head);
        }
        else
        {
            break;
        }
    } while (1);