import { useState } from "react";

const App = () => {

  const [joke, setJoke] = useState([]);
  const [category, setCategory] = useState('Any');
  const [count, setCount] = useState(0);


  function getCategory(event) {
    setCategory(event.target.value);
  }

  async function getJoke() {
    const response = await fetch(`https://v2.jokeapi.dev/joke/${category}`);
    const jokeObject = await response.json();
    console.log(jokeObject);
    if (jokeObject.type == 'twopart') {
      setJoke([jokeObject.setup, jokeObject.delivery]);
    }else{
      setJoke([jokeObject.joke]);
    }
    setCount(c => c+1);
  }
  return (
  <div>
    <button onClick={getJoke}>Get jokes</button>
    <select onChange={getCategory}>
      <option value="Any">Any</option>
      <option value="Programming">Programming</option>
      <option value="Misc">Misc</option>
      <option value="Dark">Dark</option>
      <option value="Pun">Pun</option>
      <option value="Spooky">Spooky</option>
    </select>
    <div>
      {joke.setup ? <div> <h1>{joke.setup}</h1> <h1>{joke.delivery}</h1> </div> : <h1>{joke}</h1> }

    </div>
    <p>you have read <strong>{count}</strong> pieces of jokes today</p>
  </div>)
}

export default App