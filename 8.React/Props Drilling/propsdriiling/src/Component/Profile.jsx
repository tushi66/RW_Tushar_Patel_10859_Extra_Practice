import React from "react";

function Profile({user}){

    return(

        <div>
            <h2>Profile</h2>

            <p> Name: {user.name}</p>
            <p> Age: {user.age}</p>
            <p> Email: {user.email}</p>
        </div>
    )
}

export default Profile;

