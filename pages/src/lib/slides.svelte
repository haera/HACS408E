<script>
  export let markdown_source;

  import { onMount } from "svelte";

  import Reveal from "reveal.js";
  import Markdown from "reveal.js/plugin/markdown/markdown";
  import Highlight from "reveal.js/plugin/highlight/highlight";
  import Notes from "reveal.js/plugin/notes/notes";

  import x86asmatt from "../js/x86asmatt.js";

  onMount(() => {
    let deck = new Reveal({
      controls: false,
      progress: false,
      slideNumber: "c/t",
      hashOneBased: true,
      hash: true,
      highlight: {
        beforeHighlight: (hljs) => {
          hljs.registerLanguage("x86asmatt", x86asmatt);
        },
      },
      plugins: [Markdown, Highlight, Notes],
    });
    deck.initialize({ embedded: true });
  });
</script>

<div class="reveal">
  <div class="slides">
    <section data-markdown={markdown_source} />
  </div>
</div>

<style>
  @import "reveal.js/css/reveal.scss";
  @import "reveal.js/css/theme/source/night.scss";
  @import "reveal.js/plugin/highlight/monokai.css";

  .reveal {
    height: 90dvh;
  } 
</style>
