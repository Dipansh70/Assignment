function getRecipes() {
    let searchValue = document.getElementById("search").value;

    fetch(`https://www.themealdb.com/api/json/v1/1/search.php?s=${searchValue}`)
        .then(response => response.json())
        .then(data => {
            let recipesDiv = document.getElementById("recipes");
            recipesDiv.innerHTML = "";

            if (data.meals === null) {
                recipesDiv.innerHTML = "<h3>No recipe found</h3>";
                return;
            }

            data.meals.forEach(meal => {
                let div = document.createElement("div");
                div.classList.add("card");

                div.innerHTML = ` <img src="${meal.strMealThumb}">
                    <h3>${meal.strMeal}</h3> `;

                div.onclick = () => showRecipe(meal.idMeal);

                recipesDiv.appendChild(div);
            });
        });
}

function showRecipe(id) {
    fetch(`https://www.themealdb.com/api/json/v1/1/lookup.php?i=${id}`)
        .then(response => response.json())
        .then(data => {
            let meal = data.meals[0];

            document.getElementById("recipeDetails").innerHTML = `
                <h2>${meal.strMeal}</h2>
                <img src="${meal.strMealThumb}" width="300">
                <p><b>Category:</b> ${meal.strCategory}</p>
                <p><b>Area:</b> ${meal.strArea}</p>
                <p><b>Instructions:</b><br>${meal.strInstructions}</p>
            `;
        });
}
