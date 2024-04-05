// script.js
const dropdownToggle = document.querySelector('.dropdown-toggle');
const dropdownMenu = document.querySelector('.dropdown-menu');
const options = document.querySelectorAll('.dropdown-menu a');

dropdownToggle.addEventListener('click', () => {
    dropdownMenu.classList.toggle('show');
});

options.forEach(option => {
    option.addEventListener('click', (e) => {
        e.preventDefault();
        dropdownToggle.textContent = e.target.textContent;
        dropdownMenu.classList.remove('show');
    });
});

// Hide dropdown menu when clicking outside of it
document.addEventListener('click', (e) => {
    if (!dropdownToggle.contains(e.target) && !dropdownMenu.contains(e.target)) {
        dropdownMenu.classList.remove('show');
    }
});

function myFunction(x) {
x.style.background= "yellow";
}

