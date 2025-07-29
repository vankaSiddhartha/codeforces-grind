https://cognizantonline-my.sharepoint.com/personal/2422912_cognizant_com/_layouts/15/Doc.aspx?sourcedoc={f243816b-5527-40d8-9f8d-6acde7eef6e2}&action=edit&wd=target%28Quick%20Notes.one%7C7a4de0db-ab70-43ad-8888-3fd244bb9367%2FStage2%7Ca5fa50c1-692a-4aaa-a3c4-ceecbf0f4009%2F%29&wdorigin=NavigationUrl

https://cognizantonline-my.sharepoint.com/personal/2422926_cognizant_com/_layouts/15/Doc.aspx?sourcedoc={240af41e-96f6-40ae-998e-65b46f89c292}&action=edit&wd=target%28ansi%20sql.one%7Cb6481fcd-8a97-41f5-af17-26f8f7d1c6df%2FFunctions%20and%20Procedure%7C56cbff6c-f40a-47c8-ba0d-4195157ac9b5%2F%29&wdorigin=NavigationUrl
📁 Folder Structure
event-registration/
│
├── index.html
├── css/
│   └── style.css
├── js/
│   └── script.js
└── assets/
    └── images/
📄 index.html
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8" />
  <meta name="viewport" content="width=device-width, initial-scale=1.0"/>
  <title>Tech Event Registration</title>
  <link rel="stylesheet" href="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/css/bootstrap.min.css"/>
  <link rel="stylesheet" href="css/style.css"/>
</head>
<body>

  <!-- Header -->
  <header class="bg-primary text-white p-4 text-center">
    <h1>Tech Fiesta 2025</h1>
    <p>Register now for workshops, talks, and networking!</p>
  </header>

  <!-- Countdown Timer -->
  <section class="text-center p-3" id="countdownSection">
    <h2>Event Starts In</h2>
    <div id="countdown" class="fs-3 text-danger fw-bold"></div>
  </section>

  <!-- Event Details -->
  <section class="container my-5">
    <h2>Event Details</h2>
    <p>Date: July 20, 2025 | Location: Hyderabad Convention Centre</p>
    <p>Join developers, tech leaders, and innovators across workshops and speaker sessions!</p>
  </section>

  <!-- Schedule -->
  <section class="container my-5">
    <h2>Schedule</h2>
    <ul class="list-group">
      <li class="list-group-item">10:00 AM - Opening Keynote</li>
      <li class="list-group-item">11:30 AM - React Workshop</li>
      <li class="list-group-item">02:00 PM - AI in 2025 Panel</li>
    </ul>
  </section>

  <!-- Features -->
  <section class="container my-5">
    <h2 class="mb-4">Highlights</h2>
    <div class="row text-center">
      <div class="col-md-4">
        <div class="card p-3">
          <h4>10+ Speakers</h4>
        </div>
      </div>
      <div class="col-md-4">
        <div class="card p-3">
          <h4>3 Tracks</h4>
        </div>
      </div>
      <div class="col-md-4">
        <div class="card p-3">
          <h4>Networking Zone</h4>
        </div>
      </div>
    </div>
  </section>

  <!-- Speaker Section -->
  <section class="container my-5">
    <h2>Speakers</h2>
    <div class="row">
      <div class="col-md-4">
        <div class="card">
          <img src="assets/images/speaker1.jpg" class="card-img-top" alt="Speaker 1">
          <div class="card-body">
            <h5 class="card-title">Siddharth Rao</h5>
            <p class="card-text">CEO, FutureTech</p>
            <button class="btn btn-outline-secondary bookmark-btn">🔖 Bookmark</button>
          </div>
        </div>
      </div>
      <!-- Add more speaker cards as needed -->
    </div>
  </section>

  <!-- Registration Form -->
  <section class="container my-5">
    <h2>Register Now</h2>
    <form id="regForm" novalidate>
      <div class="mb-3">
        <label for="name" class="form-label">Full Name *</label>
        <input type="text" class="form-control" id="name" required>
      </div>
      <div class="mb-3">
        <label for="email" class="form-label">Email *</label>
        <input type="email" class="form-control" id="email" required>
      </div>
      <div class="mb-3">
        <label for="track" class="form-label">Choose Track</label>
        <select class="form-select" id="track">
          <option>Frontend</option>
          <option>Backend</option>
          <option>AI/ML</option>
        </select>
      </div>

      <!-- Progress bar -->
      <div class="mb-3">
        <label>Completion:</label>
        <div class="progress">
          <div id="formProgress" class="progress-bar" style="width: 0%;">0%</div>
        </div>
      </div>

      <button type="submit" class="btn btn-primary">Register</button>
    </form>
  </section>

  <!-- Modal -->
  <div class="modal fade" id="confirmationModal" tabindex="-1">
    <div class="modal-dialog">
      <div class="modal-content">
        <div class="modal-header">
          <h5 class="modal-title">Registration Successful</h5>
        </div>
        <div class="modal-body">
          <p>Thank you for registering! We'll send updates to your email.</p>
        </div>
        <div class="modal-footer">
          <button class="btn btn-secondary" data-bs-dismiss="modal">Close</button>
        </div>
      </div>
    </div>
  </div>

  <!-- Bootstrap JS & Custom JS -->
  <script src="https://cdn.jsdelivr.net/npm/bootstrap@5.3.0/dist/js/bootstrap.bundle.min.js"></script>
  <script src="js/script.js"></script>
</body>
</html>
🎨 style.css
body {
  font-family: 'Segoe UI', sans-serif;
}

.card {
  box-shadow: 0 0 10px rgba(0, 0, 0, 0.1);
}

#countdown {
  margin-top: 10px;
}

.bookmark-btn.active {
  background-color: #ffc107;
  color: black;
}
🧠 script.js
// Countdown Timer
const eventDate = new Date("2025-07-20T10:00:00").getTime();
const countdownEl = document.getElementById("countdown");

setInterval(() => {
  const now = new Date().getTime();
  const diff = eventDate - now;

  if (diff < 0) {
    countdownEl.innerText = "Event Started!";
    return;
  }

  const days = Math.floor(diff / (1000 * 60 * 60 * 24));
  const hrs = Math.floor((diff % (1000 * 60 * 60 * 24)) / (1000 * 60 * 60));
  const mins = Math.floor((diff % (1000 * 60 * 60)) / (1000 * 60));
  const secs = Math.floor((diff % (1000 * 60)) / 1000);

  countdownEl.innerText = `${days}d ${hrs}h ${mins}m ${secs}s`;
}, 1000);

// Form Validation and Modal
const form = document.getElementById("regForm");
const modal = new bootstrap.Modal(document.getElementById("confirmationModal"));

form.addEventListener("submit", function (e) {
  e.preventDefault();

  if (!form.checkValidity()) {
    form.classList.add('was-validated');
    return;
  }

  modal.show();
  form.reset();
  updateProgress();
});

// Form Progress Bar
const inputs = form.querySelectorAll("input, select");
const progressBar = document.getElementById("formProgress");

inputs.forEach(input => {
  input.addEventListener("input", updateProgress);
});

function updateProgress() {
  const filled = Array.from(inputs).filter(i => i.value.trim() !== "").length;
  const percent = Math.floor((filled / inputs.length) * 100);
  progressBar.style.width = percent + "%";
  progressBar.innerText = percent + "%";
}

// Bookmark Toggle
document.querySelectorAll('.bookmark-btn').forEach(btn => {
  btn.addEventListener('click', () => {
    btn.classList.toggle('active');
  });
});
