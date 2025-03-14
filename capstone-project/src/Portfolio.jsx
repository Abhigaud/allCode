import React, { useState, useEffect } from "react";
import "./Portfolio.css";

function Portfolio() {
  const [isDarkMode, setIsDarkMode] = useState(false);
  const [isAutoToggle, setIsAutoToggle] = useState(true);

  useEffect(() => {
    if (!isAutoToggle) return;

    let lastScrollY = window.scrollY;
    const handleScroll = () => {
      if (window.scrollY > lastScrollY) {
        setIsDarkMode(true); // Scroll Down → Dark Mode
      } else {
        setIsDarkMode(false); // Scroll Up → Light Mode
      }
      lastScrollY = window.scrollY;
    };

    window.addEventListener("scroll", handleScroll);
    return () => window.removeEventListener("scroll", handleScroll);
  }, [isAutoToggle]);

  return (
    <div className={`portfolio-container ${isDarkMode ? "dark" : "light"}`}>
      <div className="toggle-container">
        <button className="toggle-mode" onClick={() => setIsAutoToggle(!isAutoToggle)}>
          {isAutoToggle ? "Disable Auto Toggle" : "Enable Auto Toggle"}
        </button>
        {!isAutoToggle && (
          <button className="toggle-mode" onClick={() => setIsDarkMode(!isDarkMode)}>
            {isDarkMode ? "Switch to Light Mode" : "Switch to Dark Mode"}
          </button>
        )}
      </div>
      <header>
        <h1>Abhishek Gaud</h1>
        <h3>Full-Stack Developer | React & Node.js Enthusiast</h3>
      </header>
      <section className="about">
        <h2>About Me</h2>
        <p>
          Hi! I'm Abhishek Gaud, a passionate full-stack developer with expertise in
          React, Node.js, and modern web technologies. I specialize in building scalable web applications
          and creating seamless user experiences.
        </p>
      </section>
      <section className="skills">
        <h2>Skills</h2>
        <div className="skills-grid">
          <span>JavaScript</span>
          <span>TypeScript</span>
          <span>React.js</span>
          <span>Next.js</span>
          <span>Node.js</span>
          <span>Express.js</span>
          <span>MongoDB</span>
          <span>PostgreSQL</span>
          <span>HTML & CSS</span>
          <span>SASS</span>
          <span>Tailwind CSS</span>
          <span>Git & GitHub</span>
        </div>
      </section>
      <section className="projects">
        <h2>Projects</h2>
        <div className="project-list">
          <div className="project-card">
            <h3>E-Commerce Platform</h3>
            <p>Developed a full-stack MERN e-commerce site with payment integration.</p>
          </div>
          <div className="project-card">
            <h3>Task Manager App</h3>
            <p>Built a React & Firebase productivity tool for task tracking.</p>
          </div>
          <div className="project-card">
            <h3>Portfolio Website</h3>
            <p>A responsive personal website showcasing my work and skills.</p>
          </div>
        </div>
      </section>
      <section className="contact">
        <h2>Contact</h2>
        <p>Email: <a href="mailto:abhishek.gaud@example.com">abhishek.gaud@example.com</a></p>
        <p>LinkedIn: <a href="https://linkedin.com/in/abhishek-gaud" target="_blank">linkedin.com/in/abhishek-gaud</a></p>
        <p>GitHub: <a href="https://github.com/abhishek-gaud" target="_blank">github.com/abhishek-gaud</a></p>
      </section>
    </div>
  );
}

export default Portfolio;
