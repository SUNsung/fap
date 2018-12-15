
        
        # -------------------------------------------------------------------
# Benchmarking changes in https://github.com/jekyll/jekyll/pull/6767
# -------------------------------------------------------------------
    
      # The CategoryIndex class creates a single category page for the specified category.
  class CategoryIndex < Page
    
    module Jekyll
    
        def render(context)
      includes_dir = File.join(context.registers[:site].source, '_includes')