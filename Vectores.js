/*create a function for calculate the magnitude, vector unitary
*/
main();

function main(){
  let a = [], b = [],unitary = [];
  let n;
  document.write("Operation of vector <br>");
  document.write("1. Product scalar");
  document.write("2. Find unitary vector");
  n = prompt("Size of the vector: ");
  document.write("Vector a");
  for(let i = 0; i < n; i ++){
    a[i] = prompt(`Element ${i + 1}: `);
  }
  document.write("Vector b");
  for(let i = 0; i < n; i ++){
    b[i] = prompt(`Element ${i + 1}:`);
  }
 }
 
 function product_scalar(a, b, n){
   let c = 0;
   for(let i = 0; i < n; i ++){
     c = c + a[i]*b[i];
   }
  
  return c;
 }
