<script>
  import { onMount } from "svelte";

  import Reveal from "reveal.js";
  import Markdown from "reveal.js/plugin/markdown/markdown";
  import Highlight from "reveal.js/plugin/highlight/highlight";
  import Notes from "reveal.js/plugin/notes/notes";

  import "reveal.js/css/reveal.scss";
  import "reveal.js/css/theme/source/night.scss";
  import "reveal.js/plugin/highlight/monokai.css";

  onMount(() => {
    let deck = new Reveal({
      controls: false,
      progress: false,
      slideNumber: "c/t",
      hashOneBased: true,
      hash: true,

      highlight: {
        beforeHighlight: (hljs) => {
          // FIXME: x86 AT&T Syntax Highlighting
          //hljs.registerLanguage("x86asmatt", x86asmatt);
        },
      },
      plugins: [Markdown, Highlight, Notes],
    });
    deck.initialize();
  });
</script>

<div class="reveal">
  <div class="slides">
    <section data-markdown="/lectures/intro_assembly_language.md" />
  </div>
</div>
