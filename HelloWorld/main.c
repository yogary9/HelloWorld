//
//  main.c
//  HelloWorld
//
//  Created by Gary Arakaki on 6/6/18.
//  Copyright © 2018 Gary Arakaki. All rights reserved.
//

#include <stdio.h>
#define squared(x) x*x
#define squared2(x) (x*x)
#define squared3(x) (x)*(x)
#define squared4(x) ((x)*(x))



int main(void) {
    // insert code here...
    printf("Hello, World! Edits in TestBranch\n");
    
    double ans = (10.0+(2.0/((3-2)*2.0)));
    printf("ans=%lf\n",ans);

    double ans1=18.0/squared(2+1);
    printf("ans1=%lf\n",ans1);
    
    double ans2=18.0/squared2(2+1);
    printf("ans2=%lf\n",ans2);
    
    double ans3=18.0/squared3(2+1);
    printf("ans3=%lf\n",ans3);
    
    double ans4=18.0/squared4(2+1);
    printf("ans4=%lf\n",ans4);

    
    
    return 0;
}
