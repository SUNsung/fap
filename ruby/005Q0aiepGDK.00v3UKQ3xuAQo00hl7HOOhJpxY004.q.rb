
        
        Liquid::Template.register_tag('blockquote', Jekyll::Blockquote)

    
      # The CategoryIndex class creates a single category page for the specified category.
  class CategoryIndex < Page
    
    Liquid::Template.register_tag('video', Jekyll::VideoTag)