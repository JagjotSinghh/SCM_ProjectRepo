const carousel = document.querySelector('.carousel');
const prevButton = document.querySelector('.prev-btn');
const nextButton = document.querySelector('.next-btn');

let currentIndex = 0;

function goToSlide(index) {
    if (index < 0) {
        currentIndex = carousel.children.length - 1;
    } else if (index >= carousel.children.length) {
        currentIndex = 0;
    }
    const translateXValue = -currentIndex * 100 + '%';
    carousel.style.transform = `translateX(${translateXValue})`;
}

function nextSlide() {
    currentIndex++;
    goToSlide(currentIndex);
}

function prevSlide() {
    currentIndex--;
    goToSlide(currentIndex);
}

nextButton.addEventListener('click', nextSlide);
prevButton.addEventListener('click', prevSlide);

