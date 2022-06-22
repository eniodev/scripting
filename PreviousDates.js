
function getPreviousDays(date = new Date()) {
  
    let dates = [];
    for ( i = 1; i < 8 ; i++) {
    const previous = new Date(date.getTime());
    previous.setDate(date.getDate() - i);
      
      dates.push ([previous.getDate(), previous.getMonth(), previous.getFullYear()]);
      
      }
    
    return dates;
  }
  
  console.log(getPreviousDays()); 