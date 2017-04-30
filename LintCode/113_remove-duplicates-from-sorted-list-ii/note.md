```
@Copyright:LintCode
@Author:   disillusion028
@Problem:  http://www.lintcode.com/problem/remove-duplicates-from-sorted-list-ii
@Language: Markdown
@Datetime: 16-11-18 07:57
```

 while((q->next!=NULL)&&(q->val!=q->next->val)){
            p=p->next;
            q=q->next;
        }
 while((q->val!=q->next->val)&&(q->next!=NULL)){
            p=p->next;
            q=q->next;
        }	
		why the later one is wrong? ok, i know the answer
		if q->next==NULL
		the compare can not going on.