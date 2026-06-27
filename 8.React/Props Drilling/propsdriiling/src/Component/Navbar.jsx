import React from "react";
import Usermenu from "../Component/Usermenu"

const Navbar = ({user}) => {
    
    return(

            <nav>
                <h2>
                    NavBar
                </h2>
                <Usermenu user= {user} />
            </nav>

    )

}

export default Navbar;