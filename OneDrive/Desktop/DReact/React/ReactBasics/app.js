/*
=========================================================
Creating HTML Elements Using JavaScript
=========================================================

Creating elements manually works fine for a few elements:

const heading = document.createElement("h1");
heading.textContent = "Hello World";

However, creating many elements this way becomes repetitive.
To improve reusability, we can create our own createElement() function,
similar to how React internally works.

Example structure:

attributes = {
    className: "element",
    id: "first"
}

element = {
    tag: "h1",
    textContent: "Hello World",
    className: "element",
    id: "first"
}
=========================================================
*/


// ------------------------------------------------------
// React Object
// ------------------------------------------------------
// A simplified implementation of React.createElement()

const React = {
    createElement: function (tag, attributes, children) {

        // Create the HTML element
        const element = document.createElement(tag);

        // Add text content
        element.textContent = children;

        // Apply attributes and styles
        for (const key in attributes) {

            // Handle styles separately
            if (key === "style") {
                Object.assign(element.style, attributes.style);
            }
            else {
                element[key] = attributes[key];
            }
        }

        return element;
    }
};


// ------------------------------------------------------
// ReactDOM Object
// ------------------------------------------------------
// A simplified implementation of ReactDOM.render()

const ReactDOM = {
    render: function (child, parent) {
        parent.append(child);
    }
};


// ------------------------------------------------------
// Creating Elements
// ------------------------------------------------------

const ele1 = React.createElement(
    "h1",
    {
        className: "element",
        id: "first",
        style: {
            fontSize: "30px",
            backgroundColor: "orange",
            color: "white"
        }
    },
    "Hello Diyuuu"
);

const ele2 = React.createElement(
    "h1",
    {
        className: "element",
        id: "second",
        style: {
            fontSize: "30px",
            backgroundColor: "orange",
            color: "white"
        }
    },
    "Hello Amit"
);


// ------------------------------------------------------
// Rendering Elements Inside the Root Container
// ------------------------------------------------------

const root = document.getElementById("root");

ReactDOM.render(ele1, root);
ReactDOM.render(ele2, root);


/*
=========================================================
Conclusion
=========================================================

React is essentially a JavaScript library that provides
many utility methods and features.

In this example, we implemented simplified versions of:

1. React.createElement()
2. ReactDOM.render()

to understand how React works behind the scenes.
=========================================================
*/