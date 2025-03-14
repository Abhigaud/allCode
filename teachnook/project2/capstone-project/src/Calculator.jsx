import React, { useState } from "react";
import "./Calculator.css"; // Import CSS for styling

function Calculator() {
  const [input, setInput] = useState("");
  const [isDarkMode, setIsDarkMode] = useState(true);

  const handleClick = (value) => {
    if (value === "=") {
      try {
        setInput(eval(input).toString()); // Show result in input field
      } catch (error) {
        setInput("Error");
      }
    } else {
      setInput(input + value);
    }
  };

  const clearInput = () => {
    setInput("");
  };

  return (
    <div className={`calculator ${isDarkMode ? "dark" : "light"}`}>
      <button className="toggle-mode" onClick={() => setIsDarkMode(!isDarkMode)}>
        {isDarkMode ? "Light Mode" : "Dark Mode"}
      </button>
      <h2>React Calculator</h2>
      <input type="text" value={input} readOnly />
      <div className="buttons">
        {["7", "8", "9", "/", "4", "5", "6", "*", "1", "2", "3", "-", "0", ".", "=", "+"].map((btn) => (
          <button
            key={btn}
            onClick={() => handleClick(btn)}
          >
            {btn}
          </button>
        ))}
        <button onClick={clearInput} className="clear">C</button>
      </div>
    </div>
  );
}

export default Calculator;
