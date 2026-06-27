
import { use } from 'react'
import './App.css'
import Navbar from './Component/Navbar'

function App() {

  const user = {
    name: "Tushar",
    age:28,
    email: "abc@gmail.com"
  }

  return (
    <>

      <div>
        <h1>
          My Shopping App
        </h1>

        <Navbar user={user} /> 
      </div>



    </>
  )
}

export default App
