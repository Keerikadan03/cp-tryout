pragma solidity 0.4.19;

//contract definition

contract generalStructure{
//state variables
int public stateIntVariable;
string stateStringVariable;
address personIdentifier;
myStruct human;
bool constant hasIncome=true;

struct myStruct{
    string name;
    uint age;
    bool isMarried;
    uint[] bankAccountsNumbers;
}

modifier onlyBy(){
    if(msg.sender==personIdentifier){
        _;
    }
}
event ageRead(address,int);

enum gender {male,female}

function getAge(address _personIdentifier) onlyBy() payable external returns(uint){
    human=myStruct("Ritesh",10,true,new uint[](3));
    gender _gender =gender.male;
    ageRead(personIdentifier,stateIntVariable);
}
}