/* create a program for calculate the magnitude of a vector and
unitary vector*/

/*let a = 0; 

let result = Math.cos(a); uso de funciones trigonometricas
console.log(result);*/

function main(){
  let vector = [], n, opt;

  opt = prompt("1. Calculate magnitude | 2. Calculate unitary");

  n = prompt("Size of the vector: ");
  for(let i = 0; i < n; i ++){
    vector[i] = prompt(`Element ${i + 1}: `);
  }

  if(opt == 1){
    document.write("Magnitude: " + magnitude(vector, n));
  } else if(opt == 2){
    unitary(vector, n);
  } else {
    alert("Error no exist option");
  }
}

main();

function square(a,m){
  let M = 1;
  for(let i = 0; i < m; i++){
    M = M*a;
  }
  return M;
}

function magnitude(vector, n){
  let V = 0, m = 2, Mag;
  for(let i = 0; i < n; i ++){
    a = vector[i];
    V = V + square(a, m);
  }
  Mag = Math.sqrt(V);
  return Mag;
}

function unitary(vector, n){
  let unitary = [], b, c;
  b = magnitude(vector, n);
  for(let i = 0; i < n; i ++){
    c = vector[i]/b;
    unitary[i] = c;
  }
  
  document.write("Unitary vector: ");
  for(let i = 0; i < n; i ++){
    if(i == 0){
      document.write("( ");
    }
    document.write(unitary[i] + " ");
    if( i == n - 1){
      document.write(" )");
    }
  }
}
