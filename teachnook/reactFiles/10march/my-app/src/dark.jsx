import React, { Component, useEffect, useState } from 'react';
import "./dark.css";

function App() {
    const [darkMode, setDarkMode] = useState(() => {
        // Retrive theme from local storage (if available)
        return localStorage.getItem("theme") === "dark";
    });

    useEffect(() => {
        // Appply the theme to the body element
        if (darkMode) {
            document.body.classList.add("dark-mode");
            localStorage.setItem("theme", "dark");
        }else{
            document.body.classList.remove("dark-mode");
            localStorage.setItem("theme", "light");
        }
    }, [darkMode]);

    return(
        <div className="container">
            <h1>{darkMode ? "Dark Mode" : "Light Mode"}</h1>
            <button onClick={() => setDarkMode(!darkMode)}>Toggle Mode</button>
        </div>
    )
}

export default App;
