import React from "react";
import Profile from "../Component/Profile"

function Usermenu({user}){

    return (
        <div>
            <h3>
                User Menu
            </h3>
            <Profile user={user} />
        </div>
    )

}

export default Usermenu;