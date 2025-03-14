function Card(stateName, description) {
    return(
        <>    

    <div class="card" id="andhra-pradesh">
        <h2 class="card-heading">{stateName}</h2>
        <img src="{imgSrc}" alt="Tirumala Temple"></img>
        <p></p>
        <div class="card-btns">
            <button class="card-btn-read">Read More</button>
            <button class="card-btn-book">Book Trip</button>
        </div>
    </div>


    </>
    );
}

export default Card;