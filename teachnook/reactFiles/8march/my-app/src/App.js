// import logo from './logo.svg';
// import './App.css';

// function App() {
//   return (
//     <div className="App">
//       <header className="App-header">
//         <img src={logo} className="App-logo" alt="logo" />
//         <p>
//           Edit <code>src/App.js</code> and save to reload.
//         </p>
//         <a
//           className="App-link"
//           href="https://reactjs.org"
//           target="_blank"
//           rel="noopener noreferrer"
//         >
//           Learn React
//         </a>
//       </header>
//     </div>
//   );
// }

// export default App;

// // ------------------------------------------------------------------------------------------------------------------------------------------------

// import React, { Component } from 'react';
// class Myapp extends Component {
//   state = { 
//     a:10,
//     b:20
//    } 
//   render() { 
//     return (
      // <div id="container">
      //   <h1>
      //     The sumof two values are {this.state.a + this.state.b}
      //   </h1>
      // </div>
//     );
//   }
// }
 
// export default Myapp;

// // ------------------------------------------------------------------------------------------------------------------------------------------------

// import React, { Component } from 'react';
// function Myapp() {
//   return (
//     <div id="container">
//         <h1>
//         10*3.5 =  {10*3.5}
//         </h1>
//       </div>
//    );
// }

// export default Myapp;


// ------------------------------------------------------------------------------------------------------------------------------------------------
//----------------------------react - hooks------------------------------------------------------------------------------------------
import React, { Component, useState } from 'react';
function Myapp() {
  var username = "Admin"
  return (
    <div id="container">
        <h1> 10*3.5 =  {10*3.5} </h1>
        <h2>The username is {username}</h2>
      </div>
   );
}

export default Myapp;