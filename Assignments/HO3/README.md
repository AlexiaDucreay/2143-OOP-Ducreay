First Header | Second Header
------------ | -------------
void Hand::Sort(){    
    // Index "i" 
    for(int i=0;i<Size();i++){
        // Index "j"
        for(int j=0;j<Size()-1;j++){
            //Comparing cards at position i and j 
            if(Cards[i]->rank > Cards[j]->rank){
                cout<<"swapping"<<endl;
                // standard swap 
                Card* temp = Cards[i];
                Cards[i] = Cards[j];
                Cards[j] = temp;
            }
        }
    }
}
             
