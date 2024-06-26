<nav>
  <ul class="horizontal">
    <li><a href="/">HACS408E</a></li>
    <li><a href="/lectures">Lectures</a></li>
  </ul>
</nav>

<slot />

<style>
  ul.horizontal {
    display: flex;
    list-style-type: none;
    margin: 0;
    padding-left: 0;
  }
  li {
    padding-right: 10px;
  }
</style>
