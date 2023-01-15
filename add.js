const a=[3,2,4]
const target=6

for (let i=0;i<a.length;i++){
    for(let j=0;j<a.length;j++){
        if(i==j){
            break
        }
        if(a[i]+a[j]==target){
            console.log([j,i]);
        }
    }
}