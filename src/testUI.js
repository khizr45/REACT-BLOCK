import React from "react"
import "./UI.css"
let Num = []
class Test extends React.Component{
    constructor() {
        super()
        this.state = {
            color1: 'BLUE',
            boxes1 : 0,
            FinalSetUp : [],

        }
        this.handleChange = this.handleChange.bind(this)
        this.boxCount1 = this.boxCount1.bind(this)
        this.setBox = this.setBox.bind(this)
    }
    setBox(c){
        Num = []
        for(var i=0;i<this.state.boxes1;i++){
            Num.push(<div className={this.state.color1} key={i}></div>)
        }
        this.setState({
            FinalSetUp : Num
        })
        
    }
    boxCount1(a){
        this.setState({
            boxes1 : a.target.value
        })
        
    }
    handleChange(e){
        this.setState({
            color1 : e.target.value
        })
        
    }
    render(){
        return(
        <div>
            <h4>HOW MANY BOXES DO YOU WANT </h4>
            <input onChange = {this.boxCount1} value={this.state.boxes1}></input>
             <select onChange = {this.handleChange}>
                <option>BLUE</option>
                <option>RED</option>
                <option>GREEN</option>
                <option>ORANGE</option>
            </select>  
            <button className="btn btn-primary" onClick={this.setBox}>SUBMIT</button>
            <div>
                {this.state.FinalSetUp}
            </div>
            
        </div>    
        )
    }
}
export default Test;