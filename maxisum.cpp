/* Idea: Calculate the sum of all positive and negative multiplications from 0 to n-1

   If the abs(-veSum) > abs(+veSum) ; then reduce the negative values. For this keep a array which denotes the indices at which the multiplication results in -ve numbers. Try to make the values of those indices as 0. If we make all the -ve values to zero and are still left with some operations, then increase the value of maximum positive multiplication. If we have less operations for making all the values as 0, then try to reduce the effect of most negative values. 
 
  */
