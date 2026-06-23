import React from 'react';
import ReactDOM from 'react-dom/client';

// How JSX works:
// 1. Since JS dont know about the JSX Syntax 
// 2. Here Babel make the work easy for us it is a type of compiler it converts JSX into React.createElement() now we know how it works.
// const element = <h1>Hello Diyuuu</h1>
// const element2 = <h1>Hello Amit</h1>
// const result = <div>
//    <h1>Hello aa</h1>
//    <h1>hqllq</h1>
// </div>


// react Component
// React, a component is an independent, reusable building block of a user interface (UI).
// types of React Component--> 1. Function Components: These are simple JavaScript functions that return JSX. They are the modern standard in React development.
// 2. Class Components: Older ES6 classes that extend React.Component. While still supported, they are no longer recommended for new code.


// Examples of React Component

// function Mpp() {
//     return (
//         <h1>Hello World</h1>
//     );
// }


// Props---> means taking argument in JS

function Mpp(Props) {
    return (
        <h1>My Name is {Props.name} and my Age is {Props.age}</h1>
    );
}

const root = ReactDOM.createRoot(document.getElementById('root'));
root.render(<Mpp name="Diyuu" age={21}/>)